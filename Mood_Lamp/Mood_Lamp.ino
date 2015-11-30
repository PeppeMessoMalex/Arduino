
// -------------------------------
// RGB Mood Lamp
// Autore: Giuseppe Murabito
// -------------------------------

const int redLEDPin = 11;
const int blueLEDPin = 10;
const int greenLEDPin = 9;

int redValue = 0;
int blueValue = 0;
int greenValue = 0;

void setup() {
  
  // put your setup code here, to run once:
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);

}

void loop() {
  
  // put your main code here, to run repeatedly:
  // RED
  for (redValue=0; redValue<=255; redValue++){
    analogWrite(redLEDPin, redValue);
    delay(10);
   }
   for (redValue=255; redValue>=0; redValue--){
    analogWrite(redLEDPin, redValue);
    delay(10);
   }

   // BLUE
   for (blueValue=0; blueValue<=255; blueValue++){
    analogWrite(blueLEDPin, blueValue);
    delay(10);
   }
   for (blueValue=255; blueValue>=0; blueValue--){
    analogWrite(blueLEDPin, blueValue);
    delay(10);
   }

    // GREEN
   for (greenValue=0; greenValue<=255; greenValue++){
    analogWrite(greenLEDPin, greenValue);
    delay(10);
   }
   for (greenValue=255; greenValue>=0; greenValue--){
     analogWrite(greenLEDPin, greenValue);
     delay(10);
   }
  
}
