#include<iostream>
#include<string.h>
using namespace std;

class student
{
	private : int id;
	string name;
	public : 
	void infostudent()
	{
		cout<<"enter student id & name= "<<endl;
		cin>>id>>name;
	}
		void showstudent()
	{
		cout<<"student id= "<<id<<endl;
		cout<<"student name= "<<name<<endl;
	}
};
class physical : public student
{private:
	int h,w;
	public :
		void physics()
		{
			cout<<"enter student height and weidth= "<<endl;
			cin>>h>>w;
		}
		void showphysics()
		{
			cout<<"height= "<<h<<endl;
				cout<<"weidth= "<<w<<endl;
		}
};
int main()
{
	 physical S;
	 S.infostudent();
	 S.showstudent();
	 S.physics();
	 S.showphysics();
}




