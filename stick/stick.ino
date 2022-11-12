/*
 * make a smart stick that helps the Blind
 */
#define trigPin 9
#define echoPin 8
#define Buzzer1 5  //active
#define Led1 6     //Vibration


int sound = 100;


void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(Buzzer1, OUTPUT);
  pinMode(Led1, OUTPUT);
}

void loop() {
  Serial.begin(9600);

  long duration, distance;
  digitalWrite(trigPin, LOW);
  delay(2);
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  digitalWrite(Buzzer1, LOW);
  digitalWrite(Led1, LOW);

  if (distance <= 40) {
    digitalWrite(Led1, HIGH);
    delay(200);
    digitalWrite(Buzzer1, HIGH);
    delay(200);
      
  }
}