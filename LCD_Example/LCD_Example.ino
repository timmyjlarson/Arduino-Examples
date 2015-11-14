#include <U8glib.h>

 U8GLIB_ST7920_128X64 u8g(13, 11, 12, U8G_PIN_NONE);         

 void draw(void) {
  u8g.setFont(u8g_font_7x13);
  u8g.drawStr( 2, 12, "FRC Team 2501");
  u8g.drawStr( 2, 24, "Bionic Polars");
  u8g.drawStr( 2, 36, "Programming Team");
  u8g.drawFrame(0,0,128,64);
}

 void setup(void) { }

 void loop(void) {
  u8g.firstPage();  
  do {
    draw();
  } while( u8g.nextPage() );
  // rebuild the picture after some delay
  delay(500);
}

