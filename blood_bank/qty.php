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
$bg=$_POST['bg1'];
$qty=$_POST['getQty'];
$conn=new mysqli('localhost','root','','blood');
if($conn->connect_error)
{
	echo "error";
}
else{<html><html><head>
<title>
BLOOD_BANK
</title>
<link rel="stylesheet" type="text/css" href="pdapC.css">



</head>
<body bgcolor="pink">
<h1 align="center">SRKR BLOOD BANK MANAGEMENT SYSTEM</H1>
<marquee>Need Blood Urgently? Contact Us</marquee><hr>
<?php
$bg2=$_POST['bg2'];
$conn=new mysqli('localhost','root','','blood');
if($conn->connect_error)
{
	echo "error";
}
else{
	echo "Connected";
	echo "<br>";
}
$ins="select * from bloodb where BloodGroup=$bg2"; 
$sqly=mysqli_query($conn,$ins);
if($row=mysqli_fetch_array($sqly))
{
	echo "<br>";
	echo $row['Quantity'];
	header("refresh:5;url=blood.html");
}
else
{
	echo "Error";
	header("refresh:5;url=blood.html");
}
?>
</body>
</html>

	echo "Connected";
	echo "<br>";
}
$ins="UPDATE bloodb SET Quantity=Quantity-'$qty' WHERE BloodGroup='$bg' and Quantity>='$qty'"; 
if(mysqli_query($conn,$ins))
{
	echo "<br>";
	echo "Blood Found and Extracted. Consult Admin for purchase";
	header("refresh:1;url=blood.html");
}
else
{
	echo "Error";
	header("refresh:1;url=blood.html");
}
?>



</body>
</html><html><html><head>
<title>
BLOOD_BANK
</title>
<link rel="stylesheet" type="text/css" href="pdapC.css">



</head>
<body bgcolor="pink">
<h1 align="center">SRKR BLOOD BANK MANAGEMENT SYSTEM</H1>
<marquee>Need Blood Urgently? Contact Us</marquee><hr>
<?php
$bg2=$_POST['bg2'];
$conn=new mysqli('localhost','root','','blood');
if($conn->connect_error)
{
	echo "error";
}
else{
	echo "Connected";
	echo "<br>";
}
$ins="select * from bloodb where BloodGroup=$bg2"; 
$sqly=mysqli_query($conn,$ins);
if($row=mysqli_fetch_array($sqly))
{
	echo "<br>";
	echo $row['Quantity'];
	header("refresh:5;url=blood.html");
}
else
{
	echo "Error";
	header("refresh:5;url=blood.html");
}
?>
</body>
</html>
