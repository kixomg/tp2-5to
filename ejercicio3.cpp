#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	
	vector <int> lista1{1, 3, 5, 7};
	vector <int> lista2{1, 2, 4, 6};
	vector <int> listaFusionada;
	int indice1=0;
	int indice2=0;
	while (indice1 < lista1.size() && indice2 < lista2.size()) {
        if (lista1[indice1] < lista2[indice2]) {
            listaFusionada.push_back(lista1[indice1]);
            indice1++;
        } else {
            listaFusionada.push_back(lista2[indice2]);
            indice2++;
        }
    }
    while (indice1 < lista1.size()) {
        listaFusionada.push_back(lista1[indice1]);
        indice1++;
    }	
    while (indice2 < lista2.size()) {
        listaFusionada.push_back(lista2[indice2]);
        indice2++;
    }
    
    cout << "Vector fusionado: ";
    for (int x : listaFusionada) {
        cout << x << " ";
    }
    cout << endl;
    
    
    
    return 0;
	}
	
