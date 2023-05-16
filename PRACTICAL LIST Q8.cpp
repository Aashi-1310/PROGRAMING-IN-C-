//Practical list
//Aashi Bansal

#include <iostream>
#include <iomanip>
using namespace std;

class Matrix
{
private:
    int rows;
    int columns;
    int array[20][20];
    static int count;

public:
    Matrix() {}
    Matrix(int r, int c);
    Matrix operator+(const Matrix &m);
    Matrix operator-(const Matrix &m);
    Matrix operator*(const Matrix &m);
    Matrix Transpose();
    void print() const;
};

int Matrix ::count = 0;

Matrix ::Matrix(int r, int c)
{
    rows = r;
    columns = c;
    count++;
    cout << "\nCreating Matrix Number :" << count << endl;
    cout << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter element at (" << i << "," << j << ") :";
            cin >> array[i][j];
        }
    }
}

Matrix Matrix ::operator+(const Matrix &m)
{
    Matrix temp(*this);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            temp.array[i][j] = array[i][j] + m.array[i][j];
        }
    }
    return temp;
}

Matrix Matrix ::operator-(const Matrix &m)
{
    Matrix temp(*this);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            temp.array[i][j] = array[i][j] - m.array[i][j];
        }
    }
    return temp;
}

Matrix Matrix ::operator*(const Matrix &m)
{
    Matrix temp(*this);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            temp.array[i][j] = 0;
            for (int k = 0; k < m.columns; k++)
            {
                temp.array[i][j] = temp.array[i][j] + array[i][k] * m.array[k][j];
            }
        }
    }
    return temp;
}

Matrix Matrix ::Transpose()
{
    Matrix temp(*this);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            temp.array[j][i] = (*this).array[i][j];
        }
    }
    return temp;
}

void Matrix ::print() const
{
    cout << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << setw(4) << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int rows, columns, choice;
    cout << "\nCreating 2 Matrices First\n"
         << endl;
    cout << "\nOnly Square Matrics are Allowed\n"
         << endl;
    cout << "\nEnter Number of Rows(=columns):";
    cin >> rows;
    columns = rows;
    Matrix m1(rows, columns);
    Matrix m2(rows, columns);
    bool flag = true;
    while (flag)
    {
        cout << "\n** Operations Available **\n";
        cout << "1. ADD" << endl;
        cout << "2. SUBTRACT" << endl;
        cout << "3. MULTIPLY" << endl;
        cout << "4. TRANSPOSE" << endl;
        cout << "5. Exit" << endl;
        cout << "\nEnter Option Number:";
        cin >> choice;
        if (choice == 1)
        {
            Matrix m3 = m1 + m2;
            m3.print();
        }
        else if (choice == 2)
        {
            Matrix m4 = m1 - m2;
            m4.print();
        }
        else if (choice == 3)
        {
            Matrix m5 = m1 * m2;
            m5.print();
        }
        else if (choice == 4)
        {
            int choser;
            cout << "Transpose Of Which Matrix:";
            cin >> choser;
            if (choser == 1)
            {
                Matrix m6 = m1.Transpose();
                m6.print();
            }
            else if (choser == 2)
            {
                Matrix m7 = m2.Transpose();
                m7.print();
            }
            else
            {
                cout << "Invalid Option" << endl;
            }
        }
        else if (choice == 5)
        {
            cout << "Exiting" << endl;
            flag = false;
        }
        else
        {
            cout << "Invalid Input" << endl;
        }
    }
}