//Smart Street Lights Code

const int l1=2;
const int l2=3;
const int l3=4;
const int l4=5;
const int l5=6;
const int i1=7;
const int i2=8;
const int i3=9;
const int i4=10;
const int i5=11;
void setup() {
	// put your setup code here, to run once:

	pinMode(l1,OUTPUT);
	pinMode(l2,OUTPUT);
	pinMode(l3,OUTPUT);
	pinMode(l4,OUTPUT);
	pinMode(l5,OUTPUT);
	pinMode(i1,INPUT);
	pinMode(i2,INPUT);
	pinMode(i3,INPUT);	
	pinMode(i4,INPUT);
	pinMode(i5,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

	if(digitalRead(i1)==LOW)
	{
		digitalWrite(l1,HIGH);
		digitalWrite(l2,HIGH);
		delay(3000);
		digitalWrite(l1,LOW);
		digitalWrite(l2,LOW);
	}
	if(digitalRead(i2)==LOW)
	{
		digitalWrite(l2,HIGH);
		digitalWrite(l3,HIGH);
		delay(3000);
		digitalWrite(l2,LOW);
		digitalWrite(l3,LOW);
	}
	if(digitalRead(i3)==LOW)
	{
		digitalWrite(l3,HIGH);
		digitalWrite(l4,HIGH);
		delay(3000);
		digitalWrite(l3,LOW);
		digitalWrite(l4,LOW);
	}
	if(digitalRead(i4)==LOW)
	{
		digitalWrite(l4,HIGH);
		digitalWrite(l5,HIGH);
		delay(3000);
		digitalWrite(l4,LOW);
		digitalWrite(l5,LOW);
	}
	if(digitalRead(i5)==LOW)
	{
		digitalWrite(l5,HIGH);
		delay(3000);
		digitalWrite(l5,LOW);
	}
}