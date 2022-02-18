//DIANA PADILLA ZAMORA
Proceso SUELDO_POR_CATEGORIA
	//CONSTRUYA UN PROGRAMA TAL QUE DADOS DATOS LA CATEGORIA Y EL SUELDO DE UN TRABAJADOR CALCULE EL AUMENTO CORRESPONDIENTE TENIENDO EN 
	//CUENTA LA SIGUIENTE TABLA
	//SI LA CATEGORIA ES 1 EL AUMENTO ES DEL 15%
	//SI LA CATEGORIA ES 2 EL AUMENTO ES DEL 10%
	//SI LA CATEGORIA ES 3 EL AUMENTO ES DEL 8%
	//SI LA CATEGORIA ES 4 EL AUMENTO ES DEL 7%
	
	Definir sactual, categoria, aumento, total como real;
	Escribir "Bienvenido al programa de calculo de sueldo segun categoria";
	Escribir "Ingrese el número de categoria al que pertenece, las opciones son:";
	Escribir "Categoria 1";
	Escribir "Categoria 2"; 
	Escribir "Categoria 3"; 
	Escribir "Categoria 4"; 
	Leer categoria; 
	
	
	Segun categoria hacer 
		1:
			Escribir "Perteneces al grupo 1 tu aumento es del 15%";
			Escribir "Ingresa tu saldo actual"; 
			Leer sactual; 
			aumento <-sactual*.15;
			Escribir "Tu aumento es de $", aumento; 
			total<-aumento+sactual;
			Escribir "Tu sueldo final es", total;
			
		2:
			Escribir "Perteneces al grupo 2 tu aumento es del 15%";
			Escribir "Ingresa tu saldo actual"; 
			Leer sactual; 
			aumento <-sactual*.10;
			Escribir "Tu aumento es de $", aumento; 
			total<-aumento+sactual;
			Escribir "Tu sueldo final es", total;
			
		3:
			Escribir "Perteneces al grupo 3 tu aumento es del 15%";
			Escribir "Ingresa tu saldo actual"; 
			Leer sactual; 
			aumento <-sactual*.08;
			Escribir "Tu aumento es de $", aumento; 
			total<-aumento+sactual;
			Escribir "Tu sueldo final es", total;
			
		4:
			Escribir "Perteneces al grupo 4 tu aumento es del 15%";
			Escribir "Ingresa tu saldo actual"; 
			Leer sactual; 
			aumento <-sactual*.07;
			Escribir "Tu aumento es de $", aumento; 
			total<-aumento+sactual;
			Escribir "Tu sueldo final es", total;
			
		De Otro Modo:
			Escribir "Opcion invalida";
			
	FinSegun
	
	
FinProceso
