#include<iostream>

using namespace std;
void check(int volume,int pipe1,int pipe2,float result,float hours);


main()
{
int volume,pipe1,pipe2;
float result,hours;
cout<<"Enter Volume: ";
cin>> volume;
cout<<"Enter Pipe 1: ";
cin>> pipe1;
cout<<"Enter Pipe 2: ";
cin>> pipe2;
cout<<"Enter Hours: ";
cin>> hours;
result = ((pipe1*hours + pipe2*hours)/volume)*100;
check(volume,pipe1,pipe2,result,hours);


}
void check(int volume,int pipe1,int pipe2,float result,float hours)
{
float a;
if(result <= 100 )
{
a = volume*(result/100);
pipe1 = ((pipe1*hours)/a)*100;
pipe2 = ((pipe2*hours)/a)*100;
cout<<"The Pool is "<<result; cout<<"% full. Pipe 1: "<<pipe1;cout<<". Pipe 2: "<<pipe2;

}
if(result > 100 )
{
a = volume*(result/100);
a = a - volume;
cout<<"The Pool is Overflows with "<<a;cout<<" liters";

}
}
