#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 0; j < rows-i; ++j)
            cout << "  ";

        for(int k = i; k <= 2*i-1; ++k)
            cout << "* ";

        for(int k = 0; k < i-1; ++k)
            cout << "* ";

        cout << endl;
    }

    return 0;
}
