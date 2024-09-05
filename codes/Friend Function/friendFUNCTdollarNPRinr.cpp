//WAP with friend function to access data member of two class named dollar and rupee
//The user should access both dollar and rupee's from both the class and display result in IC
#include<iostream>
using namespace std;
class NPR;
class INR;

class Dollar
{
private:
	float dollar, total;
	public:
		void setdata()
		{
			cout<<"Enter dollar:";
			cin>>dollar;		
	    }
	friend  void conversion(Dollar,NPR,INR);

};
class NPR
{
private:
	float USDtoNPR;
	float rupees;
	public:
	
		friend void conversion(Dollar,NPR,INR);
		
		
		void setdata()
		{
			cout<<"Enter nrs:";
			cin>>USDtoNPR;		
	    }
};
class INR
{
private:
	float rupee,USDtoINR=0;
	public:

		friend void conversion(Dollar,NPR,INR);

		};
		
	
void conversion(Dollar obj,NPR obj1,INR obj2)
		{
			float r;
		    r =(obj.dollar*130+obj1.USDtoNPR);
			obj2.USDtoINR=r/1.6;
			cout<<"Total indian currency: "<<obj2.USDtoINR;
		}
int main()
{
	Dollar obj;
	NPR obj1;
	INR obj2;
	obj.setdata();
	obj1.setdata();
	conversion(obj,obj1,obj2);
	return 0;
}
