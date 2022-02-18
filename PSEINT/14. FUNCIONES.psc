//DIANA PADILLA ZAMORA
Proceso FUNCIONES
	//CONSTRUIR UN PROGRAMA TAL DADO QUE COMO DATOS DOS VARIABLES
	//DE TIPO ENTERO OBTENGA EL RESULTADO DE
	//1. 100*EL VALOR
	//2. 100 EXPONENTE AL VALOR 
	//3. 100/EL VALOR 
	//CUALQUIER OTRA OPCION SERIA INVALIDA 
	
	Definir Opcion Como Entero;
	Definir Val, resultado Como Real;
	Escribir "Ingresa un valor segun las siguientes Opciones";
	Escribir "1. Multiplicación por 100, 2. Exponente del 100, 3. division entre 100";
	Leer opcion; 
	
	segun opcion hacer
		1: Escribir "Elegiste la opción de multiplicar"; 
			escribir "Ingresa un valor";
			Leer val;
			resultado<-100*val;
			Escribir "El resultado es ", resultado;
		2:
			Escribir "Elegiste la opcion de exponenciar" ;
			Escribir "Ingrese un valor" ;
			Leer val;
			resultado <-10 ^ val; 
			Escribir "El resultado es ",  resultado;
			
		3: Escribir "Elegiste la opción de división";
			escribir "Ingresa un valor"; 
			Leer val; 
			resultado <- 100/val;
			Escribir "El resultado es ", resultado;
			
		De Otro Modo:
			Escribir "Opción invalida";
	FinSegun
FinProceso
