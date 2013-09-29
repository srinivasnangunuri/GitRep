<html>

<head>
<link rel="stylesheet" type="text/css" href="lib_format.css">
</head>
<body>

<div id="container">
<div id="header"><h1>Online Book Store</h1> </br>
<h4> <a href="logout.php">Logout</a></h4>

</div>
<div id="content">

<?php

session_start();

include('db_config.php');

$db_user = $_SESSION['username'];

echo "Hi ".$db_user."<br>";
echo "<br>Please find the list of books under your name";

?>
<table border=2>
<tr>
<th>Book Id </th>
<th>Book Name</th>
</tr>
<?php
$db_user_query = mysql_query("Select userId from user_details where userName='$db_user'");
while($row = mysql_fetch_array($db_user_query))
{
	$userId = $row['userId'];
}

$db_bookid_query = mysql_query("Select bookId from book_user_details where userId='$userId'");
$ind = 0;
while($row = mysql_fetch_array($db_bookid_query))
{
	if($ind == 0)
	{$books = $row['bookId'];}
	
	else {$books = $books.",".$row['bookId'];}
	$ind++;
}


$db_books_query = mysql_query("Select bookId, bookName from book_details where bookId in ($books)");
$no_of_rows = mysql_num_rows($db_books_query);
echo "no_of_rows:".$no_of_rows;
while($row = mysql_fetch_array($db_books_query))
{
	echo "<tr><td>{$row['bookId']}</td>";
	echo "<td> {$row['bookName']}</td></tr>";
}

?>
</div>
</div>
</body>
</html>