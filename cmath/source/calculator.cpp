#include <iostream>
#include <stdlib.h>

using namespace std;

//          -----------
//          RENEE CODES
//          -----------

int main()
{
    int n1, n2, soma, sub, multi, div;

    cout << "Bem vindo a calculadora do RENEE CODES!!!" << endl;
    cout << "Digite o primeiro numero!" << endl;
    cin >> n1;
    cout << "Digite o segundo numero!";
    cin >> n2;

    soma        = n1 + n2;
    sub         = n1 - n2;
    multi       = n1 * n2;
    div         = n1 / n2;

    cout << "RESULTADO SOMA: " << soma << endl;
    cout << "RESULTADO SUBTRACAO: " << sub << endl;
    cout << "RESULTADO MULTIPLICACAO: " << multi << endl;
    cout << "RESULTADO DIVISAO: " << div << endl;

    system("pause");
    return 0;
}