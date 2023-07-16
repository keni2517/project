#include<iostream>
using namespace std;
class manu{
	char name[20];
	int mn;
	public:
	void re()
	{
		cout<<"WELCOME  TO PUNJABI  TADKA "<<endl;
		cout<<"enter custmore name:";
		cin>>name;
		cout<<"enter mobile number:";
		cin>>mn;
		cout<<"*-------------------------------MENU-----------------------------------*"<<endl;
		cout<<"1.kaju kari=800"<<endl;
		cout<<"2.kaju lasan=900"<<endl;
		cout<<"3.paneer tika=500"<<endl;
		cout<<"4.paneer bhurji=800"<<endl;
		cout<<"5.kaju masala=400"<<endl;
		cout<<"6.paneer angara=900"<<endl;
       		 cout<<"7.chole kulcha=500"<<endl;
      		  cout<<"8.paneer tava masla=700"<<endl;
		cout<<"9.naan=40"<<endl;
		cout<<"10.chees naan=90"<<endl;	
		cout<<"11.paratha=60"<<endl;
		cout<<"12.chees paratha=100"<<endl;
		cout<<"13.roti=35"<<endl;
		cout<<"14.chapati=45"<<endl;
		cout<<"15.naan tadka=70"<<endl;
		cout<<"16.dal fry=400"<<endl;
		cout<<"17.jira rice=400"<<endl;
		cout<<"18.mashroom kari=500"<<endl;
		cout<<"19.palkh panner=700"<<endl;
		cout<<"20.chaas=70"<<endl;
		cout<<"21.exit"<<endl;
	}
	void setdata()
	{
		cout<<"*--------------------------------BILL-----------------------------*"<<endl;
		cout<<"Name:"<<name<<endl;
		cout<<"Mobile number:"<<mn<<endl;
	}
};
class manu2{
	int n;
	int q;
	int totalbill=0,dis,totalbill1;
	int gst;
	public:
	void nam()
	{
		cout<<"*----------------------ORDER CHOICE------------------------*"<<endl;
		do{
		cout<<"enter oreder number:";
		cin>>n;
		switch(n)
		{
		case 1:
			cout<<"kaju kari=800"<<endl;
			cout<<"enter qty:";
			cin>>q;
			q*=800;
			totalbill+=q;
			cout<<"your prize is:"<<q<<endl;
			break;
		case 2:
			cout<<"kaju lasan=900"<<endl;
			cout<<"enter qty:";
			cin>>q;
			q*=900;
			totalbill+=q;
			cout<<"your prize is:"<<q<<endl;
			break;
		case 3:
			cout<<"paneer tika=500"<<endl;
			cout<<"enter qty:";
			cin>>q;
			q*=500;
			totalbill+=q;
			cout<<"your prize is:"<<q<<endl;
			break;
		case 4:
			cout<<"paneer bhurji=800"<<endl;
			cout<<"enter qty:";
			cin>>q;
			q*=800;
			totalbill+=q;
			cout<<"your prize is:"<<q<<endl;
			break;
		case 5:
			cout<<"kaju masala=400"<<endl;
			cout<<"enter qty:";
			cin>>q;
			q*=400;
			totalbill+=q;
			cout<<"your prize is:"<<q<<endl;
			break;
		case 6:
			cout<<"paneer angara=900"<<endl;
			cout<<"enter qty:";
			cin>>q;
			q*=900;
			totalbill+=q;
			cout<<"your prize is:"<<q<<endl;
			break;
		case 7:
			cout<<"chole kulcha=500"<<endl;
			cout<<"enter qty:";
			cin>>q;
			q*=500;
			totalbill+=q;
			cout<<"your prize is:"<<q<<endl;
			break;
		case 8:
			cout<<"paneer tava masala=700"<<endl;
			cout<<"enter qty:";
			cin>>q;
			q*=700;
			totalbill+=q;
			cout<<"your prize is:"<<q<<endl;
			break;
		case 9:
			cout<<"naan=40"<<endl;
			cout<<"enter qty:";
			cin>>q;
			q*=40;
			totalbill+=q;
			cout<<"your prize is:"<<q<<endl;
			break;
		case 10:
			cout<<"chess naan=90"<<endl;
			cout<<"enter qty:";
			cin>>q;
			q*=90;
			totalbill+=q;
			cout<<"your prize is:"<<q<<endl;
			break;
		case 11:
			cout<<"paratha=60"<<endl;
			cout<<"enter qty:";
			cin>>q;
			q*=60;
			totalbill+=q;
			cout<<"your prize is:"<<q<<endl;
			break;
		case 12:
			cout<<"chess paratha=100"<<endl;
			cout<<"enter qty:";
			cin>>q;
			q*=100;
			totalbill+=q;
			cout<<"your prize is:"<<q<<endl;
			break;
		case 13:
			cout<<"roti=35"<<endl;
			cout<<"enter qty:";
			cin>>q;
			q*=35;
			totalbill+=q;
			cout<<"your prize is:"<<q<<endl;
			break;
		case 14:
			cout<<"chapati=45"<<endl;
			cout<<"enter qty:";
			cin>>q;
			q*=45;
			totalbill+=q;
			cout<<"your prize is:"<<q<<endl;
			break;
		case 15:
			cout<<"naan tadka=70"<<endl;
			cout<<"enter qty:";
			cin>>q;
			q*=70;
			totalbill+=q;
			cout<<"your prize is:"<<q<<endl;
			break;
		case 16:
			cout<<"dal fry=400"<<endl;
			cout<<"enter qty:";
			cin>>q;
			q*=400;
			totalbill+=q;
			cout<<"your prize is:"<<q<<endl;
			break;
		case 17:
			cout<<"jira rice=400"<<endl;
			cout<<"enter qty:";
			cin>>q;
			q*=400;
			totalbill+=q;
			cout<<"your prize is:"<<q<<endl;
			break;
		case 18:
			cout<<"mashroom kari=500"<<endl;
			cout<<"enter qty:";
			cin>>q;
			q*=500;
			totalbill+=q;
			cout<<"your prize is:"<<q<<endl;
			break;
		case 19:
			cout<<"palkh panner=700"<<endl;
			cout<<"enter qty:";
			cin>>q;
			q*=700;
			totalbill+=q;
			cout<<"your prize is:"<<q<<endl;
			break;
		case 20:
			cout<<"chaas=70"<<endl;
			cout<<"enter qty:";
			cin>>q;
			q*=70;
			totalbill+=q;
			cout<<"your prize is:"<<q<<endl;
			break;
		case 21:
			cout<<"no dish"<<endl;
			break;
		default:
			cout<<"sorry this dish is not avalbile choose any dish"<<endl;
			break;
		}
		}while(n!=21);
	}
	void final()
	{
		if(totalbill>5000)
		{
			gst=totalbill*0.05;
			dis=totalbill*0.1;
			totalbill1=totalbill-dis+gst;
			cout<<"GST:"<<gst<<endl;
			cout<<"DISCOUNT:"<<dis<<endl;
			cout<<"TOTALBILL:"<<totalbill<<endl;
			cout<<"FINAL BILL:"<<totalbill1<<endl;
		}
		else
			cout<<"TOTALBILL:"<<totalbill<<endl;
	}
};
int main()
{
	manu2 r1;
	manu r;
	r.re();
	r1.nam();
	r.setdata();
	r1.final();
	cout<<"THANK YOU FOR COMING VISIT AGAIN";
}