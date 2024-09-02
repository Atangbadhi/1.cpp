#include<iostream>
using namespace std;
template <typename T>
T addarr(T arr[], T arrsize)
{
	T i=0,sum=0;
	for(i=0;i<arrsize;i++)
	{
		sum+=arr[i];
	}
	return sum;
}
int main()
{
	int n,i=0,sum=0;
	cout<<"Enter size of array:";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<" number:";
		cin>>arr[i];
	}
	sum=addarr<int>(arr,n);
	cout<<"The total is "<<sum;
	return 0;
	
}