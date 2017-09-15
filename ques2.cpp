#include<iostream>
using namespace std;
void circle()
{
double r,a,cr,d;
cout<<"enter value of r";
cin>>r;
d=2*r;
a=3.14*r*r;
cr=2*3.14*r;
cout<<"diameter="<<d<<endl;
cout<<"area="<<a<<endl;
cout<<"circumference="<<cr<<endl;
}
int main()
{
circle();
return 0;
}

