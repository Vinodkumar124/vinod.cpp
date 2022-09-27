//using class with factroial 
#include<iostream>
using namespace std;

class factorial
{
	public :  
	int n;
	int fact=1;	
	void getfact()
	{
		cout<<"enter number= ";
		cin>>n;
		
		for(int i=2;i<=n;i++)
		{
			fact=fact*i;
		}
			cout<<fact;
	}
		
};
int main()
{
	factorial f;
	f.getfact();
	
}
