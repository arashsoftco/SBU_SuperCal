


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

////////////////////////////////////

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


///////////////////////////////////////////
String sum(String a,String b)
{
  Serial.println("SUM Loading....");  

   if (Fnum.length()<Snum.length() )
                      {
                        String temp= Snum;
                        Snum=Fnum;
                        Fnum=temp;
                        rever=1;
                        
                      }

                      
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


////////////////////////////////////////

String multi(String num1,String num2)
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


  //reverse(temp.begin(),temp.end());
 result=sum(result,temp);
 }
 
 return result;
}
