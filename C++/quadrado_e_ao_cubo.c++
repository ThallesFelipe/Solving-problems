#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n{0};
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << pow(i, 2) << " " << pow(i, 3) << '\n';
    };

    return 0;
};