/*  

Dev cpp 5.1
OS: Win10
  _____ ____  _    _    _____                          _____      _ 
 / ____|  _ \| |  | |  / ____|                        / ____|    | |
| (___ | |_) | |  | | | (___  _   _ _ __   ___ _ __  | |     __ _| |
 \___ \|  _ <| |  | |  \___ \| | | | '_ \ / _ \ '__| | |    / _` | |
 ____) | |_) | |__| |  ____) | |_| | |_) |  __/ |    | |___| (_| | |
|_____/|____/ \____/  |_____/ \__,_| .__/ \___|_|     \_____\__,_|_|
                                   | |                              
                                   |_|                              

  _   _   _   _   _   _   _   _   _   _   _  
 / \ / \ / \ / \ / \ / \ / \ / \ / \ / \ / \ 
( A | r | a | s | h | R | e | z | a | e | e )
 \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/ 


  _   _   _   _   _   _     _   _   _   _   _   _   _  
 / \ / \ / \ / \ / \ / \   / \ / \ / \ / \ / \ / \ / \ 
( P | a | r | d | i | s ) ( S | o | d | e | i | f | i )
 \_/ \_/ \_/ \_/ \_/ \_/   \_/ \_/ \_/ \_/ \_/ \_/ \_/ 


  _   _   _   _   _   _   _   _   _   _     _   _   _   _   _   _  
 / \ / \ / \ / \ / \ / \ / \ / \ / \ / \   / \ / \ / \ / \ / \ / \ 
( S | h | a | g | h | a | y | e | g | h ) ( V | e | s | a | l | i )
 \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/ \_/   \_/ \_/ \_/ \_/ \_/ \_/ 



*/
#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
//#include <thread.hpp>
using namespace std;
HWND consoleWindow = GetConsoleWindow();	
#define WX 200
#define WY 190
#define MAX 701
bool Aisfixed=0;
bool ProblemBool = false;
string Title="So what Can I do for you ? ";
string FTitle="First Num:";
string STitle="Second Num:";
typedef class A2PS 
{
	public : int D[MAX] = {0};  // we make a max array of 0 
	public: int size = 0;
public:	bool sign = 0;
};
A2PS Sub(A2PS , A2PS);
A2PS Mul(A2PS , A2PS);
A2PS Pow(A2PS,A2PS);
A2PS input();
bool checks(string);  //Proccecing DATA with Sign and Letter
A2PS StringToA2PS(string);   // Convert String To A2PS Type
void CalPrintOUT(A2PS);
A2PS ZeroAnalyze(A2PS);   //REmove 0 befor number not sign
A2PS Sum(A2PS , A2PS);	     /// Sum a + (-b)  is Sub a, b
void shaking();
int maxsize(A2PS , A2PS);  
bool MaxData(A2PS , A2PS);
A2PS ShiftRight(A2PS , int);   /// Shift Right ShiftRight(13 , 2) => 0013
A2PS Divi(A2PS , A2PS);
A2PS Sqr(A2PS);
bool IsSame(A2PS , A2PS);  // Chacking 2 input if same returm 1
void Location(int , int);    /// Handel Location
void ArashASCIGART();  //Handel Graphic
std::string getFileContents (std::ifstream&);            //Gets file contents


A2PS Pow(A2PS a,A2PS b)
{

	A2PS One;
	One.size=1; One.D[0]=1;
	A2PS PH;
	PH.size=1; PH.D[0]=1;
	
	/// b is minPH
	b=Sum(b,One);
	
	while(Sub(b,One).D[0]!=0)
	{
		b=Sub(b,One);
	PH=Mul(a,PH);
	//	cout<<"3";
	}
return(PH);
		//	
//	cout<<"2";
//	while()
}


