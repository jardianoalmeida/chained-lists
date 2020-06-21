#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void imprimir(list<int> g) {
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it) {
        cout << ' ' << *it;
    }
    cout << endl;
}

void mesclar(list<int> a, list<int> b) {
    list<int>::iterator it;
    a.merge(b);
    for (it = a.begin(); it != a.end(); ++it)
        cout << ' ' << *it;
    cout << endl;

}

bool estao_ordenadas(list<int> g) {
    list<int>::iterator it;
    int vetor[g.size()-1];
    int contador = 0;
    for (it = g.begin(); it != g.end(); ++it){
        // cout << ' ' << *it;
        vetor[contador] = *it;;
        contador++;

    }
//cout  << "vetor: " << vetor[0] << " -- " << vetor[1] << " -- " << vetor[2] << endl;
    for (int i = 0; i <= g.size()-1; i++) {
        /// cout << vetor[i] << "---";
        ///cout << "Contador: " << contador;
        if (vetor[i - 1] > vetor[i]) {
            return false;
        }
    }

    return true;
}

int main() {

    list<int> list1, list2;

    list1.push_back(10);
    list1.push_back(20);
    list1.push_back(30);

    list2.push_front(5);
    list2.push_front(40);
    list2.push_front(2);

    ///cout << "\nList 1 : ";
    ///imprimir(list1);
    ///cout << "\nList 2 : ";
    ///imprimir(list2);

    ///--> a) Verifique se as listas estão ordenadas;
    cout << "Listas sao ordenadas?" << endl;
    cout <<  "Lista 1: ";
    if(!estao_ordenadas(list1)){
        cout << "Não ordenado\n";
    } else {
        cout << "Ordenado\n";
    }

    cout <<  "Lista 2: ";
    if(!estao_ordenadas(list2)){
        cout << "Não ordenado\n";
    } else {
        cout << "Ordenado\n";
    }


    ///--> b) Ordene as listas, caso não estejam ordenadas;
    cout << endl << "Ordena as listas: " << endl;
    !estao_ordenadas(list1) ? list1.sort() : imprimir(list1);
    !estao_ordenadas(list2) ? list1.sort() : imprimir(list2);
    /// imprimir(list1);
    /// imprimir(list2);

    ///-> c) Mescle os elementos da segunda lista na primeira, mantendo a ordenação na lista final.
    cout << "Mesclar" << endl;
    mesclar(list1, list2);

    return 0;

}
