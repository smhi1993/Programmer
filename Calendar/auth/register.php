<?php
    require_once '../functions/helpers.php';
    require_once '../functions/pdo_connection.php';



    $error = '';
    if(
    isset($_POST['email']) && $_POST['email'] !== '' 
    && isset($_POST['first_name']) && $_POST['first_name'] !== '' 
    &&  isset($_POST['last_name']) && $_POST['last_name'] !== ''
    &&  isset($_POST['password']) && $_POST['password'] !== '' 
    &&  isset($_POST['confirm']) && $_POST['confirm'] !== '' )
    {
        global $pdo;
        if($_POST['password'] === $_POST['confirm'])
        {
            if(strlen($_POST['password']) > 5)
            {
                $query = 'SELECT * FROM users WHERE email = ?';
                $statement = $pdo->prepare($query);
                $statement->execute([$_POST['email']]);
                $user = $statement->fetch();
                if($user === false)
                {
                    $query = 'INSERT INTO users SET email = ?, first_name = ?, last_name = ?, password = ?, created_at = NOW() ;';
                    $statement = $pdo->prepare($query);
                    $password = password_hash($_POST['password'], PASSWORD_DEFAULT);
                    $statement->execute([$_POST['email'], $_POST['first_name'], $_POST['last_name'], $password]);
                    redirect('auth/login.php');
                }
                else
                {
                    $error = 'The entered email is duplicate!';
                }
            }
            else
            {
                $error = 'The password must be at least 5 characters long!';
            }
        }
        else
        {
            $error = 'The password does not match the password confirmation!';
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
        <title>Register|Roozbeh-E-Meh Development Co.</title>
    </head>

    <body>
        <a id="login-button" ms-hide-element="true" href="login.php" class="button logout login w-button">Log-In</a>
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
                    <h1>Register</h1>
                    <section>
                        <small>
                            <?php if($error !== '') echo $error; ?>
                        </small>
                    </section>
                    <form action="<?= url('auth/register.php') ?>" method="post">
                        <section class="form-group">
                            <label for="email">Email</label>
                            <input type="email" class="form-control" name="email" id="email" placeholder="Email">
                        </section>
                        <section class="form-group">
                            <label for="first_name">First Name</label>
                            <input type="text" class="form-control" name="first_name" id="first_name" placeholder="First Name">
                        </section>
                        <section class="form-group">
                            <label for="last_name">Last Name</label>
                            <input type="text" class="form-control" name="last_name" id="last_name" placeholder="Last Name">
                        </section>
                        <section class="form-group">
                            <label for="password">Password</label>
                            <input type="password" class="form-control" name="password" id="password" placeholder="Password">
                        </section>
                        <section class="form-group">
                            <label for="confirm">Confirm</label>
                            <input type="password" class="form-control" name="confirm" id="confirm" placeholder="Confirm Password">
                        </section>
                        <section>
                            <input type="submit" class="submit-btn" value="Register">
                            <a class="reg-log-link" href="login.php">Login</a>
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