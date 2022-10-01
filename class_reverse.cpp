//c++ program to find reverse of number by difinig function outside clas
#include<iostream>
using namespace std;

class reverse
{
	public:
	 int rev=0,r,n;
	void getrev()
	{	cin>>n;
		while(n>0){
				r=n%10;
				rev=r+(rev*10);
				n=n/10;
		}
	cout<<rev;		
	}	
};
int main()
{
	reverse k;
	k.getrev();
}
