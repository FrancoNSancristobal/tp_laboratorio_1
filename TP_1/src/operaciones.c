#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

/**
 * @fn int sumar(float*, float, float)
 * @brief Suma los dos operadores
 *
 * @param suma Puntero a suma del main que recibe el valor de la suma
 * @param numeroUno Valor del primer operador
 * @param numeroDos Valor del segundo operador
 * @return 0 si se pudo realizar la operacion, -1 Si no
 */
int sumar(float* suma,float numeroUno,float numeroDos){
	int ret = -1;
	if(suma != NULL){
	*suma = numeroUno + numeroDos;
	ret = 0;
	}
	return ret;
}

/**
 * @fn int restar(float*, float, float)
 * @brief Resta el valor entre los dos operadores
 *
 * @param restar Puntero al main que recibe el valor de la resta
 * @param numeroUno Valor del primer operador
 * @param numeroDos Valor del segundo operador
 * @return 0 si se pudo realizar la operacion, -1 Si no
 */
int restar(float* restar,float numeroUno,float numeroDos){
	int ret = -1;
	if(restar != NULL){
	*restar = numeroUno + numeroDos;
	ret = 0;
	}
	return ret;
}

/**
 * @fn int dividir(float*, float, float)
 * @brief Realiza la division entre 2 numeros
 *
 * @param division Puntero al main que recibe el valor de la division
 * @param primerNumero Primer operador
 * @param segundoNumero Segundo operador
 * @return 0 si el segundo valor es distino a 0,-1 Si no es posible realizar la division
 */
int dividir(float* division,float primerNumero,float segundoNumero){
	int ret = -1;
	if(segundoNumero != 0){
	*division = primerNumero/segundoNumero;
	ret = 0;
	}else{
	ret = -1;
	}
	return ret;
}
/**
 * @fn int multiplicar(double*, float, float)
 * @brief Multiplica los dos operadores entre si
 *
 * @param multiplicacion Puntero del main que recibe el resultado de la multiplicacion
 * @param primerNumero Primer operador
 * @param segundoNumero Segundo operador
 * @return 0 si se pudo realizar la operacion, -1 Si no
 */
int multiplicar(double* multiplicacion,float primerNumero,float segundoNumero){
	int ret = -1;
	if(multiplicacion != NULL){
	*multiplicacion = primerNumero * segundoNumero;
	ret = 0;
	}
	return ret;
}

/**
 * @fn unsigned long long int factorizar(float)
 * @brief Funcion recursiva que realiza la factorizacion de un numero
 *
 * @param numero Numero a recibir
 * @return -1 Si es negativo el numero,0 Si es mayor a 20,-2 Si es un numero decimal, Si no devuelve el valor del numero factorizado
 */
unsigned long long int factorizar(float numero){
	int auxiliar=numero;
	if(numero<0){
	        return -1;
	}else{
		if(numero>20){
		return 0;
		}else{
			if(auxiliar-numero != 0){
				return -2;
			}
		}
	}
	unsigned long long int factorial = 1;
	int i;
	for (i=1; i<=numero; i++){
		factorial=factorial * i;
	}
	return factorial;
}
