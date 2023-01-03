#include<iostream>
using namespace std;
float max (float number1,float number2);


main()
{
float num1;
float num2;
float maxim;
cout<<"Enter Number: ";
cin>> num1;
cout<<"Enter Number: ";
cin>> num2;
maxim = max(num1,num2);
cout<<"Maximum:" <<maxim<<endl;
cout<<"Program Ends";


}

float max (float number1,float number2)
{
if(number1 > number2)
{
return number1;
}
if(number1 < number2)
{
return number2;
}
return 0;
}