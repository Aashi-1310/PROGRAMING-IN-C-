//Practical list
//Aashi Bansal

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Number of elements in array:";
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter element:";
        cin >> arr1[i];
    }

    int arr2[n];
    int counter = 0;
    int a;
    for (int i = 0; i < n; i++)
    {
        a = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr1[j])
            {
                a = 1;
            }
        }
        if (a == 0)
        {
            arr2[counter] = arr1[i];
            counter++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << ",";
    }

    return 0;
}