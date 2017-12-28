## Welcome to the jondobrowser-japlauncher!  

### Intro:  

'japlauncher' turns on/off JAP.jar upon request from 'JonDoBrowser'.  
JonDoBrowser contains 'jondo-launcher@jondos.de' addon, whose function is to call 'japlauncher' with appropriate parameters to turn 'JAP.jar' on/off.  
When browser starts up in 'JonDo' connection mode, 'jondo-launcher' addon calls 'japlauncher' to run 'JAP.jar'.  
When browser terminates or restarts for some reason, 'jondo-launcher' addon calls 'japlauncher' to terminate 'JAP.jar'.  
After starting/terminating 'JAP.jar', it exits immediately in Linux and OSX but keeps running in Windows.  

**Linux/Windows**  
'japlauncher' takes at least 1 input arguments from browser, which is either "on" or "off".  
This indicates whether to start or terminate 'JAP.jar'.  

**OSX**  
'japlauncher' takes at least 2 input arguments from browser.  
First argument is the path of 'JonDoBrowser.app', which is used when starting 'JAP.jar'.  
Second argument is the same as in Linux/Windows.  

### Usage:  

**Windows:**  
Please navigate into 'Windows' directory and refer to its README.  

**Linux:**  
This directory contains c++ project to build 32bit/64bit 'japlauncher' for Linux.  
You can build 32bit/64bit executable in 64bit linux.  
Install prerequisites with the following command.  
`sudo apt-get install gcc-multilib g++-multilib`  
After successful make, copy executables into 'jondobrowser-build/projects/tor-browser/JonDo/JonDo_Linux/'.  

**OSX:**  
This directory contains c++ project to build 64bit 'japlauncher' for MacOS.  
After building the executable, rename it to 'JonDoLauncher' and copy it into 'jondobrowser-build/projects/tor-browser/JonDo/JonDo_OSX/'.  

**OSX-jar2app:**  
This directory contains ant project to build 'JAP.app' which contains JAP.jar and bundled JRE.  
For more information, please refer to its README.  
