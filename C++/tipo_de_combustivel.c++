#include <iostream>

using namespace std;

int main()
{
    int alcool{0}, gasolina{0}, diesel{0}, opcao{0};

    while (true)
    {
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            alcool++;
            break;
        case 2:
            gasolina++;
            break;
        case 3:
            diesel++;
            break;
        case 4:
            goto exit;
        default:
            continue;
        };
    };

exit:
    cout << "MUITO OBRIGADO" << "\n";
    cout << "Alcool: " << alcool << "\n";
    cout << "Gasolina: " << gasolina << "\n";
    cout << "Diesel: " << diesel << "\n";
    return 0;
};