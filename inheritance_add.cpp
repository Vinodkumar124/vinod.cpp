#include<iostream>
using namespace std;

class A
{
	private : int a;
	public:
	   void	getvalue_a(int x)
		{
			a=x;
		}
		int got_a()
		{
			return a;
		}
};
class B : public A
{
	private : int b,c;
	public: 
	void getvalue_b(int y)
	{
	   b=y;
	}
	void add()
	{
		c=got_a();
		c=c+b;
	}
	void display()
	{
		cout<<"first value"<<got_a()<<endl;
		cout<<" second value"<<b<<endl;
		cout<<"add"<<c<<endl;
	}		
};
int main()
{
	B obj;
	int a,b;
	cout<<"enter first value";
	cin>>a;
		cout<<"enter second value";
	cin>>b;
	obj.getvalue_a(a);
	obj.getvalue_b(b);
	obj.add();
	obj.display();
}



