extern "C"{
void connectToDB();
void sendOTP();
void registerUSER();
void saveScore();
void getOverallScore();
void getWeeklyScore();
}
int g_retVal = 0;
connectToDB();  //Connecting to db 
string msgType ;
cin >> msgType;
switch(msgType) {
case "SENDOTP" :
g_retVal = sendOTP();
break;
case "REGISTERUSER" :
g_retVal = registerUSER();
break;
case "SAVESCORE" :
g_retVal = saveScore();
break;
case "GETOVERALLSCORE" :
g_retVal = getOverallScore();
break;
case "WEEKLYSCORE" : 
g_retVal = getWeeklyScore();
break;
default :
cout << " MessgeType is not handled in the system "<<endl;
break;
}
return 0;
}


