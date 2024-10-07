#include <iostream>

using namespace std;

int main()
{
    int n{0};
    cin >> n;

    int contador{1};

    for (int i = 0; i < n; i++)
    {
        cout << contador << " " << contador + 1 << " " << contador + 2 << " PUM" << endl;
        contador += 4;
    };

    return 0;
};