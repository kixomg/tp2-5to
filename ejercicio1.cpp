#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	
	vector <int> numeros = {1, 2, 3, 4, 5, 6, 7, 8};
	for(int i=0; i<8; i++){
	cout<<numeros[i];	
	}
	
	reverse(numeros.begin(), numeros.end());
	cout<<"Vector invertido"<<endl;
	
	for(int j=0; j<8; j++){
	cout<<numeros[j];	
	}
	
	
	return 0;
}
