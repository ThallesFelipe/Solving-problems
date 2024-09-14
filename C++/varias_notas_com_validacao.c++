#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    while (true)
    {
        float nota_1{};
        cin >> nota_1;

        while (nota_1 < 0 || nota_1 > 10)
        {
            cout << "nota invalida\n";
            cin >> nota_1;
        };

        float nota_2{};
        cin >> nota_2;

        while (nota_2 < 0 || nota_2 > 10)
        {
            cout << "nota invalida\n";
            cin >> nota_2;
        };

        float media{(nota_1 + nota_2) / 2};
        cout << fixed << setprecision(2);
        cout << "media = " << media << '\n';

        int novo_calculo{0};

        while (novo_calculo != 2 && novo_calculo != 1)
        {
            cout << "novo calculo (1-sim 2-nao)";
            cin >> novo_calculo;
            if (novo_calculo == 2)
                break;
        };
    };
    return 0;
};