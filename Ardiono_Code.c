int obstaclePin1 = 2;
int obstaclePin2 = 3;
int obstaclePin3 = 4;
int Obstacle1 = HIGH;
int Obstacle2 = HIGH;
int Obstacle3 = HIGH;

char payload[10];
//01234
//E@E@E
void setup()
{

  pinMode(obstaclePin1, INPUT);
  pinMode(obstaclePin2, INPUT);
  pinMode(obstaclePin3, INPUT);
  Serial.begin(9600);

}
void loop() {

  Obstacle1 = digitalRead(obstaclePin1);
  Obstacle2 = digitalRead(obstaclePin2);
  Obstacle3 = digitalRead(obstaclePin3);

  if (Obstacle1 == 0) {
    payload[0] = 'F';
  }
  else {
    payload[0] = 'E';
  }

payload[1] = '@';

  if (Obstacle2 == 0) {
    payload[2] = 'F';
  }
  else {
    payload[2] = 'E';
  }

  payload[3] = '@';



  if (Obstacle3 == 0) {
    payload[4] = 'F';
  }
  else {
    payload[4] = 'E';
  }

  payload[5] = '@';
  payload[6] = '\n';
  
Serial.print(payload);

  delay(200);

}