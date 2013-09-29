
<html>

<head>
<link rel="stylesheet" type="text/css" href="lib_format.css">
</head>
<body>

<div id="container">
<div id="header"><h1>Online Book Store</h1> </br>


</div>
<div id="content">

<?php

session_start();

include('db_config.php');


$username = $_POST['userName'];
$password = $_POST['password'];
//connected to db

if(isset($username) && isset($password))
{
	$query = mysql_query("select * from user_details where userName='$username'");
	$no_of_rows = mysql_num_rows($query);

	//validation
	if($no_of_rows !=0)
	{
		while($row = mysql_fetch_assoc($query))
		{
			$db_username = $row['userName'];
			$db_password = $row['password'];
		}
	
		if($username==$db_username && $password == $db_password)
		{ ?>
            <h4> <a href="logout.php">Logout</a></h4>
          <?php echo "Welcome ".$db_username."<br>";
			echo "<ul> <li><a href='testing_login.php'> Order Books</a></li></br>";
			echo "<li><a href='viewBooks.php'> View Books </a></li></ul>";
			$_SESSION['username'] = $db_username;
			$_SESSION['password'] = $db_password;
		}
		else
		{
			echo "Invalid Credentials";
			echo "<br/><br/><a href=\"login.php\">Login Again</a>";
		}

	}	
	else {
		echo "<a href=\"login.php\">Login Again</a>";
		die("<br/><br/>No such username exists");
	}
}	
	
else
{
	die("Please enter valid username and password..");
}
?>
</div>
</div>
</body>
</html>