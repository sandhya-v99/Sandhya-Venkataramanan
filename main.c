void setup() {
Serial.begin(9600);
pinMode(8,OUTPUT): //put your setup code here,to run once:
}

void loop() {
// put your main code here,to run repeatedly:
if(Serial.available()>0)
{
char data=Serial.read(): //reading the data recieved from the bluetooth module
switch(data)
{
case 'a': digitalWrite(0,HIGH);
Serial.println("LIGHT IS ON!");
break;
case 'd': digitalWrite(0,LOW);
Serial.println("LIGHT IS OFF!");
break;
default: break;
}
Serial.println(data);
}
delay(200);
}
