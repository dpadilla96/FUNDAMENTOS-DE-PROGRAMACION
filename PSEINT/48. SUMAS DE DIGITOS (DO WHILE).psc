Proceso sin_titulo
	//CREA UN PROGRAMA QUE PIDA NUMEROS POSITIVOS AL USUARIO, Y VAYA 
	//CALCULANDO LA SUMA DE TODOS ELLOS (TERMINARA CUANDO SE TECLEA 
	//UN NUMERO NEGATIVO O CERO)
	
	DEFINIR NUM, SUMA COMO REAL; 
	ESCRIBIR "BIENVENIDO AL PROGRAMA QUE SUMA LOS DIGITOS QUE NOS DES"; 
	ESCRIBIR "RECUERDA QUE PARA DETENR LA SUMA TIENES QUE TECLEAR 0"; 
	
	NUM<-1;
	SUMA<-0; 
	
	MIENTRAS NUM > 0 HACER
		ESCRIBIR "INGRESA TU NUMERO"; 
		LEER NUM;
		SUMA<-SUMA+NUM;
	FinMientras
	ESCRIBIR "LA SUMA ES " , SUMA; 
	
FinProceso