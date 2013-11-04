<?php
$to = "sxn127730@utdallas.edu";
$subject = "Test mail";
$message = "Hello! This is a simple email message.";
$from = "Srinivas N";
$headers = "From:" . $from;
mail($to,$subject,$message,$headers);
echo "Mail Sent.";
?> 