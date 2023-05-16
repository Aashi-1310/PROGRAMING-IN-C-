//Practical list
//Aashi Bansal

#include <iostream>
using namespace std;

int main()
{
    float p, q;
    cout << "Enter p: ";
    cin >> p;
    cout << "Enter q: ";
    cin >> q;
    try
    {
        if (q == 0)
        {
            cout << "Exception Raised" << endl;
            throw q;
        }
        cout << "Result : " << p / q << endl;
    }
    catch (float q)
    {
        cout << "Inside Catch" << endl;
    }
    return 0;
}