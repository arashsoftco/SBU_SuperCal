#include <Wire.h>


#define n1 8
#define n2 0
 #define n3 9
#define n4 7
#define n5 1
#define n6  21 
#define n7  20 
#define n8  19 
#define n9  18 
#define n0  30 
#define sum  6   ///////////////////////                                                           SUMMMMM
#define sub  17 
#define mul  15 
#define divi  5 
#define back  3 
#define cl 14
#define eq  2 
#define sqr 16
#define po 10

void sending(int a)
{ 
  digitalWrite(31,1);
  delay(100);
   digitalWrite(31,0);
  delay(100);

    Wire.beginTransmission(8); // transmit to device #8
 
 Wire.write(a);              

Wire.endTransmission(); 
  
 

  
}


void setup() {

  Wire.begin();
  // put your setup code here, to run once:
pinMode(n1,INPUT);
pinMode(n2,INPUT);
pinMode(n3,INPUT);
pinMode(n4,INPUT);
pinMode(n5,INPUT);
pinMode(n6,INPUT);
pinMode(n7,INPUT);
pinMode(n8,INPUT);
pinMode(n9,INPUT);
pinMode(n0,INPUT);


pinMode(31,OUTPUT);



pinMode(sum,INPUT);
pinMode(sub,INPUT);
pinMode(mul,INPUT);
pinMode(divi,INPUT);
pinMode(back,INPUT);
pinMode(cl,INPUT);
pinMode(eq,INPUT);
pinMode(sqr,INPUT);
pinMode(po,INPUT);







}

void loop() {
  // put your main code here, to run repeatedly:


 int n1r=digitalRead(n1);
  int n2r=digitalRead(n2);
   int n3r=digitalRead(n3);
    int n4r=digitalRead(n4);
    int n5r=digitalRead(n5);
  int n6r=digitalRead(n6);
    int n7r=digitalRead(n7);
    int n8r=digitalRead(n8);
    int n9r=digitalRead(n9);
    int n0r=digitalRead(n0);

   int sumr=digitalRead(sum);
    int subr=digitalRead(sub);
    int mulr=digitalRead(mul);
    int divir=digitalRead(divi);
    int backr=digitalRead(back);
  int clr=digitalRead(cl);
 int eqr=digitalRead(eq); 
 int sqrr=digitalRead(sqr);
  int por=digitalRead(po);



                if(n1r==1) 
                sending(1);

                if(n2r==1) 
                sending(2);

                    if(n3r==1) 
                sending(3);

                    if(n4r==1) 
                sending(4);
              
                if(n5r==1) 
                sending(5);
              
               if(n6r==1) 
                sending(6);

                    if(n7r==1) 
                sending(7);
              
                if(n8r==1) 
                sending(8);

                 if(n9r==1) 
                sending(9);
              
                if(n0r==1) 
                sending(0);




                if(sumr==1) 
                sending(11);
                     if(subr==1) 
                sending(12);

                      if(mulr==1) 
                sending(13);
              
                if(divir==1) 
                sending(14);

                         if(backr==1) 
                sending(15);

                      if(clr==1) 
                sending(16);

                        if(eqr==1) 
                sending(17);


                 if(sqrr==1) 
                sending(18);

                
                 if(por==1) 
                sending(19);

                
////////////////////////////


  
}
