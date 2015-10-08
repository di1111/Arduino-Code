/*
  Arduino Clock and Temp Sense
 Language: Wiring/Arduino

This Program takes the temp from a sense wire and outputs the time and temp.

 */
 
int outputpin = 0      // Tempture output
int timeseconds = 0
int timemin = 0
int timehours = 0

void setup()
{
  // start serial port at 9600 bps:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }
  
  establishContact();  // send a byte to establish contact until receiver responds
}

void loop()
{
  int rawvoltage= analogRead(outputpin);
float millivolts= (rawvoltage/1024.0) * 5000;
float celsius= millivolts/10;
float fahrenheit = (celsius * 9)/5 +32;
timerecord()

Serial.println (timehours + ":" + timemin + ":" + timeseconds);
Serial.println(fahrenheit + "°F");
delay(1000);
}


void timerecord() {
  if (timeseconds < 9) {
    timeseconds + timeseconds + 1;
  }
  if (timeseconds > 9) {
    timeseconds = 0;
    timemin = timemin + 1;
  }
  if (timemin > 59) {
    timemin = 0;
    timehours = timehours + 1;
  }
  if (timehours > 12) {
    timehours = 1;
    timemin = 0;
    timeseconds = 0;
  }
}

