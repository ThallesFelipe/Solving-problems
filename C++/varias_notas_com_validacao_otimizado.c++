#include <iostream>
#include <iomanip>

using namespace std;

float ler_nota()
{
    float nota{};
    cin >> nota;
    
    while (nota < 0 || nota > 10)
    {
        cout << "nota invalida\n";
        cin >> nota;
    };

    return nota;
};

void calcular_media()
{
    float nota_1{ler_nota()};
    float nota_2{ler_nota()};

    float media{(nota_1 + nota_2) / 2};

    cout << fixed << setprecision(2);
    cout << "media = " << media << '\n';
};

int main()
{
    int novo_calculo{1};

    while (novo_calculo == 1)
    {
        calcular_media();

        cout << "novo calculo (1-sim 2-nao)\n";
        cin >> novo_calculo;
        while (novo_calculo != 1 && novo_calculo != 2)
        {
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> novo_calculo;
        };
    };

    return 0;
};