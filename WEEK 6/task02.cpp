#include<iostream>
using namespace std;
float divide (float number1,float number2);


main()
{
float num1;
float num2;
float divided;
cout<<"Enter Number: ";
cin>> num1;
cout<<"Enter Number: ";
cin>> num2;
divided = divide(num1,num2);
cout<<"Division:" <<divided<<endl;
cout<<"Program Ends";


}

float divide (float number1,float number2)
{
float divide = number1/number2;
return divide;




}