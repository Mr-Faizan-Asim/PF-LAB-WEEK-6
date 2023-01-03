#include<iostream>
using namespace std;

int fun(int number);
main()
{
int number,result;
cout<<"Enter a Number: ";
cin>> number;
result = fun(number);
cout<< "Answer is "<<result;


}

int fun(int number)
{
number = number*5;
return number;


}