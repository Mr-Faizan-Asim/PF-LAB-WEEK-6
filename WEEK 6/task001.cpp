#include<iostream>
#include<cmath>


using namespace std;


main()
{
float angle;
float base;
float tangent,result;
cout<<"Enter Angle: ";
cin>> angle;
angle = angle*(0.0174);
cout<<"Enter Base: ";
cin>> base;
tangent = tan(angle);
result = tangent*base;
cout<<"Answer: "<< result <<endl;

}