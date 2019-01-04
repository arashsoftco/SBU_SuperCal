#define one 14  
#define two 13  
#define three 12  
#define four 11
#define five 10
#define six 16
#define seven 17
#define eight 18
#define nine 19
#define zero 20
#define sender_digit A2
#define sent 15


void setup()
{
pinMode(one,INPUT_PULLUP);
pinMode(two,INPUT_PULLUP);
pinMode(three,INPUT_PULLUP);
pinMode(four,INPUT_PULLUP);
pinMode(five,INPUT_PULLUP);
pinMode(six,INPUT_PULLUP);
pinMode(seven,INPUT_PULLUP);
pinMode(eight,INPUT_PULLUP);
pinMode(nine,INPUT_PULLUP);
pinMode(zero,INPUT_PULLUP);

}

void PWM_digit(int sig)  /// ADC A2
{
  analogWrite(sender_digit,sig);
  digitalWrite(sent,1);
  delay(100);
  digitalWrite(sent,0);
}

void loop() 
{
  
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
if(r2==1) PWM_digit(200);
if(r3==1) PWM_digit(300);
if(r4==1) PWM_digit(400);
if(r5==1) PWM_digit(500);
if(r6==1) PWM_digit(600);
if(r7==1) PWM_digit(700);
if(r8==1) PWM_digit(800);
if(r9==1) PWM_digit(900);
if(r0==1) PWM_digit(1000);




 
}
