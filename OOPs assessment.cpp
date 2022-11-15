#include<iostream>
#include<stdlib.h>

using namespace std;

class menu
{
	string name;
	public:
	void info()
{
		
	cout<<"-------Top's Fast Food--------"<<endl<<endl;

	cout<<"Please Enter Your Name : "<<endl;
	cin>>name;
	cout<<endl<<"WelCome..."<<name<<endl<<endl;
	cout<<"What Would You Like To Order...?"<<endl<<endl;
	
	cout<<"-----------Menu------------------"<<endl;
	cout<<"1)Pizzas"<<endl;
	cout<<"2)Burgers"<<endl;
	cout<<"3)Sandwich"<<endl;
	cout<<"4)Rolls"<<endl;
	cout<<"5)Biryani"<<endl;
}
	
};

class foodchoice 
{
	int choice,choose,qnt,cst=0,bn;
	
	public:
		void food()
		{
		
		cout<<"Enter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"1  Neapolitan Pizza"<<endl;
				cout<<"2  Sicilian Pizza"<<endl;
			    cout<<"3  St. Louis Pizza"<<endl;
			    
			    cout<<"Please Enter Which Pizza You Would Like To have :";
			    cin>>choose;
			    switch(choose)
			    {
			    	case 1:
			    		cout<<"Please Enter Bill NO. :";
			    		cin>>bn;
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<"Enter Your Customize Price : ";
			    		cin>>cst;
			    		cout<<endl<<"Bill No.  "<<bn;
			    		cout<<endl<<"Neapolitan Pizza  "<<qnt<<endl;
			    		cout<<"Your Total Bill is : ?"<<qnt*cst<<endl;
			    		cout<<"Thanks For Ordering....\nYour Order Will Be Delivered in 40 Minutes";
			    		break;
			    	case 2:
			    		cout<<"Please Enter Bill NO. :";
			    		cin>>bn;
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<"Enter Your Customize Price : ";
			    		cin>>cst;
			    		cout<<endl<<"Bill No.  "<<bn<<endl;
			    		cout<<endl<<"Sicilian Pizza  "<<qnt<<endl;
			    		cout<<"Your Total Bill is : ?"<<qnt*cst<<endl;
			    		cout<<"Thanks For Ordering....\nYour Order Will Be Delivered in 40 Minutes";
			    		break;
			    	case 3:
			    		cout<<"Please Enter Bill NO. :";
			    		cin>>bn;
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<"Enter Your Customize Price : "<<endl;
			    		cin>>cst;
			    		cout<<endl<<"Bill No.  "<<bn<<endl;
			    		cout<<endl<<"St. Louis Pizza  "<<qnt<<endl;
			    		cout<<"Your Total Bill is : ?"<<qnt*cst<<endl;
			    		cout<<"Thanks For Ordering....\nYour Order Will Be Delivered in 40 Minutes";	
			    		break;
			    	default :
			    		cout<<"not";
			    	
				}break;
				
				case 2:
					
					
				cout<<"1  Lentil and Mushroom Burger. "<<endl;
				cout<<"2  Stuffed Bean Burger. "<<endl;
			    cout<<"3  Potato Corn Burger. "<<endl;
			    
			    cout<<"Please Enter Which Burger You Would Like To have :";
			    cin>>choose;
			    switch(choose)
			    {
			    	case 1:
			    		cout<<"Please Enter Bill NO. :";
			    		cin>>bn;
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<"Enter Your Customize Price : "<<endl;
			    		cin>>cst;
			    		cout<<endl<<"Bill No.  "<<bn<<endl;
			    		cout<<endl<<"Lentil and Mushroom Burger  "<<qnt<<endl;
			    		cout<<"Your Total Bill is : ?"<<qnt*cst<<endl;
			    		cout<<"Thanks For Ordering....\nYour Order Will Be Delivered in 40 Minutes";
			    		break;
			    	case 2:
			    		cout<<"Please Enter Bill NO. :";
			    		cin>>bn;
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<"Enter Your Customize Price : "<<endl;
			    		cin>>cst;
			    		cout<<endl<<"Bill No.  "<<bn<<endl;
			    		cout<<endl<<"Stuffed Bean Burger  "<<qnt<<endl;
			    		cout<<"Your Total Bill is : ?"<<qnt*cst<<endl;
			    		cout<<"Thanks For Ordering....\nYour Order Will Be Delivered in 40 Minutes";
			    		break;
			    	case 3:
			    		cout<<"Please Enter Bill NO. :";
			    		cin>>bn;
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<"Enter Your Customize Price : "<<endl;
			    		cin>>cst;
			    		cout<<endl<<"Bill No.  "<<bn<<endl;
			    		cout<<endl<<"Potato Corn Burger  "<<qnt<<endl;
			    		cout<<"Your Total Bill is : ?"<<qnt*cst<<endl;
			    		cout<<"Thanks For Ordering....\nYour Order Will Be Delivered in 40 Minutes";	
			    		break;
			    	default :
			    		cout<<"not";
			}break;
			case 3:
					
					
				cout<<"1  Club Sandwich "<<endl;
				cout<<"2  Veg. Crispy Sandwich "<<endl;
			    cout<<"3  Extream Veg.Sandwich "<<endl;
			    
			    cout<<"Please Enter Which Sandwich You Would Like To have :";
			    cin>>choose;
			    switch(choose)
			    {
			    	case 1:
			    		cout<<"Please Enter Bill NO. :";
			    		cin>>bn;
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<"Enter Your Customize Price : "<<endl;
			    		cin>>cst;
			    		cout<<endl<<"Bill No.  "<<bn<<endl;
			    		cout<<endl<<"Club Sandwich  "<<qnt<<endl;
			    		cout<<"Your Total Bill is : ?"<<qnt*cst<<endl;
			    		cout<<"Thanks For Ordering....\nYour Order Will Be Delivered in 40 Minutes";
			    		break;
			    	case 2:
			    		cout<<"Please Enter Bill NO. :";
			    		cin>>bn;
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<"Enter Your Customize Price : "<<endl;
			    		cin>>cst;
			    		cout<<endl<<"Bill No.  "<<bn<<endl;
			    		cout<<endl<<"Veg. Crispy Sandwich  "<<qnt<<endl;
			    		cout<<"Your Total Bill is : ?"<<qnt*cst<<endl;
			    		cout<<"Thanks For Ordering....\nYour Order Will Be Delivered in 40 Minutes";
			    		break;
			    	case 3:
			    		cout<<"Please Enter Bill NO. :";
			    		cin>>bn;
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<"Enter Your Customize Price : "<<endl;
			    		cin>>cst;
			    		cout<<endl<<"Bill No.  "<<bn<<endl;
			    		cout<<endl<<"Extream Veg.Sandwich  "<<qnt<<endl;
			    		cout<<"Your Total Bill is : ?"<<qnt*cst<<endl;
			    		cout<<"Thanks For Ordering....\nYour Order Will Be Delivered in 40 Minutes";	
			    		break;
			    	default :
			    		cout<<"not";
			}break;
			case 4:
					
					
				cout<<"1  Paneer Tikka Roll "<<endl;
				cout<<"2  Corn Roll "<<endl;
			    cout<<"3  Veg. Spring Roll "<<endl;
			    
			    cout<<"Please Enter Which Rolls You Would Like To have :";
			    cin>>choose;
			    switch(choose)
			    {
			    	case 1:
			    		cout<<"Please Enter Bill NO. :";
			    		cin>>bn;
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<"Enter Your Customize Price : "<<endl;
			    		cin>>cst;
			    		cout<<endl<<"Bill No.  "<<bn<<endl;
			    		cout<<endl<<"Paneer Tikka Roll  "<<qnt<<endl;
			    		cout<<"Your Total Bill is : ?"<<qnt*cst<<endl;
			    		cout<<"Thanks For Ordering....\nYour Order Will Be Delivered in 40 Minutes";
			    		break;
			    	case 2:
			    		cout<<"Please Enter Bill NO. :";
			    		cin>>bn;
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<"Enter Your Customize Price : "<<endl;
			    		cin>>cst;
			    		cout<<"Bill No.  "<<bn<<endl;
			    		cout<<endl<<"Corn Roll  "<<qnt<<endl;
			    		cout<<"Your Total Bill is..."<<qnt*cst<<endl;
			    		cout<<"Thanks For Ordering....\nYour Order Will Be Delivered in 40 Minutes";
			    		break;
			    	case 3:
			    		cout<<"Please Enter Bill NO. :";
			    		cin>>bn;
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<"Enter Your Customize Price : "<<endl;
			    		cin>>cst;
			    		cout<<endl<<"Bill No.  "<<bn<<endl;
			    		cout<<endl<<"Veg. Spring Roll  "<<qnt<<endl;
			    		cout<<"Your Total Bill is : ?"<<qnt*cst<<endl;
			    		cout<<"Thanks For Ordering....\nYour Order Will Be Delivered in 40 Minutes";	
			    		break;
			    	default :
			    		cout<<"not";
			}break;
			case 5:
					
					
				cout<<"1  Veg.Biryani "<<endl;
				cout<<"2  Makhni Panner Biryani "<<endl;
			    cout<<"3  Hyderabadi Biryani "<<endl;
			    
			    cout<<"Please Enter Which Biryani You Would Like To have :";
			    cin>>choose;
			    switch(choose)
			    {
			    	case 1:
			    		cout<<"Please Enter Bill NO. :";
			    		cin>>bn;
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<"Enter Your Customize Price : "<<endl;
			    		cin>>cst;
			    		cout<<endl<<"Bill No.  "<<bn<<endl;
			    		cout<<endl<<"Veg.Biryani  "<<qnt<<endl;
			    		cout<<"Your Total Bill is : ?"<<qnt*cst<<endl;
			    		cout<<"Thanks For Ordering....\nYour Order Will Be Delivered in 40 Minutes";
			    		break;
			    	case 2:
			    		cout<<"Please Enter Bill NO. :";
			    		cin>>bn;
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<"Enter Your Customize Price : "<<endl;
			    		cin>>cst;
			    		cout<<endl<<"Bill No.  "<<bn<<endl;
			    		cout<<endl<<"Makhni Panner Biryani  "<<qnt<<endl;
			    		cout<<"Your Total Bill is : ?"<<qnt*cst<<endl;
			    		cout<<"Thanks For Ordering....\nYour Order Will Be Delivered in 40 Minutes";
			    		break;
			    	case 3:
			    		cout<<"Please Enter Bill NO. :";
			    		cin>>bn;
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<"Enter Your Customize Price : "<<endl;
			    		cin>>cst;
			    		cout<<endl<<"Bill No.  "<<bn<<endl;
			    		cout<<endl<<"Hyderabadi Biryani  "<<qnt<<endl;
			    		cout<<"Your Total Bill is : ?"<<qnt*cst<<endl;
			    		cout<<"Thanks For Ordering....\nYour Order Will Be Delivered in 40 Minutes";	
			    		break;
			    	default :
			    		cout<<"not";
			}break;
		}
  }
};

int main()
{
	char c;
	do{
	
    menu obj;
	obj.info();	
	foodchoice obj1;
	obj1.food();
	 printf("\nWould you like to continue [Y/N] : ");
     scanf("%s",&c);
}while(c=='y' || c=='n' && c=='N' || c=='Y');
	return 0;
}