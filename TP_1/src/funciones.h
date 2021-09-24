#ifndef FUNCIONES_H_
#define FUNCIONES_H_

int getInt (int* numero, char* mensaje, char* mensajeError,short minimo,short maximo);
int getFloat (float* numero, char* mensaje, char* mensajeError);
int menu(int* opcion,float numeroUno,float numeroDos,short flagPrimerIngreso,short flagPrimerIngresoSegundo);
void mostrarSeparador(void);
void limpiarConsola(void);
int opcionTres(short flagPrimerIngreso,short flagPrimerIngresoSegundo);
void mostrar(float suma, float resta, float division, double multiplicacion, unsigned long long int factorialUno, unsigned long long int factorialDos,int verificadorDivision);

#endif
