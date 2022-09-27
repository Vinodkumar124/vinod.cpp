#include<iostream>
using namespace std;

class sum
{

		
		public:
		int add(int x, int y)
		{
		
			return (x+y);
		}
};
int main()
{
	sum e;int a,b;
		cin>>a>>b;
			cout<<a+b;
	e.add(a,b);
}
