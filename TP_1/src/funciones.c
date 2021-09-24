#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
/**
 * @fn int getInt(int*, char*, char*, short, short)
 * @brief Toma el entero para las opciones dentro de la funcion menu
 *
 * @param numero Puntero a numero en la funcion de menu
 * @param mensaje Mensaje a mostrar al usuario
 * @param mensajeError Mensaje de error a mostrar al usuario
 * @param minimo Valor minimo permitido
 * @param maximo Valor maximo permitido
 * @return retorna 0 si salio bien, -1 si no se pudo concretar
 */

int getInt (int* numero, char* mensaje, char* mensajeError,short minimo,short maximo){
    int numeroFuncion;
    int ret=-1;
    printf(mensaje);
    if(scanf("%d",&numeroFuncion) && (numeroFuncion>=minimo&&numeroFuncion<=maximo))
    {
        (*numero)=numeroFuncion;
        ret=0;
    }
    else
    {
        printf(mensajeError);
        system("pause");
        fflush(stdin);
        limpiarConsola();
    }
    return ret;
}

/**
 * @fn int getFloat(float*, char*, char*)
 * @brief Toma los numeros flotantes para los operadores
 *
 * @param numero Puntero a los numeros del main
 * @param mensaje Mensaje a mostrar
 * @param mensajeError Mensaje a mostrar en caso de ingresar una letra
 * @return
 */

int getFloat (float* numero, char* mensaje, char* mensajeError){
    float numeroFuncion;
    int ret=-1;
    printf(mensaje);
    if(scanf("%f",&numeroFuncion))
    {
        (*numero)=numeroFuncion;
        ret=0;
    }
    else
    {
        printf(mensajeError);
    }
    return ret;
}

/**
 * @fn void mostrarSeparador(void)
 * @brief Crea una barra para simular una GUI
 *
 */

void mostrarSeparador(void){
	printf("***********************************************************\n");
}

/**
 * @fn void limpiarConsola(void)
 * @brief Muchos saltos de linea que simulan limpiar la consola
 *
 */

void limpiarConsola(void){
	printf("\n\n\n\n\n\n");
}

/**
 * @fn int menu(int*, float, float, short, short)
 * @brief Funcion donde se reciben los valores para las opciones y los mensajes que muestra
 *
 * @param opcion Puntero a valor de opciones en el main
 * @param numeroUno Variable donde se guarda el primer operador
 * @param numeroDos Variable donde se guarda el segundo operador
 * @param flagPrimerIngreso Su valor es para verificar si el primer operador fue ingresado
 * @param flagPrimerIngresoSegundo Su valor es para verificar si el segundo operador fue ingresado
 * @return
 */

int menu(int* opcion,float numeroUno,float numeroDos,short flagPrimerIngreso,short flagPrimerIngresoSegundo){
		int opcionAuxiliar;
		int ret = -1;
		do{
			mostrarSeparador();
			if(!flagPrimerIngreso){
				printf("1. Ingresar 1er operando (A=X)");
			}else{
				printf("1. Ingresar 1er operando (A=%.2f)",numeroUno);
			}
			if(!flagPrimerIngresoSegundo){
					printf("\n2. Ingresar 2do operando (B=Y)");
			}else{
					printf("\n2. Ingresar 2do operando (B=%.2f)",numeroDos);
			}
			printf("\n3. Calcular todas las operaciones");
			printf("\n4. Informar resultados");
			printf("\n5. Salir\n");
			mostrarSeparador();
			getInt (&opcionAuxiliar,"Ingrese un numero para la opciones desde el 1 al 5\n","Ingreso invalido; Reingrese un numero para la opciones desde el 1 al 5\n",1,5);
			limpiarConsola();
			*opcion=opcionAuxiliar;
			ret = 0;
		}while(opcionAuxiliar <1 || opcionAuxiliar > 5);
		return ret;
}

int opcionTres(short flagPrimerIngreso,short flagPrimerIngresoSegundo){
	int ret = -1;
	if(!flagPrimerIngreso && !flagPrimerIngresoSegundo){
			printf("Debe ingresar los dos operando para utilizar esta opcion\n");
			system("pause");
			limpiarConsola();
	}else{
			if(!flagPrimerIngreso){
				printf("Falta ingresar el primer operando para utilizar esta opcion\n");
				system("pause");
				limpiarConsola();
			}else{
					if(!flagPrimerIngresoSegundo){
						printf("Falta ingresar el segundo operando para utilizar esta opcion\n");
						system("pause");
						limpiarConsola();
					}else{
						ret = 0;
					}
			}
	}
	return ret;
}

/**
 * @fn void mostrar(float, float, float, double, unsigned long long int, unsigned long long int, int)
 * @brief Imprime los valores de la cuentas
 *
 * @param suma Valor de la suma de los dos operadores
 * @param resta Valor de la resta de los dos operadores
 * @param division Valor de la division de los dos operadores
 * @param multiplicacion Valor de la multiplicacion de los dos valores
 * @param factorialUno Valor del factorial A
 * @param factorialDos Valor del factorail B
 * @param verificadorDivision Verifica el return de la division para saber el valor del segundo operador
 */

void mostrar(float suma, float resta, float division, double multiplicacion, unsigned long long int factorialUno, unsigned long long int factorialDos,int verificadorDivision){
	mostrarSeparador();
	printf("La suma da un total de %.2f\n",suma);
	printf("La resta da un total de %.2f\n",resta);

	if(!verificadorDivision){
		printf("La division da un total de %.2f\n",division);
	}else{
		printf("El segundo numero es un 0 no se puede realizar la division\n");
	}

	printf("La multiplicacion da un resultado de %.2f\n", multiplicacion);

	if(factorialUno == -1){
		printf("No se puede realizar un factorial de un numero menor a 0\n");
	}else{
		if(!factorialUno){
			printf("ERROR, el resultado es demasiado grande como para procesarlo\n");
		}else{
			if(factorialUno == -2){
			printf("No se puede realizar factorial de un numero con coma\n");
			}else{
			printf("El factorial del primer numero es %I64u\n", factorialUno);
			}
		}
	}

	if(factorialDos == -1){
		printf("No se puede realizar un factorial de un numero menor a 0\n");
	}else{
		if(!factorialDos){
		printf("ERROR, el resultado es demasiado grande como para procesarlo\n");
	}else{
		if(factorialDos == -2){
		printf("No se puede realizar factorial de un numero con coma\n");
		}else{
		printf("El factorial del segundo numero es %I64u\n", factorialDos);
			}
		}
	}
	system("pause");
	limpiarConsola();
}
