//largest of three numbers using class
#include<iostream>
using namespace std;
class compare
{
	public : int a ,b ,c;
	void findlarg()
	{    int r;
		cout<<"first value is= \n"<<"second value is= \n"<<"third value is= \n";
		cin>>a>>b>>c;
			cout<<"first value is= \n"<<a<<"second value is= \n"<<b<<"third value is= \n"<<c;
		r=	(a>b)&&(a>c)?a:(b>a)&&(b>c)?b:c;
		cout<<r;
	};
	int main()
	{
		compare L;
		L.findlarg();
	}
	
	
	
};
