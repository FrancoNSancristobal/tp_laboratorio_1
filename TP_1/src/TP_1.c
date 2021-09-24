#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "operaciones.h"
int main(void) {
	setbuf(stdout,NULL);
		float suma;
		float resta;
		float division;
		double multiplicacion;
		unsigned long long int factorialUno;
		unsigned long long int factorialDos;
		float numeroUno;
		float numeroDos;
		short flagPrimerIngreso=0;
		short flagPrimerIngresoSegundo=0;
		short flagCalculosRealizados=0;
		int opcion;
		int verificadorDivision;

	do{
	menu(&opcion, numeroUno, numeroDos, flagPrimerIngreso, flagPrimerIngresoSegundo);
	switch(opcion){
	case 1:
		limpiarConsola();
		mostrarSeparador();
		getFloat(&numeroUno, "Ingrese el primer operador\n", "Ocurrio un problema no se pudo ingresar el valor");
		flagPrimerIngreso=1;
		limpiarConsola();
		break;
	case 2:
		limpiarConsola();
		mostrarSeparador();
		getFloat(&numeroDos, "Ingrese el segundo operador\n", "Ocurrio un problema no se pudo ingresar el valor");
		flagPrimerIngresoSegundo=1;
		limpiarConsola();
		break;
	case 3:
		if(!opcionTres(flagPrimerIngreso,flagPrimerIngresoSegundo)){
			sumar(&suma,numeroUno,numeroDos);
			restar(&resta,numeroUno,numeroDos);
			verificadorDivision=dividir(&division, numeroUno, numeroDos);
			multiplicar(&multiplicacion, numeroUno, numeroDos);
			factorialUno=factorizar(numeroUno);
			factorialDos=factorizar(numeroDos);
			flagCalculosRealizados=1;
		}
		break;
	case 4:
		if(flagCalculosRealizados){
			mostrar(suma, resta, division, multiplicacion, factorialUno, factorialDos, verificadorDivision);
		}else{
			limpiarConsola();
			mostrarSeparador();
			printf("Debe realizar la operacion 3 primero\n");
			system("pause");
		}
		break;
		}
	}while(opcion!=5);

	return EXIT_SUCCESS;
}
