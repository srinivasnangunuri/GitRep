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


$db_user_query = mysql_query("Select userId from user_details where userName='$db_user'");


while($row = mysql_fetch_array($db_user_query))
{
	$userId = $row['userId'];
}



$bookname = $_POST['cartList'];
if(empty($bookname))
  {
    echo("You didn't select any buildings.");
  } 
  else
  {
	  $N = count($bookname);
 
    echo("You selected $N books(s): <br>");
    for($i=0; $i < $N; $i++)
    {
	  $bookquery = mysql_query("Select bookName from book_details where bookId = '$bookname[$i]'");
	while($row = mysql_fetch_assoc($bookquery))
	{
		$book = $row['bookName'];
	}
      echo("<br>".$book);
	  $query = mysql_query("update book_details set availability = '0' where bookId='$bookname[$i]'");
	  $query1 = mysql_query("insert into book_user_details values('$bookname[$i]','$userId')");
    }
  }
?>
<br><br><a href="testing_login.php"> Click here </a> to return back<br>
</div>
</div>
</body>
</html>