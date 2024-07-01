<?php
require_once './functions/helpers.php';
require_once './functions/pdo_connection.php';
session_start();

$query = 'INSERT INTO calendar.events SET title = ?, user_id = ?, event_time = ?, start_and_end = ?, created_at = NOW() ;';
$statement = $pdo->prepare($query);
$title = $_POST['name'];
$user_id = $_SESSION['user']['id'];
$event_time = '';
$start = $_POST['start'];
$end = $_POST['end'];
$start_and_end = serialize($start.$end);
$statement->execute([$title, $user_id, $event_time, $start_and_end]);






