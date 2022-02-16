#include <windows.h>
#include <iostream>

void sendKeyDown(unsigned char keyCode) 
{
    INPUT input;
    input.type = INPUT_KEYBOARD;

    input.ki.wVk = keyCode;
    input.ki.dwFlags = 0;
    input.ki.time = 0;
    input.ki.dwExtraInfo = 0;

    SendInput(1, &input, sizeof(INPUT));
}

void sendKeyUp(unsigned char keyCode)
{
    INPUT input;
    input.type = INPUT_KEYBOARD;

    input.ki.wVk = keyCode;
    input.ki.dwFlags = KEYEVENTF_KEYUP;
    input.ki.time = 0;
    input.ki.dwExtraInfo = 0;

    SendInput(1, &input, sizeof(INPUT));
}
int main()
{
     int x,y;
     system("start chrome.exe https:\\www.facebook.com");
     Sleep(5000);  // Time to open facebook site
     
     /* Username Field */
     SetCursorPos(900,252);                                                     // USER-NAME FIELD
     mouse_event(MOUSEEVENTF_LEFTDOWN,x,y,95,70);
     mouse_event(MOUSEEVENTF_LEFTUP,x,y,0,0);
     
     /* Your username ( if username is ' clan.xyz' ) */
     Sleep(200);   sendKeyDown(67); sendKeyUp(67);
     Sleep(200);   sendKeyDown(76); sendKeyUp(76);
     Sleep(200);   sendKeyDown(65); sendKeyUp(65);
     Sleep(200);   sendKeyDown(78); sendKeyUp(78);
     Sleep(200);   sendKeyDown(46); sendKeyUp(46);
     Sleep(200);   sendKeyDown(88); sendKeyUp(88);
     Sleep(200);   sendKeyDown(89); sendKeyUp(89);
     Sleep(200);   sendKeyDown(90); sendKeyUp(90);
     
     
     /* Password Field */
     SetCursorPos(965,350);   // setting cursor postion in facebook password field                                                     // PASSOWRD FIELD
     mouse_event(MOUSEEVENTF_LEFTDOWN,x,y,35,70);
     mouse_event(MOUSEEVENTF_LEFTUP,x,y,0,0);
     
     /* Your password /  /*( if password is 'infoladang' )  */
     Sleep(200);   sendKeyDown(73); sendKeyUp(73); 
     Sleep(200);   sendKeyDown(78); sendKeyUp(78); 
     Sleep(200);   sendKeyDown(70); sendKeyUp(70); 
     Sleep(200);   sendKeyDown(79); sendKeyUp(79);  
     Sleep(200);   sendKeyDown(76); sendKeyUp(76); 
     Sleep(200);   sendKeyDown(65); sendKeyUp(65); 
     Sleep(200);   sendKeyDown(68); sendKeyUp(68);  
     Sleep(200);   sendKeyDown(65); sendKeyUp(65); 
     Sleep(200);   sendKeyDown(78); sendKeyUp(78); 
     Sleep(200);   sendKeyDown(71); sendKeyUp(71); 
     /* Clicking on Log In button */
     SetCursorPos(966,396); 
     mouse_event(MOUSEEVENTF_LEFTDOWN,x,y,35,70);
     mouse_event(MOUSEEVENTF_LEFTUP,x,y,0,0);
     
     //system("pause");
     return 0;  // Program exiting
}
