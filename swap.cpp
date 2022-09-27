//write a program in c++ to szwap two numbers
#include<iostream>
using namespace std;
int main()
{
	int a ,b,temp;
	cout<<"enter first value= \n";
	cin>>a;
		cout<<"enter second value= \n";
	cin>>b;
//	temp=a;
//	a=b;
//	b=temp;
a=a+b;
b=a-b;
a=a-b;
	cout<<a<<"\n"<<b;

}
