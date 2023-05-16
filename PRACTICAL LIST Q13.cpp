//Practical list
//Aashi Bansal

#include<iostream>
#include<fstream>
using namespace std;

// define a class to store student data
class student
{
   int roll;
   char name[30];
   float marks;
   int year;
   string c;
public:
   student() { }
   void getData(); 
   void displayData();
};

void student :: getData()                          // get student data from user
 {
   cout << "\nEnter Roll No. :: ";
   cin >> roll;
   cin.ignore(); // ignore the newline char inserted when you press enter
   cout << "\nEnter Name :: ";
   cin.getline(name, 30);
   cout << "\nEnter Marks :: ";
   cin >> marks;
   cout << "\nEnter year :: ";
   cin >> year;
   cout << "\nEnter class :: ";
   cin >> c;
   
}

void student :: displayData()                           // display data
 {
   cout << "\nRoll No. :: " << roll << endl;
   cout << "\nName :: " << name << endl;
   cout << "\nMarks :: " << marks << endl;
   cout << "\nYear :: " << marks << endl;
   cout << "\nClass :: " << marks << endl;
}

int main()
{
   student s[3]; // array of 3 student objects
   fstream file;
   int i;

   file.open("C:\\Users\\acer\\Documents\\file4.txt", ios :: out); // open file for writing
    cout << "\nWriting Student information to the file :- " << endl;
    cout << "\nEnter 3 students Details to the File :- " << endl;

   for (i = 0; i < 3; i++)
    {
      s[i].getData();
      // write the object to a file
      file.write((char *)&s[i], sizeof(s[i]));
    }

   file.close(); // close the file

   file.open("C:\\Users\\acer\\Documents\\file4.txt", ios :: in); // open file for reading
   cout << "\nReading Student information to the file :- " << endl;

   for (i = 0; i < 3; i++)
    {
      // read an object from a file
      file.read((char *)&s[i], sizeof(s[i]));
      s[i].displayData();
    }

   file.close(); // close the file

   return 0;
}