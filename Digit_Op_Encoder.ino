#define one 14  
#define two 7  
#define three 13  
#define four 11
#define five 10
#define six 16
#define seven 17
#define eight 18
#define nine 19
#define zero 20
#define sender_digit A2
#define sent 15


//// ADC ERROR

void setup()
{
  
pinMode(one,INPUT);
pinMode(two,INPUT);
pinMode(three,INPUT);
pinMode(four,INPUT);
pinMode(five,INPUT);
pinMode(six,INPUT);
pinMode(seven,INPUT);
pinMode(eight,INPUT);
pinMode(nine,INPUT);
pinMode(zero,INPUT);
pinMode(sent,OUTPUT);

}

void PWM_digit(int sig)  /// ADC A2
{
  sig=100;
 analogWrite(sender_digit,sig);
  digitalWrite(sent,1);
 
  delay(20);
  digitalWrite(sent,0);
  //

  
}

void loop() 
{
  //PWM_digit(100);
  
 int r1 = digitalRead(one);
 int r2 = digitalRead(two);
 int r3 = digitalRead(three);
 int r4 = digitalRead(four);
 int r5 = digitalRead(five);
 int r6 = digitalRead(six);
 int r7 = digitalRead(seven);
 int r8 = digitalRead(eight);
 int r9 = digitalRead(nine);
 int r0 = digitalRead(zero);


if(r1==1) PWM_digit(100);
else
if(r2==1) PWM_digit(100);
else
if(r3==1) PWM_digit(300);
else
if(r4==1) PWM_digit(400);
else
if(r5==1) PWM_digit(500);
else
if(r6==1) PWM_digit(600);
else
if(r7==1) PWM_digit(700);
else
if(r8==1) PWM_digit(800);
else
if(r9==1) PWM_digit(900);
else
if(r0==1) PWM_digit(1000);
else
 analogWrite(sender_digit,0);




 
}
