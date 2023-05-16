//Practical list
//Aashi Bansal

#include<iostream>
#include<math.h>                 
using namespace std;
int main()
{
	int n;
	cout<<"Enter an integer=";
	cin>>n;                       
	float sum=1;
	for (int i=2;i<=n;i++)
	{
		float p=pow(i,i);
		sum+=(1/p)*pow(-1,i-1);
	}
	cout<<"Final Result = "<<sum;
	return 0;
}