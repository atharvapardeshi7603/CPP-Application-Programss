#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    cout << "Enter the number : \n";
    cin >> n;

    int a = 0;

    for(int i = 1; i <= n; i++)
    {
        a = i - 1;

        for(int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        for(int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        for(int j = 1; j <= i - 1; j++)
        {
            cout << a << " ";
            a--;
        }

        cout << "\n";
    }


    return 0;
}