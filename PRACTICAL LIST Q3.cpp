//Practical list
//Aashi Bansal

#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
	
	char str[100];
	cout<<"Enter a string: ";
	cin.getline(str,100);
	int freq[256] = {0};
	for(int i = 0; str[i]!='\0'; i++){
        freq[str[i]]++;
		
	}
	for(int i=0; i<256; i++){
        if(freq[i] !=0){
        	cout<<"Character "<<(char)i<<" occurs "<<freq[i]<<" time in the string\n";
		}
	}
	return 0;
}