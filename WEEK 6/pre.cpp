#include<iostream>
#include<cmath>


using namespace std;


main()
{
float num1;
float num2;
float greater;
cout<<"Enter Number: ";
cin>> num1;
cout<<"Enter Number: ";
cin>> num2;

greater = max(num1,num2);
cout<< greater <<" is Greater!"<<endl;

}