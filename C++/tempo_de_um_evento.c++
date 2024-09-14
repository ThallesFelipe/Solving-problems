#include <iostream>

using namespace std;

int main()
{
    string palavra;
    int dia_inicio, dia_termino;
    int hora_inicio, minuto_inicio, segundo_inicio;
    int hora_termino, minuto_termino, segundo_termino;

    cin >> palavra >> dia_inicio;
    cin >> hora_inicio >> palavra >> minuto_inicio >> palavra >> segundo_inicio;

    cin >> palavra >> dia_termino;
    cin >> hora_termino >> palavra >> minuto_termino >> palavra >> segundo_termino;

    int inicio_segundos = segundo_inicio + minuto_inicio * 60 + hora_inicio * 3600 + dia_inicio * 86400;
    int termino_segundos = segundo_termino + minuto_termino * 60 + hora_termino * 3600 + dia_termino * 86400;

    int duracao_segundos = termino_segundos - inicio_segundos;

    int dias = duracao_segundos / 86400;
    duracao_segundos %= 86400;
    int horas = duracao_segundos / 3600;
    duracao_segundos %= 3600;
    int minutos = duracao_segundos / 60;
    int segundos = duracao_segundos % 60;

    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;

    return 0;
};