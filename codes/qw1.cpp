#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,temp=0,count=0,i=0,temp2=0,num=0,sum=0,temp3=0,rem=0,power=0,temp4=0;
	int *p;
	cout<<"Enter a number:";
	cin>>x;
	temp=x;
	while(temp>0)
	{
		temp=temp/10;
		count++;
	}
	flag:
	temp=0,i=0,temp2=0,num=0,sum=0,temp3=0,rem=0,power=0,temp4=0;	
	temp2=count-1;
	temp3=count;
	p=new int[temp2];
	for(i=0;i<count;i++)
	{
		power=pow(10,temp3);
		rem=x%power;
		*(p+i)=rem/pow(10,temp2);
		sum+=*(p+i);
		temp2--;
		temp3--;
	}
	count=0;
	temp4=sum;
	while(temp4>0)
	{
		temp4=temp4/10;
		count++;
	}
	if(count>1)
	{
		x=sum;
		delete []p;
		goto flag;
	}

	cout<<"Total digits = "<<count<<endl;
	cout<<"Sum = "<<sum;
	return 0;
}