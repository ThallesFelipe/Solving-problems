#include <iostream>

using namespace std;

int main()
{
    int casos_de_teste{};
    cin >> casos_de_teste;

    int quantia{}, quantia_total{};
    char tipo;
    int coelhos{}, ratos{}, sapos{};
    for (int i = 0; i < casos_de_teste; i++)
    {
        cin >> quantia;
        cin >> tipo;

        if (tipo == 'C')
            coelhos += quantia;
        else if (tipo == 'R')
            ratos += quantia;
        else
            sapos += quantia;

        quantia_total += quantia;
    };

    cout << "Total: " << quantia_total << " cobaias\n";
    cout << "Total de coelhos: " << coelhos << '\n';
    cout << "Total de ratos: " << ratos << '\n';
    cout << "Total de sapos: " << sapos << '\n';
    printf("Percentual de coelhos: %.2f %%\n", (float)coelhos / quantia_total * 100);
    printf("Percentual de ratos: %.2f %%\n", (float)ratos / quantia_total * 100);
    printf("Percentual de sapos: %.2f %%\n", (float)sapos / quantia_total * 100);

    return 0;
};