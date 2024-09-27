#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int indice = 12;
    int k = 1;
    int soma = 0;

    while (k < indice)
    {
        k += 1;
        soma += k;
    }
    cout << "Soma: " << soma << endl;
    
}
