
#include<iostream>
using namespace std;

int main() {
	int opcion;
	float resultado;
	float val;
	// CONSTRUIR UN PROGRAMA TAL DADO QUE COMO DATOS DOS VARIABLES
	// DE TIPO ENTERO OBTENGA EL RESULTADO DE
	// 1. 100*EL VALOR
	// 2. 100 EXPONENTE AL VALOR 
	// 3. 100/EL VALOR 
	// CUALQUIER OTRA OPCION SERIA INVALIDA 
	cout << "Ingresa un valor segun las siguientes Opciones" << endl;
	cout << "1. Multiplicación por 100, 2. Exponente del 100, 3. division entre 100" << endl;
	cin >> opcion;
	switch (opcion) {
	case 1:
		cout << "Elegiste la opción de multiplicar" << endl;
		cout << "Ingresa un valor" << endl;
		cin >> val;
		resultado = 100*val;
		cout << "El resultado es " << resultado << endl;
		break;
	case 2:
		cout << "Elegiste la opcion de exponenciar" << endl;
		cout << "Ingrese un valor" << endl;
		cin >> val;
		resultado = pow(10,val);
		cout << "El resultado es " << resultado << endl;
		break;
	case 3:
		cout << "Elegiste la opción de división" << endl;
		cout << "Ingresa un valor" << endl;
		cin >> val;
		resultado = 100/val;
		cout << "El resultado es " << resultado << endl;
		break;
	default:
		cout << "Opción invalida" << endl;
	}
	return 0;
}

