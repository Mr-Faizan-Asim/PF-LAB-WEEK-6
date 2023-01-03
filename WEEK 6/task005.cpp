#include<iostream>
using namespace std;

char fun(char ch);
main()
{
char ch,result;
cout<<"Enter a Character: ";
cin>> ch;
fun(ch);


}

char fun(char ch)
{
char a = 'a', A = 'A';
int b = 1;
while(b <= 25)
{
 ++A;
 ++b;
 ++a;
 if(ch == a)
	{
cout<<"You Entetred Lowercase Alphabets";
	} 

 if(ch == A)
	{
cout<<"You Entetred Uppercase Alphabets";
	}


}

}