int main()
 {
 	
 	SetWindowPos(consoleWindow, 0, WX, WY, 0, 0, SWP_NOSIZE | SWP_NOZORDER);  ///Graphical
	ArashASCIGART();  //Graphic
	system("cls");
  	system("MODE CON COLS=117 LINES=26");
	system("color B");	
   ifstream Reader ("necessary.txt");             //Open file
string Art = getFileContents (Reader);       //Get file
    
    for(int i=0; i<1060 ; i++)
    {
    	 std::cout << Art[i];
    	 Sleep(3);
	}
   ;// << std::endl;               //Print it to the screen

    Reader.close ();  
    
 Sleep(2000);
 
	A2PS a , b;
 //boost::thread thrd(&helloworld);
   //  thrd.join();	
STR:
	///system("cls");
		SetWindowPos(consoleWindow, 0, WX, WY, 0, 0, SWP_NOSIZE | SWP_NOZORDER);  ///Graphical
	  ProblemBool=0;
	ArashASCIGART();  //Graphic
	Location(2,2); //Graphic
for (int i=0 ; i<FTitle.length();i++)
{
	cout<<FTitle[i];
	Sleep(50);
}
	Location(2,4); //Graphic
	cout<<char(175)<<char(175)<<"  ";
			// cahr 175 is  //Graphic
	a = input();
			//// in input we could have problem
	if(ProblemBool)
		goto ProblemF;
	else
	Aisfixed=1;
	//////////////////////////////
    int op;
	Location(42,6);
	for(int i=0 ; i<Title.length();i++)	{	cout<<Title[i];	Sleep(50);	}
	Location(42,7);
		cout<<"\t1. ";	Sleep(50);
		cout<<char(175); Sleep(50);
		cout<<"   +";;	
	Location(42,8);
		cout<<"\t2. ";	Sleep(50);
		cout<<char(175);Sleep(50);
		cout<<"   -";;
	Location(42,9);	
		cout<<"\t3. ";	Sleep(50);
		cout<<char(175);Sleep(50);
		cout<<"   x";;
	Location(42,10);
		cout<<"\t4. ";
		Sleep(50);
		cout<<char(175);
		Sleep(50);	cout<<"   /";
	Location(42,11);
			cout<<"\t5. ";	Sleep(50);
		cout<<char(175);	Sleep(50);
		cout<<"   "<<char(251);
	Location(42,12);
	cout<<"\t6. ";	Sleep(50);
	cout<<char(175);	Sleep(50);
	cout<<"   ^";	Sleep(50);	
	Location(42,14);
	cout<<char(175)<<"  ";
cin>>op;	
	getchar();	
	Location(2,15);
// Till Here we analyze input and fix it..
  if (!(op/10))
   {	
	if(op == 5)  // sqrt
	{
		if (a.sign)
		{
			
		MessageBox(NULL, TEXT( "I can not Find The root" ), TEXT( "Error" ), MB_OK | MB_ICONERROR );
	    ProblemBool = true;
	    goto ProblemF;
		}
		else
	 	{
		Location(2,19);
	    cout<<char(175)<<"  "<<char(251);
		CalPrintOUT(a);
		cout<<" = ";
		CalPrintOUT(Sqr(a));
		goto Final;
		}
	}
for (int i=0 ; i<STitle.length();i++) { cout<<STitle[i];	Sleep(50);}
	Location(2,17);
	cout<<char(175)<<"  ";	
      b = input();   if(ProblemBool)	goto ProblemF;		
	Location(2,19);
	cout<<char(175)<<"  ";
	
	if (op == 1) {	cout<<" = ";
		
		if(a.sign==1) {
			 if(b.sign==1) {
			     A2PS c;
				c = Sum(a , b);
				c.sign = true;
				CalPrintOUT(c);
				goto Final;
			}
			
			else {	CalPrintOUT(Sub(b , a));		goto Final;			}
		}
		
		else {
		
						
			if(b.sign==1) {
				
				CalPrintOUT(Sub(a , b));
				goto Final;
				
			}
			
			else {
				
				CalPrintOUT(Sum(a , b));
				goto Final;
				
			}
	
		}
		
	}

	if (op == 2)    // sub
	{
		
		cout<<" = ";
		
		/* eg
		
		a=23  a.sign = 0
		a=23 a.sign=1
		a=-23 a.sign=1
		
		*/
		
		
		
		if(a.sign==1)    // eg : a=23
		
		 {	
				if(b.sign==0)  // a:-23  b:
			{
				
				A2PS c;
				c = Sum(a , b);
				c.sign = true;
				CalPrintOUT(c);
				goto Final;
				
			}
			
			else {
				
				CalPrintOUT(Sub(b , a));
				goto Final;
				
			}
			
		
			
		}
		
		else   // a = -23
		
		 {
				
			if(b.sign==0) {
				// eg 23,14
				CalPrintOUT(Sub(a , b));
				goto Final;
				
			}
			
			else {
				// 23 , -13
				CalPrintOUT(Sum(a , b));
				goto Final;
				
			}
		
						
		}
	}
	
	if (op == 3)
   {
		
	
	cout<<" = ";
CalPrintOUT(Mul(a , b));
		goto Final;
	}
	
	
		if (op == 6)
   {
   	if(b.sign)
   	{
   	
   
   		cout<<"0";
   		goto Final;
	   }
   	cout<<" = ";
	
	CalPrintOUT(Pow(a,b));
		goto Final;
	}
	
	
	if (op == 4) {
		
	//		system("DATE");
			
		A2PS c;
		c = Divi(a , b);
		if(ProblemBool)
			goto ProblemF;
		cout<<" = ";
		CalPrintOUT(c);
		goto Final;
	}
	
	
}

else
{
	
		//	op=0;
		MessageBox(NULL, TEXT( "Sorry My Ability is LIMITED " ), TEXT( "Error" ), MB_OK |  MB_ICONASTERISK );
		
		////  //Graphical MessageBox
		goto ProblemF;
		

}




ProblemF:
	
	{		
	if (op==0 && Aisfixed)  //
	{
		
			MessageBox(NULL, TEXT( "You Just made me a problem For MEEE \n kidding ME? \n I Have to Sleep" ), TEXT( "Error" ), MB_OK |  MB_ICONASTERISK );
			exit(0);
	}
			ProblemBool = false;
			Location(0,23);
	
//
//

	
shaking();


 //Graphic
  //Shaking... :)
 
 //Graphic
//// Shaking Finish


cout<<endl;
  
  
  Location(40,18);
///system("pause");
	system("cls"); 

	goto STR;
	}


Final:
	
	{

				system("color f9");
		  Location(40,15);
		
system("pause");
	
	goto STR;
	
	
	}

	


	
}


