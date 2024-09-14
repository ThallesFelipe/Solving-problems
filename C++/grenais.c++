#include <iostream>
using namespace std;

int main()
{
    int inter{}, gremio{};
    int inter_wins{}, gremio_wins{}, draws{}, grenais{};
    int option;

    do
    {
        cin >> inter >> gremio;
        grenais++;

        if (inter > gremio)
            inter_wins++;
        else if (gremio > inter)
            gremio_wins++;
        else
            draws++;

        cout << "Novo grenal (1-sim 2-nao)" << '\n';
        cin >> option;
    } while (option == 1);

    cout << grenais << " grenais" << endl;
    cout << "Inter:" << inter_wins << endl;
    cout << "Gremio:" << gremio_wins << endl;
    cout << "Empates:" << draws << endl;

    if (inter_wins > gremio_wins)
        cout << "Inter venceu mais" << endl;
    else if (gremio_wins > inter_wins)
        cout << "Gremio venceu mais" << endl;
    else
        cout << "Nao houve vencedor" << endl;

    return 0;
};