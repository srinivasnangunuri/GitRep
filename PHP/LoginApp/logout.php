<?php
session_start();
if(session_destroy())
{
header("Location: login.php");
}
mysql_close($bd);
?>
