<html><html><head>
<title>
BLOOD_BANK
</title>
<link rel="stylesheet" type="text/css" href="pdapC.css">



</head>
<body bgcolor="pink">
<h1 align="center">SRKR BLOOD BANK MANAGEMENT SYSTEM</H1>
<marquee>Need Blood Urgently? Contact Us</marquee><hr>
<?php
$bg=$_POST['bg'];
$qty=$_POST['qty'];
$conn=new mysqli('localhost','root','','blood');
if($conn->connect_error)
{
	echo "error";
}
else{
	echo "Connected";
	echo "<br>";
}
$ins="UPDATE bloodb SET Quantity=Quantity+'$qty' WHERE BloodGroup='$bg'";
if(mysqli_query($conn,$ins))
{
	echo "<br>";
	echo "Inserted";
	header("refresh:1;url=blood.html");
}
else
{
	echo "Error";
	header("refresh:1;url=blood.html");
}
?>



</body>
</html>