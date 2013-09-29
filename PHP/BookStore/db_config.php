<?php
// Connection's Parameters
$db_host="localhost";
$db_name="login";
$username="root";
$password="root123";
$db_con=mysql_connect($db_host,$username,$password);
$connection_string=mysql_select_db($db_name);
// Connection
mysql_connect($db_host,$username,$password);
mysql_select_db($db_name);
?>