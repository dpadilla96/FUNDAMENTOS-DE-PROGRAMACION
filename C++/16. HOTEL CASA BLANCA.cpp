
#include<iostream>
using namespace std;


int main() {
	int clave;
	float minutos;
	float precio;
	float total;
	// EL COSTO DE LAS LLAMADAS TELEFONICAS DEPENDEN DE LA ZONA GEOGRAFICA EN DONDE SE ENCUENTRA EL PAÍS, DESTINO Y NUMERO DE MINUTOS, 
	// REALIZA UN PROGRAMA QUE LE AYUDE AL HOTEL CASA BLANCA ANALIZAR EL COBRO DE LAS LLAMADAS QUE HACEN SUS HUESPEDES TOMANDO COMO
	// REFERENCIA LA CLAVE, ZONA, PRECIO DE LA SIGUIENTE MANERA:
	// 12 ES LA CLAVE DE AMERICA DEL NORTE Y EL PRECIO ES DE $2.00 POR MINUTO 
	// 15 ES LA CLAVE DE AMERICA CENTRAL Y EL PRECIO ES DE $2.20 POR MINUTO 
	// 18 ES LA CLAVE DE AMERICA DEL SUR Y EL PRECIO ES DE $4.50 POR MINUTO 
	// 19 ES LA CLAVE DE EUROPA Y EL PRECIO ES DE $3.50 POR MINUTO 
	// 23 ES LA CLAVE DE ASIA Y EL PRECIO ES DE $6.00 POR MINUTO 
	// 25 ES LA CLAVE DE AFRICA Y EL PRECIO ES DE $6.00 POR MINUTO 
	// 29 ES LA CLAVE DE OCEANIA Y EL PRECIO ES DE $5.00 POR MINUTO 
	cout << "Bienvenido al programa de calculo de llamadas del Hotel Casa Blanca" << endl;
	cout << "Ingrese el país destino al que desea llamar, las opciones son:" << endl;
	cout << "12. America del Norte" << endl;
	cout << "15. America Central" << endl;
	cout << "18. America del Sur" << endl;
	cout << "19. Europa" << endl;
	cout << "23. Asia" << endl;
	cout << "25. Africa" << endl;
	cout << "29. Oceania" << endl;
	cin >> clave;
	switch (clave) {
	case 12:
		cout << "Ha seleccionado América del Norte" << endl;
		cout << "Ingrese la duración de su llamada" << endl;
		cin >> minutos;
		total = minutos*2;
		cout << "El total de su llamada es $" << total << endl;
		break;
	case 15:
		cout << "Ha seleccionado América Central" << endl;
		cout << "Ingrese la duración de su llamada" << endl;
		cin >> minutos;
		total = minutos*2.20;
		cout << "El total de su llamada es $" << total << endl;
		break;
	case 18:
		cout << "Ha seleccionado América del Sur" << endl;
		cout << "Ingrese la duración de su llamada" << endl;
		cin >> minutos;
		total = minutos*4.50;
		cout << "El total de su llamada es $" << total << endl;
		break;
	case 19:
		cout << "Ha seleccionado Europa" << endl;
		cout << "Ingrese la duración de su llamada" << endl;
		cin >> minutos;
		total = minutos*3.50;
		cout << "El total de su llamada es $" << total << endl;
		break;
	case 23:
		cout << "Ha seleccionado Asia" << endl;
		cout << "Ingrese la duración de su llamada" << endl;
		cin >> minutos;
		total = minutos*6.00;
		cout << "El total de su llamada es $" << total << endl;
		break;
	case 25:
		cout << "Ha seleccionado Africa" << endl;
		cout << "Ingrese la duración de su llamada" << endl;
		cin >> minutos;
		total = minutos*6.00;
		cout << "El total de su llamada es $" << total << endl;
		break;
	case 29:
		cout << "Ha seleccionado Oceania" << endl;
		cout << "Ingrese la duración de su llamada" << endl;
		cin >> minutos;
		total = minutos*5.00;
		cout << "El total de su llamada es $" << total << endl;
		break;
	default:
		cout << "Destino no localizado, ¿A quién esta intentando llamar? ¿A los aliens?" << endl;
	}
	return 0;
}

