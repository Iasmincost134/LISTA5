#include <iostream>
#include <locale>

using namespace std;

int main() {
    // Define localidade para aceitar acentos
    locale::global(locale("pt_BR.UTF-8"));

    // MOSTRAR OS NÚMEROS DE 1 A 10
    /* int numero = 1;
    while (numero <=10){
        cout << numero;
        numero += 1;
    }*/

    // TABUADA
    int numero = 1;
    /* int tab1;
    cout << "Informe um número: ";
    cin >> tab1;
    for (int j = 1; j <= 10; j++) {
        int resultado = tab1 * j;
        cout << tab1 << " x " << j << " = " << resultado << "\n";
    }*/

    //números de 0 a 50
    /* for (int i = 0; i <= 50; i += 5) {
        cout << i << " ";
    }*/

    //1 a 31 pulando de 2
    /* for (int i = 0; i <= 31; i += 2) {
        cout << i << " ";
    }*/

    //EXERCICIO 6
  /*  int n = 0;
    int tentativa; 

    cout << "Digite um número: ";
    cin >> tentativa;


    if (tentativa > 0) {
        cout << "O número é POSITIVO" ;
    }

    else if (tentativa < 0) {
        cout << "O número é NEGATIVO" ;
    }
    else {
        cout << "O número é ZERO";
    }

    return 0;*/

    //EXERCICIO 4
    /*int n = 100;
    int tentativa;

    cout << "Digite um número: ";
    cin >> tentativa;


    if (tentativa > 0) {
        cout << "NUMERO ESPECIAL";
    }

    else if (tentativa < 0) {
        cout << "NUMERO COMUM";
    }
    else {
        cout << "O número é CEM";
    }*/

    
}
