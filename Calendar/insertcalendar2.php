 <?php
// require './database.php';
// global $conn;
// $v = '08:00 to 09:00';
// $v_serialized = serialize($v);
// $query = "INSERT INTO events (title, user_id, event_time , start_and_end , created_at)
// VALUES ('hadi', '1', '2023-09-19 21:56:22', '$v', NOW())";
//   $conn->exec($query);

// echo "New record created successfully"; 

$servername = "localhost";
$username = "root";
$password = "";
$dbname = "calendar";

$conn = mysqli_connect($servername, $username, $password, $dbname);

if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}

$v = '08:00 to 09:00';
$v_serialized = serialize($v);
$query = "INSERT INTO events (title, user_id, event_time , start_and_end , created_at)
VALUES ('hadi', '1', '2023-09-19 21:56:22', '$v_serialized', NOW())";

$result = mysqli_query($conn, $query);

if ($result) {
    echo "New record created successfully";
} else {
    echo "Error: " . mysqli_error($conn);
}

mysqli_close($conn);
?>
