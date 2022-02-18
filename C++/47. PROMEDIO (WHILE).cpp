//DIANA PADILLA ZAMORA

#include<iostream>
using namespace std;


int main() {
	float cal;
	float calificacion;
	float dato;
	string nombre;
	float promedio;
	// CREAR UN PROGRAMA QUE LE PREGUNTE AL USUARIO SU NOMBRE Y LE 
	// PERMITA INGRESAR SUS CALIFICACIONES TANTAS VECES DESEE, HASTA
	// QUE COLOQUE UN -1 EL CUAL INDICARA QUE TERMINO DE AGREGAR 
	// CALIFICACIONES Y SU RESULTADO SERA EL PROMEDIO 
	cout << "BIENVENIDO AL PROGRAMA DE CALCULO DE PROMEDIO" << endl;
	cout << "¿COMO TE LLAMAS?" << endl;
	cin >> nombre;
	cout << nombre << " RECUERDA QUE PARA FINALIZAR TIENES QUE ESCRIBIR -1 PARA QUE TE PROPORCIONE TU PROMEDIO" << endl;
	cal = 1;
	dato = -1;
	calificacion = 1;
	while (cal>0) {
		cout << "INGRESE CALIFICACION" << endl;
		cin >> cal;
		calificacion = calificacion+cal;
		dato = dato+1;
	}
	promedio = calificacion/dato;
	cout << "HOLA " << nombre << " TU PROMEDIO ES " << promedio << endl;
	return 0;
}

