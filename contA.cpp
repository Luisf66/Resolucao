#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string texto = "Exemplo de string para resolução da sugunda questão de testes AAaaA";
    char caractere_minu = 'a';
    char caractere_maiu = 'A';

    // Usa std::count para contar quantas vezes o caractere aparece
    int ocorrencias = count(texto.begin(), texto.end(), caractere_minu) + count(texto.begin(), texto.end(), caractere_maiu);

    cout << "O caractere 'a' aparece " << ocorrencias << " vezes na string." << endl;

    return 0;
}