// Function defenitions


int maxsize(A2PS a, A2PS b) {
	
	return (a.size > b.size) ? a.size : b.size;
	
}


bool MaxData(A2PS a , A2PS b) {
	
	if (a.size > b.size)
		return 1;

	if (b.size > a.size)
		return 0;
	
	for ( int i = 0 ; i < a.size ; i++ ) {
		
		if(a.D[i] > b.D[i])
			return 1;
		if(b.D[i] > a.D[i])
			return 0;
			
	}
	
	return 1;
}


A2PS input() 
{
	
	char s[MAX];
	A2PS out;
	int a[MAX];
	CONSOLE_SCREEN_BUFFER_INFO csbi;
 	GetConsoleScreenBufferInfo(GetStdHandle( STD_OUTPUT_HANDLE ),&csbi);
 	cout<<"0";
 	Location(csbi.dwCursorPosition.X , csbi.dwCursorPosition.Y);
	
	do {
		
		cin.getline (s , MAX+3);
		
		if ( checks(s)==0 )
		
		{
			MessageBox(NULL, TEXT( "Wrong Input!" ), TEXT( "Error" ), MB_OK );
			ProblemBool = true;
			return out;
		}
		
		else 
				out = StringToA2PS(s);
			
	
		
	} while ( checks(s)==0 );
	
	return ZeroAnalyze(out);
}


A2PS StringToA2PS(string s) {	// we chack all that they are not  letter	// so here we have :	//eg --23 --00023 ----032 ---32
		A2PS out;
	bool sign = 0;
	int i = 0;

	for ( ; i < s.size() && ( s[i] == '-' || s[i] == '+' ) ; i++ )	///// Analyzing n(-)a
		if(s[i] == '-')
			sign = !sign;		
		// Fizing the i to index of last sign
		
		
	int j = 0;
	
	for ( ; i < s.size() ; i++ )
		out.D[j++] = int(s[i] - '0');
	
	
	
	out.size = j;   // this j include number size without sign Eg: -00023  j=
	out.sign = sign;
	
	return out;/// DOESN'T have SIGN    !!  MAY BE HAVE ZERO BEFORE :(
}


bool checks(string s)
 {

	bool sign = 1;
	
	for(int i = 0 ; i < s.size() ; i++ ) 
	{
		
			if( sign==0 && (s[i]>='0' && s[i]<='9')==0 )
			return 0;
			
			
		if( (s[i] == '-' || s[i] == '+')==0 && sign)
		 {
			
			if(s[i] >= '0' && s[i]<='9')
				sign = 0;
		
			else
				return 0;
		
		}
		


	}
	

	return 1;
}


