#include<iostream>
#include<vector>
#include<algorithm> // Necesario para std::find o std::count

using namespace std;

int main() {
    vector<int> listaCompleta; 
    vector<int> duplicados;
    int numero;

    cout << "Ingrese numeros (0 para terminar):" << endl;

    for(;;) {
         
		cin >> numero;
        
        if (numero == 0) break;

     
        if (count(listaCompleta.begin(), listaCompleta.end(), numero) > 0) {
            
            
            if (count(duplicados.begin(), duplicados.end(), numero) == 0) {
                duplicados.push_back(numero);
            }
        }

        
        listaCompleta.push_back(numero);
    }

   
    cout << "Lista Completa" << endl;
    for(int x : listaCompleta) { cout << x << " "; }

    cout << "\n\nValores Duplicados" << endl;
    if(duplicados.empty()) {
        cout << "No hubo duplicados.";
    } else {
        for(int x : duplicados) { cout << x << " "; }
    }

    cout << endl;
    return 0;
}
