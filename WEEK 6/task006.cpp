#include<iostream>

using namespace std;
int Evenish_oddish(int number);
void check(int answer);

main()
{
int number,answer;
cout<<"Enter 5 Digit Number: ";
cin>> number;
answer = Evenish_oddish(number);
check(answer);

}

int Evenish_oddish(int number)
{	
	int n1,n2,n3,n4,n5,result; 
	n1 = number/10000;
	number = number%10000; 
	n2 = number/1000;
	number = number%1000;
	n3 = number/100;
	number = number%100;
	n4 = number/10;
	number = number%10;
	n5 = number;
	result = n1 + n2 + n3 + n4 + n5;
	return result;


}

void check(int answer)
{
if(answer%2 == 0)
{
cout<<"This number is Evenish"; 
}

if(answer%2 != 0)
{
cout<<"This number is Oddish"; 
}

}