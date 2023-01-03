#include<iostream>
#include<cmath>


using namespace std;


main()
{
float num1;
float num2;
float smaller;
cout<<"Enter Number: ";
cin>> num1;
cout<<"Enter Number: ";
cin>> num2;

smaller = min(num1,num2);
cout<< smaller <<" is Smaller!"<<endl;

}