int tnt=8;
int taster=3;
int led=2; 
int tasterstatus=0;
long sprengungDelay= 5300000;


void setup() {
   pinMode(tnt,OUTPUT);
   pinMode(led,OUTPUT);
   pinMode(taster,INPUT);
   tasterstatus=0;
   digitalWrite(tnt,LOW);
}

void loop() {
  tasterstatus=digitalRead(taster);
  if(tasterstatus==HIGH){
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(sprengungDelay);
    digitalWrite(tnt,HIGH);
    delay(1000);
    digitalWrite(tnt,HIGH);
    delay(1000);
    tasterstatus=LOW;
    }
    else{
      digitalWrite(led,LOW);
      digitalWrite(tnt,LOW);
      }
   
delay(500);
}
