#include <iostream>
using namespace std;

int fib(int n)
{
    int casob = 0, casobase = 1, soma = 0;
    for (int i = 2; i <= n; i++)
    {
        soma = casob + casobase;
        cout << "Fibonacci " << "= " << soma << " (soma de " << casob << " + " << casobase << ")" << endl;
        casob = casobase;
        casobase = soma;
    }
    return soma;
}

int main()
{
    int numero = 0;
    cin >> numero;
    fib(numero);
}
