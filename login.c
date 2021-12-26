#include "DigiKeyboard.h"
const int windows = 2;
//const int facebook = 2;
const int twitter = 1;
const int gmail = 0;
int win_state, fac_state, twit_state, gmail_state;
void setup() {
  // don't need to set anything up to use DigiKeyboard
  pinMode (windows, INPUT);
  //pinMode (facebook, INPUT);
  pinMode (twitter, INPUT); 
  pinMode (gmail, INPUT);
}
void loop() {
  win_state =  digitalRead(windows);
  //fac_state  = digitalRead(facebook);
  twit_state  = digitalRead(twitter);
  gmail_state = digitalRead(gmail); 
  DigiKeyboard.print(twit_state);
  buttons();
}
void buttons()
{
   //Facebook
  /*if (fac_state == LOW){
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https://www.facebook.com/login/device-based/regular/login/?login_attempt=1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.print("Facebook Password");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  }*/
  //Twitter
  if (twit_state == LOW){
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https://twitter.com/login");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.print("Twitter Email");
  DigiKeyboard.delay(1000);
  DigiKeyboard.write('\t');
  DigiKeyboard.print("Twitter Password");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  }
  //Gmail
  if (gmail_state == LOW){
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https://accounts.google.com/AccountChooser/identifier?service=mail&conti...");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.print("Email ID");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);
  DigiKeyboard.print("Email ID Password");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  }
  //Windows
  if (win_state == LOW){
    //DigiKeyboard.print("Windows");
    DigiKeyboard.update(); //Get the Keboard input ready
    DigiKeyboard.sendKeyStroke(0); // Send a null keystroke
    DigiKeyboard.delay(3000);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(2000);
    DigiKeyboard.print("1231");
    DigiKeyboard.delay(2000);
   }
}
