//DIANA PADILLA ZAMORA

Proceso GASTOS_LONDRES
	
	DEFINIR GASTOS, TOTAL COMO REAL; 
	TOTAL<-1;
	GASTOS<-1;
	ESCRIBIR "BIENVENIDOS AL PROGRAMA QUE CALCULA TUS GASTOS A LONDRES";
	MIENTRAS GASTOS>0 HACER 
		ESCRIBIR "INGRESA TU GASTO";
		LEER GASTOS; 
		TOTAL<-TOTAL+GASTOS;
		
	FinMientras
	ESCRIBIR "TU GASTO TOTAL EL DE $", TOTAL , "TE QUEDASTE POBRE"; 
	
FinProceso
