<?php
session_start();

session_destroy();

header("Location: login.php");
mysql_close($db_con); 
?>