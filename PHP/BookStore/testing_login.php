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

$query = mysql_query("Select bookId,bookName from book_details where Availability='1'");
$no_of_books = mysql_num_rows($query);

?>
<br/>
<br/><br/>
<form name="form_addBooks" method="post" action="bookSelect.php">
<table border="3" cellspacing ="4" cellpadding="4">
<tr>
<th> Book Id</th>
<th> Book Name</th>
<th> Add to Cart</th>
</tr>
<?php
while($row = mysql_fetch_assoc($query))
{
	$bookId = $row['bookId'];
	$bookName = $row['bookName'];
	echo "<tr><td>{$bookId}</td><td>{$bookName}</td><td>";
	echo "<input type='checkbox' name='cartList[]' value={$bookId} ></td></tr>";
}
?>
</table>
<br/><br/><input type="submit" value="Add to Your Cart" name="submit" />

</div>
</div>
</body>
</html>