void CalPrintOUT(A2PS in) {
	
	if(in.sign)
		cout<<"-";
	
	for(int i = 0 ; i < in.size ; i++ )
	{
		Sleep(30);
			cout<<in.D[i];
	}
	

}


A2PS ZeroAnalyze(A2PS a)  /// Till now we check SIGN and LETTER  // NOW TIME TO REMOVE THOSE ZERO IN SIZE
 {

	int i ;
	
	for ( i = 0 ;  a.D[i] == 0  && i < (a.size - 1)  ; i++ )
	;                  /// !!!!  finding last 0
	

/////////////////////////////////////////// We are out of For
	for (int j = i ; j < a.size ; j++ )
		a.D[j-i]=a.D[j];
		///// Replacing 0 with other
		
		
	a.size = a.size - i;
	
if (a.D[0]==0)
{
	a.sign=0;
}
	
	return a;
	
}


A2PS Sum(A2PS a , A2PS b) {
	

	A2PS O;
	O.sign = 0;

	O.size = maxsize(a,b)+1;
	
	int Dcarry = 0;
	int temp;
	
	for ( int i = 0 ; i <= O.size ; i++ ) {
		
		temp =  (a.D[a.size - i] * ((a.size - i) >= 0) ) + ( b.D[b.size - i] * ((b.size - i) >= 0) ) + Dcarry;
		
		O.D[O.size - i] = temp % 10;
		
		Dcarry = temp / 10;
	}
	

	
	return ZeroAnalyze(O);
	
}



A2PS Sub(A2PS a , A2PS b) {
	
	A2PS temp;
	int borrow = 0;
	int subtemp;
	A2PS O;
	
	if ( MaxData(a,b)==0 )
	 {
		swap(a,b);
		O.sign = true;
		
	}
	
	O.size = maxsize(a,b)+1;

	
	for ( int i = 0 ; i < O.size ; i++ ) {
		
		subtemp = a.D[a.size - i] * ( (a.size - i) >= 0 ) - b.D[b.size - i] * ( (b.size - i) >= 0 )- borrow;
		
		if (subtemp < 0) {
			subtemp +=10;
			borrow = 1;
		}
		else
			borrow=0;
			
		O.D[O.size - i] = subtemp;
	}
	
	return ZeroAnalyze(O);
}


A2PS Mul(A2PS a, A2PS b) {

	A2PS O;
	O.sign = (a.sign xor b.sign); // :)
	O.size = a.size + b.size;
	
	int m = 0;
	
	for ( int i = 0 ; i <= O.size ; i++ ) {
		
		for ( int j = 0 ; j < i ; j++ )
			m += a.D[a.size - j - 1] * (j < a.size) * b.D[b.size - i + j] * (b.size - i + j >= 0);
		
		O.D[O.size - i] = m%10;
		m = m/10; 
	}
	
	while ( m > 0 )
	
  {
		O = ShiftRight(O , 1);
		O.D[0] = m%10;
		m/=10;
	}
	


	return ZeroAnalyze(O);
	
}


A2PS ShiftRight(A2PS in , int L) {
	
	A2PS out = in;
	
	for ( int i = out.size + L - 1 ; i >= L ; i-- )
		out.D[i] = out.D[i-L];
	
	for ( int i = L - 1 ; i >= 0 ; i--)
		out.D[i] = 0;
	
	out.size = out.size + L;
	
	return out;
			
}


A2PS Divi(A2PS a ,A2PS b) {
	
	A2PS out;
	A2PS ten;
	ten.size = 2;
	ten.D[0] = 1;
	A2PS SearchBase;
	SearchBase.size = 1;
	SearchBase.D[0] = 1;
	
	if(b.D[0] == 0) {
		ProblemBool = true;
		cout<<"\a\a";
		MessageBox(NULL, TEXT( "It doesn't have Meaning..." ), TEXT( "WHAAAATT !!!!!  :(   " ), MB_OK | MB_ICONEXCLAMATION);
		return out;
	}


	while ( MaxData ( a , Mul (b , SearchBase) ) ) {
		SearchBase = Mul(SearchBase,ten);
	}
	
	SearchBase.size--;
	out.size = 1;
	while(SearchBase.size && IsSame(a , Mul(b , out))==0 ) {
		out = Sum(out , SearchBase);
		if (MaxData(Mul(b , out),a))  // Here we should search exactlier
			if(	IsSame(a , Mul(b , out) )==0 )
			{
			out = Sub(out , SearchBase);
			SearchBase.size--;
			}
	}
	

	out.sign = (a.sign xor b.sign); // :)

	return ZeroAnalyze(out);
}



