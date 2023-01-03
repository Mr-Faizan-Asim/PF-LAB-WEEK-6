#include<iostream>
#include<cmath>

using namespace std;

void sym(int valueo);


main()
{
int valueo;
cout<<"Enter Valueo: ";
cin>> valueo;

sym(valueo);

}

void sym(int valueo)
{
int d,e;
  d = valueo/100;
  e = valueo%10;
if( d == e )
{
cout<<"Symmetrical: true";
	




}


if( d != e )
{
cout<<"Not Symmetrical: true";
	




}	


}
