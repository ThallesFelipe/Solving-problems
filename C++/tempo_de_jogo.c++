#include <iostream>

using namespace std;

#define DIA 24

int main()
{
    int hora_inicio{}, hora_termino{};
    cin >> hora_inicio >> hora_termino;

    int duracao{};
    if (hora_inicio == hora_termino)
        duracao= DIA;
    else if (hora_inicio > hora_termino)
        duracao = (DIA - hora_inicio) + hora_termino;
    else
        duracao = hora_termino - hora_inicio;
    
    cout << "O JOGO DUROU " << duracao << " HORA(S)" << '\n';
    return 0;
};