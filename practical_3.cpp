#include <iostream>
using namespace std;
int main()
{
    int n, sum = 1;
    cin >> n;
    int t;

    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            cout << n << " ";
            sum++;
        }

        else if (n % 2 != 0)
        {
            n = (n * 3) + 1;
            cout << n << " ";
            sum++;
        }
    }

    cout << "\nCycle length \n"
         << sum << endl;
    return 0;
}