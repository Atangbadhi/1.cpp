#include <iostream>
using namespace std;

int main() {
	int run=0,chauka=4,chakka=6,runa=0;
	string noob="ta nakhel bhai, ghar jaa!";
	cout<< "Enter run scored by a ball "<<endl;
    cin>> run;
    try 
	{
        // throw an exception if denominator is 0
        if (run == 6)
		{
		
            throw chakka;
        }
        else if (run == 4)
       {
            throw chauka;
       }
       else
	   {
	    	throw noob;
	   }
	}
catch(string b)
{
 cout<< noob;
}
    catch (int runa) {
    	if(runa==6)
		{
        cout << "yayyyyy " << "chakka" << endl;
        }
        if(runa==4)
		{
        cout << "yayyyyy " << "chauka" << endl;
        }
    }
    return 0;
}
