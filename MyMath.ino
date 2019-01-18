

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
 
