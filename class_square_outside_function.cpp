//c++ program to find square of float and interger using inline function
#include<iostream>
using namespace std;
class square
{
	public :
	int s,n ;
	float s1,n1;
	void input();
	void findsquare();
	void display();
};
void square :: input()
{
	cout<<"enter first integer value= "<<endl;
	cin>>n;
		cout<<"enter second float value= "<<endl;
	cin>>n1;
}
void square ::findsquare()
{
	s=n*n;
	s1=n1*n1;
}
void square ::display()
{
	cout<<"square of integir ["<<n<<"]="<<s<<"\n";
		cout<<"square of float["<<n1<<"]="<<s1<<"\n";
}

int main()
{
	square S;
	S.input();
	S.findsquare();
	S.display();
	
}



