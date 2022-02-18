//crea un programa el cual usando do...while pueda el usuario ingresar cualquier digito y se lo convierta en numero romano
Proceso romano
	Definir x, p como entero;
	Repetir
		Escribir "Ingrese el numero que quiere convertir a romano (del 1 al 10) o la decena a convertir (10, 20,...100)";
		
		Leer x;
		Segun x Hacer
			1:
				Escribir x,"=I";
			2:
				Escribir x,"=II";
			3:
				Escribir x,"=III";
			4:
				Escribir x,"=IV";
			5: 
				Escribir x,"=VI";
			6: 
				Escribir x,"=VII";
			7:
				Escribir x,"=VIII";
			8:
				Escribir x,"=IX";
			9: 
				Escribir x,"=X";
			10: 
				Escribir x,"=XI";
			20:
				Escribir x,"=XX";
			30:
				Escribir x,"=XXX";
			40:
				Escribir x,"=XL";
			50:
				Escribir x,"=L";
			60:
				Escribir x,"=LX";
			70:
				Escribir x,"=LXX";
			80:
				Escribir x,"=LXXX";
			90:
				Escribir x,"=XC";
			100:
				Escribir x,"=C";
			De Otro Modo:
				Escribir "INGRESE UN NUMERO ADECUADO";
		FinSegun
		Escribir "Desea convertir otro numero SI=1 NO=0";
		Leer p;
	Hasta Que p=0;
	
	
	
FinProceso
