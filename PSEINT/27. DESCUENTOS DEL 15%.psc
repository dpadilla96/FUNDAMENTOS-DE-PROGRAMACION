//DIANA PADILLA ZAMORA
//UNA TIENDA OFRECE UN DESCUENTO DEL 15% SOBRE EL TOTAL DE LA COMPRA Y UN CLIENTE DESEA }
//SABER CUANTO DEBERA DE PAGAR FINALMENTE POR SU COMPRA

Proceso DESCUENTO_15
	
	DEFINIR COMPRA, DESCUENTO, TOTAL COMO REAL;
	
	ESCRIBIR "BIENVENIDO, DESEA SABER SU SALDO A PAGAR";
	ESCRIBIR "YO PUEDO AYUDARLE"; 
	ESCRIBIR "POR FAVOR INGRESE EL MONTO DE SU COMPRA"; 
	LEER COMPRA; 
	
	ESCRIBIR "EL D�A DE HOY TENEMOS EL 15% DE DESCUENTO EN TODAS LAS COMPRAS QUE REALICE";
	DESCUENTO<-COMPRA*.15; 
	ESCRIBIR "FELICIDADES SU DESCUENTO ES DE $", DESCUENTO; 
	TOTAL<-COMPRA-DESCUENTO; 
	
	ESCRIBIR "SU SALDO FINAL ES DE $", TOTAL; 
	
FinProceso
