//DIANA PADILLA ZAMORA
Proceso aumento_sueldo
	definir sueldo, aumento, sfinal Como Real;
	
	escribir "Bienvenido al programa del calculo de aumento";
	
	escribir "Ingresa tu sueldo actual:$ ";
	leer sueldo;
	
	Si(sueldo<=1000)entonces
		escribir "Felicidades ganaste un amento ";
		aumento<-sueldo*0.15;
		sfinal<-aumento+sueldo;
		escribir "Tu aumento fue de $",aumento;
		escribir "Tu sueldo final es de $",sfinal;
	sino
		escribir " Gracias por tu visita ";
	FinSi
	
finproceso
