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
void reverseStr(String &str)
{
    Serial.println("Reverce Loading....");
      Serial.println(str);
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    {
      char temp = str[i];
      str[i]=str[n - i - 1];
       str[n - i - 1]=temp;
    }
  Serial.println(str);
        Serial.println("Reverse Fin....");
}


String sum_pos(String a,String b)
{
  Serial.println("SUM Loading....");  
    String ans;
    int s_int,bishtar_az_10;
    char s_char;
    bishtar_az_10 = 0;
    for(int i=1;i<=b.length();i++)
    {
        s_int = a[a.length()-i]-'0'+b[b.length()-i]-'0'+bishtar_az_10;
        bishtar_az_10 = s_int/10;
        s_int = s_int%10;
        s_char = s_int+ '0';
        ans+= s_char;
         Serial.println("........ans till now is");
           Serial.println(ans); 
       
    }
    int i = b.length()+1;
    b.remove(0);
    for(i;i<=a.length();i++)
    {    
        s_int = a[a.length()-i]-'0' + bishtar_az_10;
        bishtar_az_10 = s_int/10;
        s_int = s_int%10;
        s_char = s_int+ '0';
        ans+= s_char;
   a.remove(a.length());
              Serial.println("........ans till now is");
           Serial.println(ans);
    }
    if(bishtar_az_10 != 0 )
    {
        ans+= bishtar_az_10 + '0';
    }
    reverseStr(ans);
    return ans;
}


String sum(String a,String b) // do adad ba har sharayeti ro jam mikone
{
    String ans;
 
        ans = sum_pos(a,b);
     Serial.println("ANS ..");
       Serial.println(ans);
    return ans;
}
void receiveEvent(int howMany)

{
  int x = Wire.read();;
  Drawi(x);
}


void setup() {
    Wire.begin(8);                // join i2c bus with address #8 
  Serial.begin(9600);
 
  if(!display.begin(SSD1306_SWITCHCAPVCC)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }
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
  

         if (a==11)
                {
                  display.print(" + ");
                   op=11;
                       FNumisFixed=1;
              

                }
        if (a==12)
                {
                  display.print(" - ");
                   op=12;
                       FNumisFixed=1;
              

                }

                
                   if(a==16)
                  {
 Fnum="";
 Snum="";
FNumisFixed=0;
SNumisFixed=0;
 op;
 eq=0;
  display.setTextSize(3);
 display.print("Clear!");
                 Serial.println("////////////////////////////CLEAR..");
                    
                  }


                  
                if(a==17)
                  {
                    SNumisFixed=1;
                    FNumisFixed=1;
                     eq=1;
                      Serial.println("A");
                      if (Fnum.length()<Snum.length())
                      {
                        String temp= Snum;
                        Snum=Fnum;
                        Fnum=temp;
                      }
 Serial.println(Fnum);
  Serial.println("B");
 Serial.println(Snum);
 Serial.println("Ci is ..");
 Serial.println(sum(Fnum,Snum));
  display.clearDisplay();
  display.setTextSize(1);
 display.println(sum(Fnum,Snum));
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
   
}
