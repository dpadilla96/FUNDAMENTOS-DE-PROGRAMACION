//DIANA PADILLA ZAMORA
Proceso Operaciones_artimeticas	
	Definir n1 Como Real;
	Definir n2 Como Real;
	Definir suma, resta, multiplicacion, division como real;
	Definir OP como real;
	Escribir "1: realizar suma";
	Escribir "2: realizar resta";
	Escribir "3: realizar multiplicacion";
	Escribir "4: realizar division"; 
	
	Escribir "Indique la operacion que desea ejecutar"; 
	Leer OP;
	Segun OP Hacer
		1: 
			Escribir "Ingrese numero 1";
			Leer n1;
			Escribir "Ingrese numero 2";
			Leer n2;
			suma<-n1+n2;
			Escribir "La suma es", suma;
			
		2: 
			Escribir "Ingrese numero 1";
			Leer n1;
			Escribir "Ingrese numero 2";
			Leer n2;
			resta<-n1-n2;
			Escribir "La resta es ", resta;
			
		3:
			Escribir "Ingrese numero 1"; 
			Leer n1;
			Escribir "Ingrese numero 2"; 
			Leer n2; 
			multiplicacion <-n1*n2;
			Escribir "La multiplicacion es", multiplicacion; 
			
		4: 
			Escribir "Ingrese numero 1";
			Leer n1; 
			Escribir "Ingrese numero 2"; 
			Leer n2; 
			division<-n1/n2; 
			Escribir "La division es", division; 
			
		De Otro Modo:
			Escribir "Error";
	FinSegun
	
FinProceso
