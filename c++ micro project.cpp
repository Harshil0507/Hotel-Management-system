#include<fstream>
#include <iostream>
using namespace std;
#include <string.h>
class hotelmanagement
{
	public:
	int c_id,c_mno,c_rd,c_nop,c_nor;
	char c_nm[50] ,c_rc, regular,delux,superdelux,suite;
	float bill,discount,net_amount;
	
			  hotelmanagement()
			{
				cout<<"Welcome to HNS Hotel,Please enter your details:"<<endl;
				cout<<"Please enter your name :";
				cin>>c_nm;
				cout<<"Please enter your adhaar card number:";
				cin>>c_id;
				cout<<"please enter your mobile number:";
				cin>>c_mno;
			}
			
			void getdata()
			{
				cout<<"Enter number of people:";
				cin>>c_nop;
				cout<<"enter no of days of your stay:";
				cin>>c_rd;
				cout<<"Enter number of rooms you want to book:";
				cin>>c_nor;
				cout<<"Here are our types of room choices :";
				cout<<" regular for 1000"<<endl;
				cout<<"delux for 2000"<<endl;
				cout<<"super deluxfor 3000"<<endl;
				cout<<"suite for 4000"<<endl;
				cout<<"Enter your room choice:";
				cin>>c_rc;	
			}
			void putdata()
			{
				cout<<"\n your details:"<<endl;
				cout<<"\n \t your name :"<<c_nm;
				cout<<"\n \t your adhaar card number:"<<c_id;
				cout<<"\n \t your mobile number:"<<c_mno;
				cout<<"\n \t number of people:"<<c_nop;
				cout<<"\n \t Number of rooms you booked:"<<c_nor;
				cout<<" \n \t no of days of your stay:"<<c_rd;
				cout<<"\n \t Your bill amount is :"<<bill;
				cout<<"\n \t your discount as per our offer is:"<<discount;
				cout<<"\n \t Your netamount after discount is :"<<net_amount;
			}
	
};
class countdiscount
{
	public:	
			 void givediscount()
			{
				cout<<"\n \n We have a monsoon special discount offer:"<<endl;
				cout<<"on bill >=10000 & <=30000  _____ 5% discount"<<endl;
				cout<<"on bill >=30000 & <=50000  _____ 10% discount"<<endl;
				cout<<"on bill >=50000 & <=70000  _____ 15% discount"<<endl;
				cout<<"on bill >=70000 & <=100000 _____ 20% discount"<<endl;
				cout<<"on bill >=100000           _____ 25% discount"<<endl;
			}
};
class countbill: public countdiscount, public hotelmanagement
{
	public:
	 			void billamt()
			  {
				if("c_rc==regular")
				{
					bill=1000*c_rd*c_nor;
					
					if("c_rc==delux")
					{
						bill=2000*c_rd*c_nor;	
							 	
							 if("c_rc==superdelux")
							{
								bill=3000*c_rd*c_nor;	
							}
							 if("c_rc==suite")
							{
								bill=4000*c_rd*c_nor;	
							}
					}
			    }
			
				discount=(bill*10)/100;
				net_amount=bill-discount;
			   }

		    
		    
		      /*	void billamount()
			{
				
					if ("bill>=10000 && bill<=30000")
					{
						discount=(bill*5)/100;
						net_amount=bill-discount;
				    
						      if ("bill>=30000 && bill<=50000")
							{
										discount=(bill*10)/100;
										net_amount=bill-discount;
										
										 if ("bill>=50000 && bill<=70000")
									{
										discount=(bill*15)/100;
										net_amount=bill-discount;
									
										  if ("bill>=70000 && bill<=100000")
										{
											discount=(bill*20)/100;
											net_amount=bill-discount;
										}
										 if ("bill>=100000")
										{
											discount=(bill*25)/100;
											net_amount=bill-discount;
										}
								    }
							
							}
							
			    	}
	        }*/
};
int main()
{
	countbill c1;	
	c1.getdata();
	c1.givediscount();
	c1.billamt();
    //c1.billamount();
	c1.putdata();
	
	
	/*int c_id,c_mno,c_rd,c_nop,c_nor,bill,discount,net_amount;
	char c_nm[50] ,c_rc, regular,delux,superdelux,suite,putdata;
	float ::(float*(&bill);
	char data[100];
	ofstream outfile;
	 outfile.open( "bill.txt");
	 /*cout<<"\t\t\t\tTHANK YOU FOR CHOOSING HNS HOTEL HERE'S YOUR BILL:";
	 cout<<"\n \n \n \t\t\t\t\t\t ***** BILL *****"<<endl;
	 cout<<"\n \t number of people:"<<c_nop;
	cout<<"\n \t Number of rooms you booked:"<<"c1.putdata()";
	cout<<" \n \t no of days of your stay:"<<" public void hotelmanagement.putdata(c_rd)";
	cout<<"\n \t Your bill amount is :"<<" public void hotelmanagement.putdata(bill)";
	cout<<"\n \t your discount as per our offer is:"<<" public void hotelmanagement.putdata(discount)";
	cout<<"\n \t Your netamount after discount is :"<<" public void hotelmanagement.putdata(net_amount)";
	cin.getline(c1.*x);
	 outfile<<data<<endl;
	 outfile<<endl;
	 outfile<<" public void hotelmanagement.putdata(c_nor)"<<endl;
	 outfile<<" public void hotelmanagement.putdata(c_rd)"<<endl;
	 outfile<<" public void hotelmanagement.putdata(bill)"<<endl;
	 outfile<<" public void hotelmanagement.putdata(discount)"<<endl;
	 outfile<<" public void hotelmanagement.putdata(net_amount)"<<endl;
	 
	 //cout<<"enter your age:";
	 //cin>>data;
	// cin.ignore();
	 outfile<<data<<endl;
	 outfile.close();	 
	
	ifstream infile;
	infile.open("bill.txt");
	cout<<"reading from the file:"<<endl;
	infile>>data;
	cout<<data<<endl;
	infile>>data;
	cout<<data<<endl;
	infile.close();*/
	return 0;
	
}
