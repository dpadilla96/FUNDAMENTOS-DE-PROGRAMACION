//DIANA PADILLA ZAMORA
Proceso CIEN_NUMEROS
	definir a, b, total1, total2, c, e, x como entero;
	
	Escribir "Te voy a regalar 100 numeros";
	
	b<-0;
	c<-0;
	e<-0;
	total2<-0;
	total1 <- 0;
	para x<-0 hasta 100 con paso 1 hacer
		
		a<- -1000 + azar(100) mod (1001 - (-1000));
		escribir a," ";
		a<-a+1;
		e<-e+1;
		total2<-a+total2;
		si a>0 Entonces
			b<-b+1;	
		FinSi
		total1 <- total1+a;
		
	finpara
	
	escribir "";
	
	escribir "En tu lista de numeros hay: ",b," numeros positivos \n la suma de esos numeros es: ",total1;
	escribir "\tY su promedio es:",total1/b;
	escribir "\tla suma de todos los numeros es: ",total2;
	escribir "\tY el promedio General es: ",total2/100;
FinProceso