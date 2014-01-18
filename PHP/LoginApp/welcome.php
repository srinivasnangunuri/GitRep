<!doctype html>
<?php
include("config.php");
session_start();
$username = $_SESSION['login_user'];
?>
<html>
<body>
<h1>Welcome <?php echo $username; ?></h1>

<h3> Books Available: </h3>

<?php
$bookQuery = "select * from book_details";

$books = mysql_query($bookQuery);

while($rows = mysql_fetch_assoc($books)){

echo $rows['bookId']. " - ".$rows['bookName'];
}

?>
</body>
</html>