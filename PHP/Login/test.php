<?php 
include("config.php");
$user = $_REQUEST['username'];
$pass = $_REQUEST['password'];;

$userquery = "SELECT * FROM admin 
WHERE username = '".$user."' and passcode = '".$pass."'" ;
$result = mysql_query($userquery);
$count = mysql_num_rows($result);
$row = mysql_fetch_array($result);
$username = $row['username'];

if($count == 1) {
session_start();
$_SESSION['login_user'] = $username;
header("location: welcome.php");
}else{
echo "User Invalid";
}


?>