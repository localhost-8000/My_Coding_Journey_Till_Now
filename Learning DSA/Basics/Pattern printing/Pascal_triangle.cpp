#include <iostream>
using namespace std;

int main()
{
    int r,coef = 1;
    cout << "Enter number of rows: ";
    cin >> r;
    for(int i = 0; i < r; i++)
    {
        for(int k = 1; k <= r-i; k++)
            cout <<"  ";

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            cout << coef << "   ";
        }
        cout << endl;
    }
    return 0;
}
