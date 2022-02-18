//DIANA PADILLA ZAMORA
Proceso HORAS_EXTRAS_PROAN
	//ESCRIBA UN PROGRAMA QUE TE PERMITA CALCULAR LO QUE DEBEMOS CALCULARLE A LOS TRABAJADORES DE LA EMPRESA PROAN TENIENDO EN CUENTA SU SUELDO Y LAS HORAS
	//EXTRAS TRABAJADAS PARA LA CUAL CONSIDERAREMOS LO SIGUIENTE: 
	//CATEGORIA 1 HORA EXTRA A $30.00 PESOS 
	//CATEGORIA 2 HORA EXTRA A $38.00 PESOS 
	//CATEGORIA 3 HORA EXTRA A $50.00 PESOS 
	//CATEGORIA 4 HORA EXTRA A $70.00 PESOS 
	//CADA TRABAJADOR PUEDE ACUMULAR 30 HORAS MAXIMO SI LLEGARAN A TENER MAS SE PAGARAN A $30.00
	
	Definir categoria, horas, subtotal1, subtotal  Como Real;
	
	Escribir "Bienvenido al calculo de Horas Extras de PROAN";
	Escribir "Por favor seleccione la categoría a la que pertenece";
	Escribir "Categoría 1";
	Escribir "Categoría 2";
	Escribir "Categoría 3";
	Escribir "Categoría 4";
	Leer categoria;
	
	Segun categoria HACER
		
		1: 
			Escribir "Perteneces a la categoría 1, las horas extras se pagan a $30.00";
			Escribir "Ingrese cantidad de horas trabajadas";
			Leer horas;
			si horas >= 30 entonces;
				subtotal1<-horas*30;
				si horas >= 31 entonces 
					subtotal2 <-horas*30;
				FinSi
			finsi
			
			Escribir "El monto correspondiente es de $", subtotal;
			
		2: 
			Escribir "Perteneces a la categoría 2, las horas extras se pagan a $38.00";
			Escribir "Ingrese cantidad de horas trabajadas";
			Leer horas;
			subtotal<-horas*38;
			Escribir "El monto correspondiente es de $", subtotal;
			
		3:
			Escribir "Perteneces a la categoría 3, las horas extras se pagan a $50.00";
			Escribir "Ingrese cantidad de horas trabajadas";
			Leer horas;
			subtotal<-horas*50;
			Escribir "El monto correspondiente es de $", subtotal;
			
		4:
			Escribir "Perteneces a la categoría 4, las horas extras se pagan a $70.00";
			Escribir "Ingrese cantidad de horas trabajadas";
			Leer horas;
			subtotal<-horas*70;
			Escribir "El monto correspondiente es de $", subtotal;
		
		
	FinSegun
	
FinProceso
