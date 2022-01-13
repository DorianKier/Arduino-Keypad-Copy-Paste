#include <Keyboard.h>

#define left_click digitalRead(6)
#define right_click digitalRead(8)

void setup(){
  pinMode(6, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  Keyboard.begin();
}

void loop(){
  if(left_click == LOW){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(99);
    delay(50);
    Keyboard.releaseAll();
  }
  if(right_click == LOW){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(118);
    delay(50);
    Keyboard.releaseAll();
  }
}
