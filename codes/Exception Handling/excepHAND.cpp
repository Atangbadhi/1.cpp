//WAP for exception handling  with menu add,sub,divi,exit
//default ko case ma ,addition,subtraction 3 digit exception handling 
#include<iostream>
using namespace std;
int main()
{
	int choice,first,second;
	cout<<"   MENU"<<endl;
	cout<<"1.ADD"<<endl;
	cout<<"2.SUBTRACTION"<<endl;
	cout<<"3.DIVISION"<<endl;
	cout<<"4.EXIT"<<endl;
	cin>>choice;
	try
	{
		if(choice<=0||choice>4)
		{
			throw"WRONG CHOICE!";
		}
	}
	catch(char const* a)
	{
		cout<<a;
	}

	switch(choice)
	{
		case 1:
			{	cout<<"Enter 2 numbers:"<<endl;
	            cin>>first>>second;
				int sum;
				sum=first+second;
				try
				{
					if(sum<=99||sum>999)
					{
						throw"THE SUM IS NOT 3 DIGIT";
					}
					else
					{
						cout<<"The sum is "<<sum;
					}
				}
				catch(char const* error)
				{
					cout<< error<<sum;
				}
				break;	
			}
			case 2:
				{ 
				    cout<<"Enter 2 numbers:"<<endl;
	                cin>>first>>second;
					int sub;
				sub=first-second;
				try
				{
					if(sub<=99||sub>999)
					{
						throw"THE subtraction IS NOT 3 DIGIT";
					}
					else
					{
						cout<<"The subtraction is "<<sub;
					}
				}
				catch(char const* error)
				{
					cout<< error<<sub;
				}	
				break;
				}
				case 3:
					{
						int a,b,res=0;
						cout<<"enter numerator:";
						cin>>a;
						cout<<"Enter denomenator:";
						cin>>b;
						try{
						if(b!=0)
						{
							res=a/b;
							cout<<res;
						}
						else
						{
							throw"not possible sice denominator zero ";
						}
				}
						catch(char const* div)
						{
							cout<<div;
						}
						break;	
					}
					case 4:
						{
							exit(0);
						}
				
	}
	return 0;
}
