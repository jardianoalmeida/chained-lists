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
    int vetor[g.size()];
    int contador = 0;
    for (it = g.begin(); it != g.end(); ++it){
        // cout << ' ' << *it;
        vetor[contador] == *it;;
        contador++;
    }

    for (int i = 0; i <= contador; i++) {
        cout << ' ' << vetor[i];
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

    cout << "\nList 1 : ";
    imprimir(list1);
    cout << "\nList 2 : ";
    imprimir(list2);

    cout << "Listas sao ordenadas?" << endl;
    cout << "Lista 1" << endl;
    if (!estao_ordenadas(list1)) {
        cout << "Não ordenado" << endl;
    } else {
        cout << "Ordenado" << endl;
    }

    cout << "Lista 2" << endl;
    if (!estao_ordenadas(list2)) {
        cout << "Não ordenado" << endl;
    } else {
        cout << "Ordenado" << endl;
    }


    cout << endl << "Ordena as listas: " << endl;
    list1.sort();
    list2.sort();
    imprimir(list1);
    imprimir(list2);

    cout << "Mesclar" << endl;
    mesclar(list1, list2);


    return 0;

}
