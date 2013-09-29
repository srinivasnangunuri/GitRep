<?php
include("Config.php");
session_start();

// username and password sent from Form
$myusername=addslashes($_POST['username']);
$mypassword=addslashes($_POST['password']);
$error = "";
$sql="SELECT id FROM admin WHERE username='$myusername' and passcode='$mypassword'";
$result=mysql_query($sql);
$row=mysql_fetch_array($result);
$active=$row['active'];
$count=mysql_num_rows($result);


// If result matched $myusername and $mypassword, table row must be 1 row
if($count==1)
{
//session_register("myusername");
$_SESSION['login_user']=$myusername;

header("location: welcome.php");
}
else
{
$error="Your Login Name or Password is invalid";
}
echo $error;
echo "<br/><br/><a href=\"login.php\">Login</a>";
?>
