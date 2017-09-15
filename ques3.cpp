#include<iostream>
using namespace std;
void maxmin(int x,int y)
{
cout<< "enter value of x";
cin>>x;
cout<<"enter value of y";
cin>>y;
if(x>y)
cout<<x<<"is maximum"<<endl;
else
cout<<y<<"is maximum"<<endl;
if(x<y)
cout<<x<<"is minimum"<<endl;
else
cout<<y<<"is minimum"<<endl;
}
int main()
{
int x,y;
maxmin(x,y);
return 0;
}


