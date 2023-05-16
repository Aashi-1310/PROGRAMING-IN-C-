//Practical list
//Aashi Bansal

#include <iostream>

using namespace std;
int main()
{
	int x,y,h,l;
	cout<<"Enter the size of first  sorted array"<<endl;
	cin>>x;
	cout<<"Enter the size of second  sorted array"<<endl;
	cin>>y;
	int a[x],b[y];
	int c[x+y];
	cout<<"Enter the elements of first sorted array"<<endl;
	for(int i=0;i<x;i++)
     {
    cin>>h;
    a[i]=h;
    }	
    cout<<"Enter the elements of second sorted array"<<endl;
	for(int i=0;i<y;i++)
     {
    cin>>l;
    b[i]=l;
    }	
	
	for(int i=0;i<x;i++)
	c[i]=a[i];
	
	for(int i=x,j=0;i<x+y;i++,j++)
	{
		c[i]=b[j];
	}
	cout<<"the merged sorted array "<<endl;
	for(int i=0;i<x+y;i++)
	cout<<c[i]<<" ";
}