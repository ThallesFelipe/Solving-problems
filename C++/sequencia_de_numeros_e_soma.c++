#include <iostream>

using namespace std;

int main()
{
    int m{}, n{};

    while (true)
    {
        cin >> m >> n;

        if (m <= 0 || n <= 0)
            break;

        if (n < m)
        {
            int aux{m};
            m = n;
            n = aux;
        }

        int sum{0};
        for (int i = m; i <= n; i++)
        {
            cout << i << " ";
            sum += i;
        };
        cout << "Sum=" << sum << '\n';
    };

    return 0;
};