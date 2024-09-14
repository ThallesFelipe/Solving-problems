#include <iostream>

using namespace std;

int main()
{
    int x{}, y{};
    cin >> x >> y;

    if (x > y)
        swap(x, y);

    /*
    if (x > y)
        for (int i = y; i <= x; i++)
            if (i % 13 != 0)
                sum += i;
    else
        for (int i = x; i <= y; i++)
            if (i % 13 != 0)
                sum += i;
    */

    int sum{0};
    for (int i = x; i <= y; i++)
        if (i % 13 != 0)
            sum += i;

    cout << sum << '\n';

    return 0;
};