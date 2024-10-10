#include <iostream>

using namespace std;

int main()
{
    int x{};

    do
    {
        cin >> x;
        int i = 1;
        for (i; i < x; i++)
            cout << i << " ";

        if (x != 0)
            cout << i << '\n';
    } while (x != 0);
};