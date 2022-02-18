//DIANA PADILLA ZAMORA
Proceso HOTEL_CASA_BLANCA
	// EL COSTO DE LAS LLAMADAS TELEFONICAS DEPENDEN DE LA ZONA GEOGRAFICA EN DONDE SE ENCUENTRA EL PAÍS, DESTINO Y NUMERO DE MINUTOS, 
	//REALIZA UN PROGRAMA QUE LE AYUDE AL HOTEL CASA BLANCA ANALIZAR EL COBRO DE LAS LLAMADAS QUE HACEN SUS HUESPEDES TOMANDO COMO
	//REFERENCIA LA CLAVE, ZONA, PRECIO DE LA SIGUIENTE MANERA:
	//12 ES LA CLAVE DE AMERICA DEL NORTE Y EL PRECIO ES DE $2.00 POR MINUTO 
	//15 ES LA CLAVE DE AMERICA CENTRAL Y EL PRECIO ES DE $2.20 POR MINUTO 
	//18 ES LA CLAVE DE AMERICA DEL SUR Y EL PRECIO ES DE $4.50 POR MINUTO 
	//19 ES LA CLAVE DE EUROPA Y EL PRECIO ES DE $3.50 POR MINUTO 
	//23 ES LA CLAVE DE ASIA Y EL PRECIO ES DE $6.00 POR MINUTO 
	//25 ES LA CLAVE DE AFRICA Y EL PRECIO ES DE $6.00 POR MINUTO 
	//29 ES LA CLAVE DE OCEANIA Y EL PRECIO ES DE $5.00 POR MINUTO 
	
	Definir clave, minutos, precio, total como real;
	
	Escribir "Bienvenido al programa de calculo de llamadas del Hotel Casa Blanca";
	Escribir "Ingrese el país destino al que desea llamar, las opciones son:";
	Escribir "12. America del Norte";
	Escribir "15. America Central";
	Escribir "18. America del Sur";
	Escribir "19. Europa";
	Escribir "23. Asia";
	Escribir "25. Africa";
	Escribir "29. Oceania";
	leer clave;
	
	Segun clave hacer
		12:
			Escribir "Ha seleccionado América del Norte";
			Escribir "Ingrese la duración de su llamada";
			Leer minutos; 
			total<-minutos*2;
			Escribir "El total de su llamada es $", total;
			
			
		15:
			Escribir "Ha seleccionado América Central";
			Escribir "Ingrese la duración de su llamada";
			Leer minutos; 
			total<-minutos*2.20;
			Escribir "El total de su llamada es $", total;
			
			
		18:
			Escribir "Ha seleccionado América del Sur";
			Escribir "Ingrese la duración de su llamada";
			Leer minutos; 
			total<-minutos*4.50;
			Escribir "El total de su llamada es $", total;
			
		19:
			Escribir "Ha seleccionado Europa";
			Escribir "Ingrese la duración de su llamada";
			Leer minutos; 
			total<-minutos*3.50;
			Escribir "El total de su llamada es $", total;
			
		23:
			Escribir "Ha seleccionado Asia";
			Escribir "Ingrese la duración de su llamada";
			Leer minutos; 
			total<-minutos*6.00;
			Escribir "El total de su llamada es $", total;
			
		25:
			Escribir "Ha seleccionado Africa";
			Escribir "Ingrese la duración de su llamada";
			Leer minutos; 
			total<-minutos*6.00;
			Escribir "El total de su llamada es $", total;
			
		29: 
			Escribir "Ha seleccionado Oceania";
			Escribir "Ingrese la duración de su llamada";
			Leer minutos; 
			total<-minutos*5.00;
			Escribir "El total de su llamada es $", total;
			
		De Otro Modo:
			Escribir "Destino no localizado, ¿A quién esta intentando llamar? ¿A los aliens?";
			
	FinSegun
	
	
	
FinProceso
