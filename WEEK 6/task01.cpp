#include<iostream>
using namespace std;

int add (int number1,int number2);


main()
{
int num1;
int num2;
int total;
cout<<"Enter Number: ";
cin>> num1;
cout<<"Enter Number: ";
cin>> num2;
total = add(num1,num2);
cout<<"Sum:" <<total  <<endl;
cout<<"Program Ends";


}

int add (int number1,int number2)
{
int sum = number1 + number2;
return sum;




}