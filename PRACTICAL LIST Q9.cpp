//Practical list
//Aashi Bansal

#include <iostream>
using namespace std;

class Person
{
	protected:
		string name;
	public:
		virtual void display()=0;
};

class Student:public Person
{
	private:
		string course;
		double marks;
		int year;
	public:
		void display()
		{
			cout<<"Enter name of the student"<<endl;
			getline(cin,name);
			cout<<"Enter course name"<<endl;
			getline(cin,course);
			cout<<"Enter marks"<<endl;
			
			cin>>marks;
			cout<<"Enter year"<<endl;
			cin>>year;
			
			cout<<"\n\n\n\n";
			
			cout<<"Name:   "<<name<<endl;
			cout<<"Course: "<<course<<endl;
			cout<<"Marks:  "<<marks<<endl;
			cout<<"Year:   "<<year<<endl;
			return;
		}
};

class Employee:public Person
{
	private:
		string department;
		double salary;
	public:
		void display()
		{
			cin.ignore();
			cout<<"Enter name of the employee"<<endl;
			getline(cin,name);
			cout<<"Enter department name"<<endl;
			getline(cin,department);
			cout<<"Enter salary"<<endl;
			cin>>salary;
			
			cout<<"\n\n\n\n";
			
			cout<<"Name:       "<<name<<endl;
			cout<<"Department: "<<department<<endl;
			cout<<"Salary      "<<salary<<endl;
			return;
		}
};

int main()
{
	Student  s;
	Employee e;
	Person  *p;
	
	p=&s;
	p->display();
	
	p=&e;
	p->display();
	return 0;
}
