//DIANA PADILLA ZAMORA
Proceso NUMERO_AL_AZAR
	definir n como entero; 
	definir  a, b, c, d, e, f, x, prom como entero; 
	n<-270; 
	
	e<-0;
	b<-0;
	c<-0;
	a<-0;
	para  x<-0 hasta 270 con paso 1 hacer
		a<-azar(270); 
		si  a%2<-0 entonces
			
			c<-a+1; 
			
			b<-b+1; 
			
		finsi
	finpara
	
	escribir "se escogieron al azar ",b,"numeros pares de 270 numeros. Por lo tanto hay-",270-b,"-numeros impares.  la suma de estos numeros es:  ",c; 
	prom<-(a/b); 
	escribir " el promedio de esta suma es:  ",prom; 
	
	si (a%2>0) entonces
		d<-a+1; 
		
		e<-e+1; 
	finsi
	escribir " la suma de los numeros impares es: ",d;
	
FinProceso