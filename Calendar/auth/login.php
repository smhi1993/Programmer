<?php
    session_start();
    require_once '../functions/helpers.php';
    require_once '../functions/pdo_connection.php';

    if(isset($_SESSION['user']))
    {
        unset($_SESSION['user']);
    }

    $error = '';

    if(
        isset($_POST['email']) && $_POST['email'] !== '' 
        && isset($_POST['password']) && $_POST['password'] !== '' )
        {
            global $pdo;
            $query = 'SELECT * FROM php_project.users WHERE email = ?';
            $statement = $pdo->prepare($query);
            $statement->execute([$_POST['email']]);
            $user = $statement->fetch();
            if($user !== false)
            {
                if(password_verify($_POST['password'], $user->password))
                {
                    $_SESSION['user'] = $user->email;
                    redirect('panel');
                }
                else
                {
                    $error = 'The password is incorrect!';
                }
            }
            else
            {
                $error = 'The entered e-mail is wrong!';
            }
        }
        else
        {
            if(!empty($_POST))
            $error = 'All fields are required!';
        }

?>
<!DOCTYPE html>
<html lang="en">

    <head>
        <meta charset="UTF-8" />
        <meta http-equiv="X-UA-Campatible" content="IE=edge" />
        <meta name="viewport" content="width=device-width , initial-scale=1.0" />
        <link rel="stylesheet" href="../css/calendar.css" />
        <link rel="stylesheet" href="../css/registeration.css" />
        <link 
            rel="stylesheet" 
            href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.2/css/all.min.css" 
            integrity="sha512-z3gLpd7yknf1YoNbCzqRKc4qyor8gaKU1qmn+CShxbuBusANI9QpRohGBreCFkKxLhei6S9CQXFEbbKuqLg0DA==" 
            crossorigin="anonymous" 
            referrerpolicy="no-referrer"
        />
        <title>Log-in|Roozbeh-E-Meh Development Co.</title>
        
    </head>

    <body>
        <a id="login-button" ms-hide-element="true" href="login.php" class="button logout login w-button">Login</a>
        <header>
            <a href="index.php" id="logo">
                <h1>Roozbeh-E-Meh Development Co.</h1>
                <h2>Calendar & Time Management System</h2>
            </a>
            <nav>
                <ul>
                <li><a href="../index.php">Home</a></li>
                <li><a href="../about.php">About</a></li>
                <li><a href="../contact.php">Contact</a></li>
                </ul>
            </nav>
        </header>
        <section class="container">
            <section>
                <section>
                    <h1>Log-In</h1>
                    <section>
                        <small>
                            <?php if($error != '') echo $error; ?>
                        </small>
                    </section>
                    <form action="" method="post">
                        <section class="form-group">
                            <label for="email">Email</label>
                            <input type="email" class="form-control" name="email" id="email" placeholder="Email">
                        </section>
                        <section class="form-group">
                            <label for="password">Password</label>
                            <input type="password" class="form-control" name="password" id="password" placeholder="Password">
                        </section>
                        <section>
                            <input type="submit" class="submit-btn" value="Login">
                            <a class="reg-log-link" href="register.php">Register</a>
                        </section>
                    </form>
                </section>
            </section>
        </section>
        <footer>
            <p>&copy; 2023 Seyyed Mohammad Hadi IzadKhah.</p>
        </footer>

        
    </body>

</html>