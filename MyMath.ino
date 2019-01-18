

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64 

#define OLED_MOSI   9
#define OLED_CLK   10
#define OLED_DC    11
#define OLED_CS    12
#define OLED_RESET 13
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT,
  OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);







String Regulator(String a , int b)
{

  Serial.println("Regulator...");
  
  String temp="";

  for (int i=0 ; i<b ; i++)
  {
  temp+="0";    
  }

  temp +=a;
  a=temp;


  Serial.println("Regulator...  FIN");
  return a;
}


String sum(String a,String b)
{
  
  Serial.println("SUM F...");
  int df= a.length()-b.length();
   Serial.println(df);
   
 if(df>0)
 {
Serial.println(" a > b ..");
 b= Regulator(b,a.length()-b.length());
  
 }

 else
{
 
String temp;
 temp =  a ;
 a=b;
 b=temp;

Serial.println(" a replace b ..");
   if(a.length()-b.length()>0)
 {
    Serial.println("ABCD");
 b= Regulator(b,a.length()-b.length());
  
 }

 
}


String c=" ";
Serial.println("c created ..");
for (int i=0; i<=a.length() ; i++)
{
  c+=" ";
  
}
  Serial.println("C longer...");

  
  int D=0;
bool maax=0;

  for(  int si=a.length()-1 ; si>=0 ;si--)
  {
    int te =a[si]-'0'+b[si]-'0'+D;
    D=te/10;
    te=te%10;

    c[si]=te+'0';
    if (D==1 && si==0) maax=1;
    
    Serial.println("c char is ");
     Serial.print(c[si]);
     
  }

if (maax)
   c="1"+c;


Serial.println("......................C is ");
Serial.print(c);
 return c;

}




void receiveEvent(int howMany)

{
  while (1 < Wire.available()) 
  {
    char c = Wire.read(); 
    Serial.print(c);        
  }
  int x = Wire.read();
  Serial.println(x);         
  Drawi(x);

  
}


void setup() {
    Wire.begin(8);                // join i2c bus with address #8
        
  
  Serial.begin(9600);

 
  if(!display.begin(SSD1306_SWITCHCAPVCC)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }


  


  display.clearDisplay();


///SCroll();

///Intro(); 

Serial.print("Intro..");

  Wire.onReceive(receiveEvent);
}

void loop()
{
 delay(100); 
}



String Fnum="";
String Snum="";

bool FNumisFixed=0;
bool SNumisFixed=0;
int op;
bool eq=0;

void Drawi(int a) 
{
  display.clearDisplay();

  display.setTextSize(1);     
  display.setTextColor(WHITE);
  display.setCursor(0, 0);    
  display.cp437(true);        


if (a>=10)
{  
  
  display.setTextSize(8); 
  
  switch(a)
          {
               case(11):
                {
                  display.print(" + ");
                   op=11;
                       FNumisFixed=1;
                   break;
                }
     
  
   
                case(12):
                {
                   display.print(" - ");
                   op=12;
                   break;
                }
    
  
   
                case(13):
                {
                   display.print(" X ");
                   op=13;
                   break;
                }
                  

                   case(14):
                   {
                     display.print(" / ");
                     op=14;
                   break;
                   }


                    case(16):
                  {
 Fnum="";
 Snum="";

FNumisFixed=0;
SNumisFixed=0;
 op;
 eq=0;
    display.setTextSize(3); 
 display.print("Clear!");
                 
                     break;
                  }


                  
                 case(17):
                  {
                    SNumisFixed=1;
                    FNumisFixed=1;
                     eq=1;

String c = sum(Fnum,Snum);
Serial.println("FNUm is ");
Serial.print( FNumisFixed);
Serial.println("SNUm is ");
Serial.print( FNumisFixed);
Serial.println("SUM is ");
Serial.print( FNumisFixed);
  display.clearDisplay();
    display.setTextSize(1);  
 display.println(c);
                
                     break;
                  }
     
                   case(18):
                  {
                  op=18;
                    display.print("0x88");
                     break;
                  }
    
     
                   case(19):
                   {
                    op=19;
                      display.setCursor(10, 10); 
                      display.setTextSize(3); 
                    display.print("A ^ B");
                   break;
                   }
                   
     
       }

}


/// if was a range

else
{
  if(!FNumisFixed)
  {  
    
    Fnum+=String(a);
   display.print(Fnum);
    
  }

 if(FNumisFixed)
  {  
    
    Snum+=String(a);
   display.print(Snum);
    
  }

} 


//////////
if(!eq)
{
  
}

display.display();
    delay(2000);
}

void Intro(void) {
  display.clearDisplay();

  display.setTextSize(1);         

  display.setCursor(0,0);            
  display.println(F("Arashsoft EAI"));

 display.println(" ");

  display.setTextSize(2);             
  display.setTextColor(WHITE);
  display.print("SBU");
 display.println("  ");
 
  display.setTextSize(2);            
  display.setTextColor(WHITE);
  display.println("Super Cal :)");
  
  display.display();
  delay(2000);
}

void SCroll()
{
  display.clearDisplay();
  display.setTextSize(2);
  display.setCursor(10, 0);
  display.println(F("Arashsoft EAI"));
  display.display();    
  delay(100);


  display.startscrollright(0x00, 0x0F);
  delay(2000);
  display.stopscroll();
  delay(1000);
  display.startscrollleft(0x00, 0x0F);
  delay(2000);
  display.stopscroll();
  delay(1000);
  display.startscrolldiagright(0x00, 0x07);
  delay(2000);
  display.startscrolldiagleft(0x00, 0x07);
  delay(2000);
  display.stopscroll();
  delay(1000);
}
