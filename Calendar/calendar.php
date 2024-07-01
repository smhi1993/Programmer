<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8" />
        <meta http-equiv="X-UA-Campatible" content="IE=edge" />
        <meta name="viewport" content="width=device-width , initial-scale=1.0" />
        <link rel="stylesheet" href="css/calendar.css" />
        <link 
            rel="stylesheet" 
            href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.2/css/all.min.css" 
            integrity="sha512-z3gLpd7yknf1YoNbCzqRKc4qyor8gaKU1qmn+CShxbuBusANI9QpRohGBreCFkKxLhei6S9CQXFEbbKuqLg0DA==" 
            crossorigin="anonymous" 
            referrerpolicy="no-referrer"
        />
        <title>Calendar|Roozbeh-E-Meh Development Co.</title>
    </head>
    <body>
        <a id="login-button" ms-hide-element="true" href="auth/logout.php" class="button logout login w-button">Log-Out</a>
        <header>
            <a href="index.php" id="logo">
                <h1>Roozbeh-E-Meh Development Co.</h1>
                <h2>Calendar & Time Management System</h2>
            </a>
            <nav>
                <ul>
                <li><a href="index.php">Home</a></li>
                <li><a href="about.php">About</a></li>
                <li><a href="contact.php">Contact</a></li>
                </ul>
            </nav>
        </header>
        <section class="container">
            <div class="left">
                <div class="calendar">
                    <div class="month">
                        <i class="fa fa-angle-left prev"></i>
                        <div class="date"></div>
                        <i class="fa fa-angle-right next"></i>
                    </div>
                    <div class="weekdays">
                        <div>Sun</div>
                        <div>Mon</div>
                        <div>Tue</div>
                        <div>Wed</div>
                        <div>Thu</div>
                        <div>Fri</div>
                        <div>Sat</div>
                    </div>
                    <div class="days">
                        <!-- we will add days with js -->
                    </div>
                    <div class="goto-today">
                        <div class="goto">
                            <input type="text" placeholder="mm/yyyy" class="date-input" />
                            <button class="goto-btn">go</button>
                        </div>
                        <button class="today-btn">today</button>
                    </div>
                </div>
            </div>
            <div class="right">
                <div class="today-date">
                    <div class="event-day"></div>
                    <div class="event-date"></div>
                </div>
                <div class="events">
                    <!-- we will add events through js -->
                </div>
                <form action="./insertcalendar.php" method="post">
                    <div class="add-event-wrapper">
                        <div class="add-event-header">
                            <div class="title">Add Event</div>
                            <i class="fas fa-times close"></i>
                        </div>
                        <div class="add-event-body">
                            <div class="add-event-input">
                                <input type="text" name="name" placeholder="Event Name" class="event-name" />
                            </div>
                            <div class="add-event-input">
                                <input type="text" name="start" placeholder="Event Time From" class="event-time-from" />
                            </div>
                            <div class="add-event-input">
                                <input type="text" name="end" placeholder="Event Time To" class="event-time-to" />
                            </div>
                        </div>
                        <div class="add-event-footer">
                            <input type="submit" class="add-event-btn" value="add event">
                            <!-- <button class="add-event-btn">add event</button> -->
                        </div>
                    </div>
                </form>
            </div>
            <button class="add-event">
                <i class="fas fa-plus"></i>
            </button>
        </section>
        <footer>
            <p>&copy; 2023 Seyyed Mohammad Hadi IzadKhah.</p>
        </footer>
        

        <script src=".//js/calendar.js"></script>
    </body>
</html>