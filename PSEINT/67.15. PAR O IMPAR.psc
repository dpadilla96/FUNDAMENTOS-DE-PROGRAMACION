//DIGA SI UN NUMERO ES PAR O IMPAR 

Proceso PAR_IMPAR
	
	DEFINIR NUM COMO ENTERO; 
	
	ESCRIBIR "BIENVENIDO AL PROGRAMA DE CLASIFICACION DE NUMEROS"; 
	ESCRIBIR "POR FAVOR INGRESE SU NUMERO"; 
	LEER NUM; 
	
	SI NUM%2=0 ENTONCES 
		ESCRIBIR NUM, " ES UN NUMERO PAR"; 
	SINO 
		ESCRIBIR NUM, " ES UN NUMERO IMPAR";
	FinSi
	
FinProceso
