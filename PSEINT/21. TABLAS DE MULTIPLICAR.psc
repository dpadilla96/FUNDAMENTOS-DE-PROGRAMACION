//DIANA PADILLA ZAMORA
Proceso tablas_de_multiplicar
	//realiza un programa tal que dado como dato un numero entero obtenga la tabla del 1 al 10 
	Definir  numero, total Como entero;
	Definir  x Como Entero;
	total<-0;//inicializar
	
	Escribir "BIENVENIDO AL PROGRAMA DE TABLAS DE MULTIPLICAR";
	Escribir "INGRESA UN NUMERO  ";
	Leer numero;
	Para x<-1 Hasta 10 Con Paso 1 Hacer
		total<-numero*x;
		Escribir numero, "*", x,"=", total;
	FinPara
FinProceso
