#include<iostream>
using namespace std;

class car
{
	private : string brand ;
    string model ;
    int speed ;
	int price ;
	public :
		
	void carinfo(string brand_name,string model_name,int speed_name,int price_value)
		{
			brand= brand_name;
			model=model_name;
			speed=speed_name,
			price=price_value;
		}
		void showinfo()
		{
			cout<<"brand name= "<<brand;
					cout<<"model name= "<<model;
						cout<<"speed name= "<<speed;
							cout<<"price value name= "<<price;			
								  }		      			
};
int main()
{
	car tata,nano;
tata.carinfo("TATA","RMX",180,100000);
nano.carinfo("nano","RM",18,1000);
tata.showinfo();
nano.showinfo();
	
}
