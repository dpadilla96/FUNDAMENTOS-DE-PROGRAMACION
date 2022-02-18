//DIANA PADILLA ZAMORA
Proceso nomina
	//construya un programa tal que dado como datos el sueldo de 10 trabajadores de una empresa obtenga la nomina haciendo la suma total de los sueldos el pago de impuestos
	//equivalente al 24% y el total final
	Definir  sueldo, pagim, total, totfin Como Real;
	Definir  x Como Entero;
	total<-0;//inicializar
	
	Escribir "BIENVENIDO AL PROGRAMA DE NOMINA DE PROAN";

	Para x<-1 Hasta 10 Con Paso 1 Hacer
		Escribir "INGRESA TU SUELDO SEMANAL, EMPLEADO  ",x;
		Leer sueldo;
		total<-total+sueldo;
		
	FinPara
	
	Escribir "EL TOTAL DEL OS SUELDOS ES: ",total;
	pagim<-total*.24;
	Escribir "EL TOTAL DE IMPUESTOS A PAGAR ES $ ",pagim;
	totfin<-total+pagim;
	Escribir  "EL TOTAL FINAL ES $ ",totfin;
	
	
FinProceso
