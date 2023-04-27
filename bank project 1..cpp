#include<iostream>
using namespace std;
int x,y;
int account_no = 100;
int balance = 0;
class bank
{
	public:
	char name[50];
	int mobile_no;
	int pin_no;
//	char a[50];
	int b,c;
		void open_ac()
		{
			cout<<"thank your for choosing our bank"<<endl;
			cout<<"to create acount enter the following details"<<endl;
			cout<<"enter your name:"<<endl;
			cin>>name;
			cout<<"enter your mobile_no:"<<endl;
			cin>>mobile_no;
		    cout<<"enter your pin_no:"<<endl;
		    cin>>pin_no;
		    cout<<"enter the amount you wants to deposit:"<<endl;
		    cin>>balance;
		    cout<<"your account has been successfully created"<<endl;
		    account_no++;
		}
		void show_details()
		{
			
			cout<<"enter your name:"<<endl;
			cin>>name;
			cout<<"enter pin no :"<<endl;
			cin>>b;
			cout<<"enter account_no:"<<endl;
			cin>>c;
			if(c == account_no && b == pin_no)
			{
			cout<<"your balance is:"<<balance<<endl;
			cout<<"your name:"<<name;
			cout<<"your account_no:"<<account_no<<endl;
			cout<<"your mobile_no:"<<mobile_no<<endl; 
			}
			else
			{
				cout<<"your account number and pin number does not match try again"<<endl;
			}
		}
		void deposit()
		{
			cout<<"enter account_no:"<<endl;
			cin>>c;
			cout<<"enter pin"<<endl;
			cin>>b;
			if(c == account_no && b == pin_no)
			{
			cout<<"enter the amount you want to deposit:"<<endl;
            cin>>x;
			}
		    else
		    {
		    	cout<<"your account_no and pin_no does not match try again"<<endl;
			}
			//return balance=balance+x;
			balance=balance+x;
			cout<<"current balance:"<<balance<<endl;
			
		}
		void withdraw()
		{
		 cout<<"enter account_no:"<<endl;
		 cin>>c;
		 cout<<"enter pin:"<<endl;
		 cin>>b;
			 if(c == account_no && b == pin_no)
			{	 
			 cout<<"enter the amount you want to withdraw:"<<endl;
			 cin>>y;
				 if(balance>=y)
				 {
				 	balance = balance-y;
			 		cout<<"bank balance"<<balance<<endl;
				 }
				 else
				 {
				 	cout<<"sorry you don't have sufficient balance"<<endl;
				 }
			}
		     else
		    {
		     	cout<<"your account number and pin number does not match try again"<<endl;
		 	}
		}
		
		void edit()
		{
		int choice;
		 cout<<"enter account_no:"<<endl;
		 cin>>c;
		 cout<<"enter pin_no:"<<endl;
		 cin>>b;
		 if(c == account_no && b == pin_no)
		 {
		 	do
		 	{
		 		cout<<"select choice to modify:"<<endl;
		 		cout<<"1.name"<<endl;
		 		cout<<"2.mobile_no"<<endl;
		 		cout<<"3.pin_no"<<endl;
		 		cin>>choice;
			 
		 	switch(choice)
		 	{
		 		case 1:
		 			cout<<"enter your modified name:"<<endl;
		 			cin>>name;
		 			break;
		 		case 2:
				    cout<<"enter your modified mobile_no:"<<endl;
				    cin>>mobile_no;
				    break;
				case 3:
					cout<<"enter the pin_no which you wants to modify:"<<endl;
					cin>>pin_no;
					break;	
				default:
				    cout<<"exit"<<endl;
					break;				     
			}
		       
			} 
			while(choice<6 && choice>0);
		}
	    else
	    {cout<<"your account_no and pin_no does not match try again"<<endl;}
		}
		
};

int main()
{
	int ch;
	bank b1;
	do
	{
		cout<<"1.create account"<<endl;
		cout<<"2.show details"<<endl;
		cout<<"3.withdraw amount"<<endl;
		cout<<"4.deposit amount"<<endl;
		cout<<"5.edit the account"<<endl;
		cout<<"6.exit"<<endl;
		cout<<"select your option between (1-6)"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				b1.open_ac();
				break;
			case 2:
				 b1.show_details();
				 break;
			case 3:
				 b1.withdraw();
				 break;
			case 4:
				b1.deposit();
				break;
			case 5:
				b1.edit();
				break;	
		    default:
			    cout<<"thanks for using bank managemnt system"<<endl;
				break;
		}
		
	}while(ch<6 && ch>0);
		  	  
return 0;
}
