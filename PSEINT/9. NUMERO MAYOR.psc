//DIANA PADILLA ZAMORA
Proceso NUMERO_MAYOR
	definir a, b, c, mayor como real;
	Escribir "Introduzca 3 numeros"; 
	leer a; 
	leer b; 
	leer c; 
	si a>=b & a>=c entonces;
		mayor <-a;
	sino 
		si b>=a & b>=c entonces; 
			mayor <-b; 
			
		sino 
			mayor <-c;
		FinSi
	FinSi
	escribir "maximo" , mayor; 
FinProceso
