//Practical list
//Aashi Bansal

#include<iostream>
#include<string>
using namespace std;

void address(string str){
	int len = str.length();
	char p;
	int a;
	for(int i = 0; i<len; i++){
		p = str[i];
		cout << "address of char "<<str[i]<<"  :" <<static_cast<void *>(&p) << endl;
	}
	return;
}

void concatenate(string str){
	string str1, str2;
	cout<<"Enter the second string : ";
	cin>>str1;
	str2 = str + str1;
	cout<<str2<<endl;
	
	return;
}

void compare(string str){
	string str3;
	cout<<"Enter string to compare : ";
	cin>>str3;
	if(str == str3){
		cout<<"Strings are equal";
	}
	else if(str > str3){
		cout<<"String"<<" "<<str<< " is greater than "<<str3;
	}
	else{
		cout<<"String " <<  str3 <<" is greater than "<<str;
	}
	return;
}

void length(string str){
	int count = 0;
	while (str[count]){
		count++;
	}
	cout<<count<<endl;
	return;
}

void lower_upper(string str){
    int i = 0; 
 
    while(str[i]!='\0') { 
        if(str[i]>='a' && str[i]<='z') { 
            str[i]=str[i]-32; 
        } 
        ++i; 
    }
    cout<<str<<endl;
    return;
}

void reverse(string str){
	int len = str.length();
	string rev_str = "";
	for(int i = len ; i >=0 ; i--){
		rev_str += str[i];
	}
	cout<<rev_str<<endl;
	return;
}


int main(){

	cout<<"chose option no for doing operations"<<endl;
	cout<<"1. Show address of each character in string"<<endl;
	cout<<"2. Concatenate two strings"<<endl;
	cout<<"3. Compare two strings"<<endl;
	cout<<"4. Calculate length of the string"<<endl;
	cout<<"5. Convert all lowercase characters to uppercase"<<endl;
	cout<<"6. Reverse the string"<<endl;
	
	int choice;
	cout<<"Enter the choice : ";
	cin>>choice;
	
	string str;
	cout<<"Enter the string : ";
	cin>>str;
	
	switch(choice){
		case 1: address(str);
		break;
		case 2: concatenate(str);
		break;
		case 3: compare(str);
		break;
		case 4: length(str);
		break;
		case 5: lower_upper(str);
		break;
		case 6: reverse(str);
		break;
		default : cout<<"Invalid choice";
	}
	return 0;
}