A2PS Sqr(A2PS in) {
	
	A2PS out;
	
	A2PS ten;
	ten.size = 2;
	ten.D[0] = 1;	ten.D[1] = 0;
	
	A2PS SearchBase;
	SearchBase.size = 1;
	SearchBase.D[0] = 1;
	
	while ( MaxData ( in , Mul (SearchBase , SearchBase) ) ) {
		SearchBase = Mul(SearchBase,ten);
	}
	
	SearchBase.size--;  //Find the nearset
	out.size = 1;
	while(SearchBase.size && IsSame(in , Mul(out , out))==0 )
	 {
		out = Sum(out , SearchBase);
		
		if ( MaxData (Mul(out , out),in)  )
		{
			if(IsSame(in , Mul(out , out))==0 )
			{
					out = Sub(out , SearchBase);
					SearchBase.size--;	
			}
	
		}
	}
	
	return ZeroAnalyze(out);
	
}
/// 1111111111

bool IsSame(A2PS in1 , A2PS in2) {
	
	if(in1.size != in2.size)
		return 0;
	if(in1.sign != in2.sign)
		return 0;
	for ( int i = 0 ; i < in1.size ; i++ )
		if( in1.D[i] != in2.D[i] )
			return 0;
	return 1;
	
}

void shaking()
{
			SetWindowPos(consoleWindow, 0, WX, WY, 0, 0, SWP_NOSIZE | SWP_NOZORDER);  //Graphic

int timem=0;

			while (timem <= 4)
			{


  ProblemBool=0;
for (size_t i = WX; i < WX+10; i++)
			{
				SetWindowPos(consoleWindow, 0, i, i, 0, 0, SWP_NOSIZE | SWP_NOZORDER);

				Sleep(8);
			
				 	system("color fa");
				
			}

			for (size_t i = WX+10; i >WX; i--)
			{
				SetWindowPos(consoleWindow, 0, i, i, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
	system("color f1");
				Sleep(8);
			}
			
			
			timem++;
			}
			
}
void Location(int x, int y)  {
	
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD CursorPosition;
 
	CursorPosition.X = x; // Locates column
	CursorPosition.Y = y; // Locates Row
	SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed 
}


void ArashASCIGART() {
	
	system("color f5");
	system("cls"); //clear
  	system("MODE CON COLS=117 LINES=26");
  	

	
	cout<<char(201);
	
		for(int i = 0 ; i<5 ; i++)
	{
		cout<<char(205);	
	}

	
							cout<<"Pardis Sodeifi";
							// 25 +5
			for ( int i = 0 ; i < 30; i++ )
		cout<<char(205);
		
		
	cout<<"Arashsoft EAI";
	for ( int i = 0 ; i < 25; i++ )
		cout<<char(205);
	
	cout<<"Shaghayegh Vesali";
	for(int i = 0 ; i<10 ; i++)
	{
		cout<<char(205);	
	}


	cout<<char(187);
	
	for ( int i = 0 ; i < 23 ; i++ ) {
		Location(0,i+1);
		cout<<char(186);
		Location(115,i+1);
		cout<<char(186);
	}
	
	Location(0,24);
	cout<<char(200);
	for ( int i = 0 ; i < 114; i++ )
		cout<<char(205);
	cout<<char(188)<<endl;
}

std::string getFileContents (std::ifstream& File)
{
    std::string Lines = "";        //All lines
    
    if (File)                      //Check if everything is good
    {
	while (File.good ())
	{
	    std::string TempLine;                  //Temp line
	    std::getline (File , TempLine);        //Get temp line
	    TempLine += "\n";                      //Add newline character
	    
	    Lines += TempLine;                     //Add newline
	}
	return Lines;
    }
    else                           //Return error
    {
	return "ERROR File does not exist.";
    }
}
