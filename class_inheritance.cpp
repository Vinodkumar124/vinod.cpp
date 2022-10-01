#include<iostream>
using namespace std;

class reactangle
{
	protected : 

	int height,weidht;
public: 
//	void getheight(int h)
//	{
//		height=h;
//	}
//	void getweidht(int w)
//	{
//		weidht=w;
//	}
void enterH()
{cin>>height;
}
void enterW()
{cin>>weidht;
}
	int getH()
	{return height;
	}
		int getW()
	{return weidht;
	}
};
class getreactangle : public reactangle
{
	public : 
		void getarea()
		{
		getH()*getW();
				}
				getH()*getW();
		
};
 int main()
{
	getreactangle hk;
	hk.enterH();
	hk.enterW();
	hk.getH();
	hk.getW();
hk.getarea();

}



