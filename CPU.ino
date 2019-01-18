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


String mul(String num1,String num2)
{
 String result;
 if(num1.length()<num2.length())
 {
  String temp = num2;
  num2 = num1 ;
  num1 = temp;
 }
 ///comp(num1,num2);
 int n1=num1.length(),n2=num2.length();
 int carry=0;
 for (int i=n2-1;i>=0;i--){
  String temp;

for (int i=0;i<n2-i-1;i++)
{
  temp+="0";
}
  carry=0;
  for (int j=n1-1;j>=0;j--){
   int x=(num2[i]-'0')*(num1[j]-'0')+carry;
   carry=x/10;
   temp+=String(x%10);
 
  } 

 temp+=carry+'0';
  temp+=String(carry);

   
   reverseStr(temp);

  //reverse(temp.begin(),temp.end());
 result=sum(result,temp);
 }
 
 return result;
}




String sub(String a,String b) 
{
    String ans;
    int s_int,reserv=0;
    char s_char;
    for(int i=1;i<=b.length();i++)
    {
        s_int = a[a.length()-i]-'0' - (b[b.length()-i]-'0') + reserv;
        if(s_int <0)
        {
            s_int +=10;
            reserv = -1;
        }
        else
        {
            reserv = 0;
        }
        s_char = s_int + '0';
        ans+=s_char;
    }
    for(int i=b.length()+1;i<=a.length();i++)
    {
        s_int = a[a.length()-i] - '0'+ reserv;
        if(s_int <0)
        {
            s_int +=10;
            reserv = -1;
        }
        else
        {
            reserv = 0;
        }
        s_char = s_int + '0';
        ans+=s_char;
    }
    reverseStr(ans);
    return ans;
}



String sum(String a,String b)
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

         if (eq)

         {
            display.clearDisplay();
            display.setTextColor(WHITE);
                      display.setTextSize(2);
                    //   display.println("Ram is       Full!!");
                       display.println(" Ram is");
                          display.println(" ");
                             display.println("  FULL :(");
          display.display();
               if(a==16)
                  {
                      display.clearDisplay();
                      Fnum="";
                       Snum="";
                      FNumisFixed=0;
                      SNumisFixed=0;
                       op;
                       eq=0;
                        display.setCursor(0, 0); 
                        display.setTextSize(3);
                       display.print("Clear!");
                 Serial.println("////////////////////////////CLEAR..");
                    
                  }
         }

         else
         {
          
         
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


      if (a==13)
                {
                  display.print(" X ");
                   op=13;
                       FNumisFixed=1;   

                        
                              
                                           
                }

                
                
                   if(a==16)
                  {
                ///    Clearing:
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
                    bool rever=0;
                    
                    SNumisFixed=1;
                    FNumisFixed=1;
                     eq=1;
                      Serial.println("A");
                      if (Fnum.length()<Snum.length())
                      {
                        String temp= Snum;
                        Snum=Fnum;
                        Fnum=temp;
                        rever=1;
                        
                      }
                       Serial.println(Fnum);
                        Serial.println("B");
                       Serial.println(Snum);

                       if (op==11) //sum
                       {
                         Serial.println("Ci is ..");
                       Serial.println(sum(Fnum,Snum));
                        display.clearDisplay();
                        display.setTextSize(1);
                       display.println(sum(Fnum,Snum));
                       display.display();
                       }


                      if (op==12) //sub
                       {
                     
                         Serial.println("Ci is ..");
                       Serial.println(sub(Fnum,Snum));
                        display.clearDisplay();
                        display.setTextSize(1);
                           if (rever==1)
                           {
                              display.print("-");
                           }
                       display.println(sub(Fnum,Snum));
                       display.display();
                       }


                           if (op==13) //mul
                       {
                     
                         Serial.println("Ci is ..");
                       Serial.println(mul(Fnum,Snum));
                        display.clearDisplay();
                        display.setTextSize(1);
                           if (rever==1)
                           {
                              display.print("-");
                           }
                       display.println(mul(Fnum,Snum));
                       display.display();
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

     }

   display.display(); 
}
