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
    Keyboard.press(67);
    delay(100);
  }
  else if(right_click == LOW){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(86);
    delay(100);
  }
  else{
    Keyboard.releaseAll();
  }
}
