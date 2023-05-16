//Practical list
//Aashi Bansal

#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
private:
    float side1;
    float side2;
    float side3;

public:
    Triangle() {}
    Triangle(float s1, float s2, float s3)
    {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }
    
    float calc_area()
    {
        float semi_perimeter = (side1 + side2 + side3) / 2;

        float area = sqrt(semi_perimeter * (semi_perimeter - side1) * (semi_perimeter - side2) * (semi_perimeter - side3));

        return semi_perimeter;
    }

    float calc_area(float base, float height)
    {

        float area = 0.5 * (base) * (height);

        return area;
    }

    bool operator==(const Triangle &t)
    {
        cout << "Equlity Check(==) Operator Overload" << endl;

        if (side1 == t.side1 && side2 == t.side2 && side3 == t.side3)
        {
            return true;
        }
        
        return false;
    }

    Triangle operator=(const Triangle &t)
    {
        cout << "Equality Operator Overload" << endl;
        side1 = t.side1;
        side2 = t.side2;
        side3 = t.side3;
        return (*this);
    }
};

int main()
{
    Triangle t1(3, 4, 5);

    Triangle t2(4, 5, 3);

    cout << boolalpha << (t1 == t2) << endl;

    Triangle t3;

    t3 = t2;

    cout << t3.calc_area() << endl;

    return 0;
}