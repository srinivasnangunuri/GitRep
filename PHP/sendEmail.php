<?php
$to = "test@test.com";
$subject = "Test mail";
$message = "Hello! This is a simple email message.";
$from = "PHP Mailer";
$headers = "From:" . $from;
mail($to,$subject,$message,$headers);
echo "Mail Sent.";
?> 
