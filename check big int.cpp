#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <sstream>
#include <math.h>
#include <cctype>       // std::isdigit
using namespace std; 
int main () {
	
		int a=10;
	int b=-3;
	cout << a%10<<endl;
	cout << a%4<<endl;
	cout << a%2<<endl;
	cout << a%3<<endl;
   int nmb[10]={1,6,8,4,6,7};
   int k;
   cin >> k;
   nmb[k]=0;
   for(int i=0 ;i<10;i++){
   cout <<	nmb[k]++<<"  "<< nmb[i]<<endl;
   }

		if(!0){
		cout << "hi ";
	}
	cout << a%10<<endl;
	cout << a%4<<endl;
	cout << a%2<<endl;
	cout << a%3<<endl;
	if(!a){
		cout << "hi ";
	}
   float j=23.01844;
  j=floor(j);
  std::cout << " the nmb is j : "<< j;
  std::cout << "Please, enter a number or a word: ";
  std::cout.flush();    // ensure output is written
std::cout << "after flush: ";
  
  std::cin >> std::ws;  // eat up any leading white spaces
std::cout << "after cin: ";
  int c = std::cin.peek();  // peek character
std::cout << "after peek: ";

  if ( c == EOF ) return 1;
  if ( std::isdigit(c) )
  {
    int n;
    std::cin >> n;
	std::cout << "after isdigit: ";
    std::cout << "You entered the number: " << n << '\n';
 
  }
  else
  {
    std::string str;
    std::cin >> str;
    std::cout << "after strig: ";
    std::cout << "You entered the word: " << str << '\n';
  }}
/*  #include <iostream>     // std::cin, std::cout
#include <fstream>      // std::ifstream

int main () {
  char str[256];

  std::cout << "Enter the name of an existing text file: ";
  std::cin.get (str,256);    // get c-string

  std::ifstream is(str);     // open file

  char c;
  while (is.get(c))          // loop getting single characters
    std::cout << c;

  is.close();                // close file

  return 0;
}using namespace std;
int main (){
	int j=0005;
	long int a=2000000089;
	int b=2000000000;
	int c;
	int mode;
	cout << "j " << j;
	if(!j){
	
cout << "\nmode is :"<< 	(mode = a%10);
int div;
div = (a/=10);
cout << "\ndevision is  is :"<< 	div;
	cout << "a is : "<< a;
	cout << "\nb is : "<< b;
	c= a+b;
	
	cout<< endl << "our nmb is"<< c << endl;
	c= a/b;
	cout<< endl << "our nmb after / is" << c;
	c=123456789 * 0.123456789;
	cout << endl<< c;
	}cout << "\nj " << j;
	return 0;
	
}*/
