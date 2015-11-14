int r = 6, g = 5, b = 3, //Pinouts
  redBrightness = 255, greenBrightness = 0, blueBrightness = 0, //Initial Brightness
  fadeAmount = 1;    // how many points to fade the LED by

void setup() {
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of the LED
  analogWrite(r, redBrightness);
  analogWrite(g, greenBrightness);
  analogWrite(b, blueBrightness);
  
  if(redBrightness == 255 && greenBrightness < 255 && blueBrightness == 0)//fade from red to yellow
    greenBrightness += fadeAmount;
    
  if(redBrightness > 0 && greenBrightness == 255 && blueBrightness == 0)//fade from yellow to green
    redBrightness -= fadeAmount;
    
  if(redBrightness == 0 && greenBrightness == 255 && blueBrightness < 255)//fade from green to turquoise
    blueBrightness += fadeAmount;
    
  if(redBrightness == 0 && greenBrightness > 0 && blueBrightness == 255)//fade from turquoise to blue
    greenBrightness -= fadeAmount;
    
  if(redBrightness < 255 && greenBrightness == 0 && blueBrightness == 255)//fade from blue to purple
    redBrightness += fadeAmount;

  if(redBrightness == 255 && greenBrightness == 0 && blueBrightness > 0)//fade from purple to red
    blueBrightness -= fadeAmount;
  delay(10);
}

