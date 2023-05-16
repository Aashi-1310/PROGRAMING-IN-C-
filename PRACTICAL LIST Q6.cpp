//Practical list
//Aashi Bansal

#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 3, 4, 5, 6, 7, 8, 9, 10, 10, 11, 12, 13, 114, 115, 16, 17, 19};

    int count = 0;

    int range = sizeof(array) / sizeof(array[0]); // here range = 20;

    int num;
    cout << "Enter number to be searched : ";
    cin >> num;

    for (int i = 0; i < range; i++)
    {
        if (num == array[i])
        {
            count++;
        }
    }
    if (count > 0)
    {
        cout << "Number is Found" << endl;
        cout << "Number of times " << num << " occured is " << count << endl;
    }

    else
    {
        cout << "No Element not found" << endl;
    }

    return 0;
}