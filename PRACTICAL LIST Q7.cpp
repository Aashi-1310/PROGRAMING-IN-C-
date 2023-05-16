//Practical list
//Aashi Bansal

#include <iostream>

using namespace std;
int main()
{
	int x,y,gcd;
	cout<<"enter the first number "<<endl;
	cin>>x;
	cout<<"enter the second number "<<endl;
	cin>>y;
	int i;
	for(i=1;i<=x && i<=y;i++)
	{
		if(x%i==0 && y%i ==0)
		{
			gcd=i;
		}
	}
	cout<<"GCD of the entered 2 numbers is "<<gcd;
}