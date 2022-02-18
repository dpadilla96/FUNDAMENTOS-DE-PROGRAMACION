
#include<iostream>
using namespace std;

// EL DUEÑO DE UNA TIENDA COMPRA UN ARTICULO A UN PRECIO DETERMINADO
// OBTENER EL PRECIO EN QUE LO DEBE VENDER PARA OBTENER UNA GANANCIA 
// DEL 30%
int main() {
	float compra;
	float ganancia;
	float venta;
	cout << "BIENVENIDO TENDERO" << endl;
	cout << "INGRESE EL PRECIO DE COMPRA DEL PRODUCTO" << endl;
	cin >> compra;
	cout << "LA GANANCIA QUE SE GENERA ES DEL 30%" << endl;
	ganancia = compra*.30;
	cout << "EL AUMENTO PARA ESTE PRODUCTO ES DE $" << ganancia << endl;
	venta = compra+ganancia;
	cout << "EL PRECIO DE VENTA DEL PRODUCTO ES DE $" << venta << endl;
	return 0;
}

