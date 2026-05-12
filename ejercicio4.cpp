#include <iostream>
#include <vector>
#include <algorithm>   // sort, set_intersection
using namespace std;

int main() {
    // Inicialización de los dos vectores
    vector<int> primerVector = {1, 3, 5, 7, 9, 11};
    vector<int> segundoVector = {2, 3, 5, 8, 9, 12};

    // Ordenar ambos vectores (requerido por set_intersection)
    sort(primerVector.begin(), primerVector.end());
    sort(segundoVector.begin(), segundoVector.end());

    // Vector para almacenar la intersección
    vector<int> interseccion;

    // set_intersection escribe los elementos comunes en interseccion
    set_intersection(
        primerVector.begin(), primerVector.end(),
        segundoVector.begin(), segundoVector.end(),
        back_inserter(interseccion)
    );

    // Imprimir resultado
    cout << "Intersección: ";
    for (int x : interseccion)
        cout << x << " ";
    cout << endl;

    return 0;
}
