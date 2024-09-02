#include<iostream>
using namespace std;
template<class T>
class Dis
{
	private:
		T m,km;
	public:
		Dis(T a, T b)
		{
			km=a;
			m=b;
		}
		T conv()
		{
			return (km*1000+m);
		}
		
};
template<class T>
class Dis2
{
	T m;
	public:
		void operator=(Dis<T> obj1)
		{
			m=obj1.conv();
		}
		void display()
		{
			cout<<m;
		}
		
};
int main()
{
	int a,b;
	cout<<"Enter km and m: ";
	cin>>a>>b;
	Dis <int>obj1(a,b);
	Dis2 <int>obj2;
	obj2=obj1;
	cout<<"Total distance in meter is:";
	obj2.display();
	return 0;	
}