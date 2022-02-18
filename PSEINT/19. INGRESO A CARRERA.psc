//DIANA PADILLA ZAMORA
Proceso INGRESO_A_CARRERA
	//construir un programa tal quedados como datos la patricula de un alumno, la carrera en la que este inscrito, su semestre y su promedio determine si este 
	//es apto para pertenecer a ALGUNA DE LAS FACULTADES MENORES QUE TIENE LA UNIVERSIDAD siguiendo las especificaciones siguientes, economia, debera tener un semestre mayor o igual a 6 y un promedio mayor o igual a 8.8
	//computacion semestre igual a 6 y promedio mayor a 8.5, administracion semestre mayor a 5 y promedio mayor a 8.5
	//contabilidad semestre igual a 5 y promedio 8.5
	definir promedio, semestre, res, carrera como real;
	escribir "SELECCIONA LA CARRERA A LA QUE QUIERES INGRESAR";
	escribir "1.Economia, 2.Computacion, 3.Administracion, 4.Contabilidad";
	Leer carrera;
	Segun carrera Hacer
		1:
			Escribir "elegiste la carrera de economia";
			Escribir "Ingresa tu semestre";
			Leer semestre;
			Si semestre>=6 Entonces
				Escribir "Bien, ahora ingresa tu promedio";
				Leer promedio;
				Si promedio>=8.8 Entonces
					escribir "Felicidades, puedes ingresar a esta carrera";
				SiNo
					Escribir "Lo siento, pero no puedes ingresar a esta carrera";
				FinSi
			SiNo
				Escribir "Lo siento, pero no puedes ingresar a esta carrera";
			FinSi
		2:
			Escribir "elegiste la carrera de computacion";
			Escribir "Ingresa tu semestre";
			Leer semestre;
			Si semestre=6 Entonces
				Escribir "Bien, ahora ingresa tu promedio";
				Leer promedio;
				Si promedio>8.5 Entonces
					escribir "Felicidades, puedes ingresar a esta carrera";
				SiNo
					Escribir "Lo siento, pero no puedes ingresar a esta carrera";
				FinSi
			SiNo
				Escribir "Lo siento, pero no puedes ingresar a esta carrera";
			FinSi
		3:
			Escribir "elegiste la carrera de administracion";
			Escribir "Ingresa tu semestre";
			Leer semestre;
			Si semestre>5 Entonces
				Escribir "Bien, ahora ingresa tu promedio";
				Leer promedio;
				Si promedio>8.5 Entonces
					escribir "Felicidades, puedes ingresar a esta carrera";
				SiNo
					Escribir "Lo siento, pero no puedes ingresar a esta carrera";
				FinSi
			SiNo
				Escribir "Lo siento, pero no puedes ingresar a esta carrera";
			FinSi
		4:
			Escribir "elegiste la carrera de contabilidad";
			Escribir "Ingresa tu semestre";
			Leer semestre;
			Si semestre=5 Entonces
				Escribir "Bien, ahora ingresa tu promedio";
				Leer promedio;
				Si promedio=8.5 Entonces
					escribir "Felicidades, puedes ingresar a esta carrera";
				SiNo
					Escribir "Lo siento, pero no puedes ingresar a esta carrera";
				FinSi
			SiNo
				Escribir "Lo siento, pero no puedes ingresar a esta carrera";
			FinSi
		De Otro Modo:
			Escribir "la carrera que elegiste no se encuentra aqui";
	FinSegun
	
	
FinProceso
