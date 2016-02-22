@ECHO off 
:start
set option = null
ECHO.
ECHO. -------------------------------------
ECHO.   Hide Your Epic High Pings.	
ECHO.
ECHO.
ECHO.   ***   By pratyush997.   *** 	
ECHO.		
ECHO. ------------------------------------
ECHO.
ECHO.
color 0F
ECHO.   1   HIDE  Ping.
ECHO.
ECHO.   2   SHOW  Ping.
ECHO.
ECHO. -------------------------------------
ECHO.
ECHO.   0 to Create Firewall Rule.  (Do this just once)
ECHO.
ECHO. -------------------------------------
ECHO.
ECHO.  RUN THIS SCRIPT AS ADMINISTRATOR. 
ECHO.	
ECHO. -------------------------------------
ECHO.
SET /p option= 		: 

if %option%==1 		 ( goto Enable )        
if %option%==2 		 ( goto Disable )       
if %option%==0 		 ( goto Create )
if %option% GTR 2         exit 


:Enable
netsh advfirewall firewall set rule name="ping" new enable=yes
@pause 
exit
)

:Disable
netsh advfirewall firewall set rule name="ping" new enable=no
@pause 
exit
)

:Create
netsh advfirewall firewall add rule name="ping" protocol=icmpv4:any,any dir=out action=block
@pause 
exit
)
