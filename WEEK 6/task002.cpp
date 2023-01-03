#include<iostream>
#include<cmath>
float quad_minus(float a,float b,float c);
float quad_plus(float a,float b,float c);

using namespace std;


main()
{
float a,b,c;
float plus,minus;
cout<<"Enter Valueo of a: "; 
cin>> a;

cout<<"Enter Valueo of b: "; 
cin>> b;

cout<<"Enter Valueo of c: "; 
cin>> c;
minus = quad_minus(a,b,c);
plus = quad_plus(a,b,c);
cout<<"x = " << minus;
cout<<" x = " << plus;
}

float quad_minus(float a,float b,float c)
{
float minus,sec;
sec = (b*b) - 4*a*c;
sec = sqrt(sec);
minus = (- b - sec)/(2*a);
return minus;

}

float quad_plus(float a,float b,float c)
{
float plus, sec;
sec = (b*b) - 4*a*c;
sec = sqrt(sec);
plus = (- b + sec)/(2*a);
return plus;



}