#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

int initArrayEstructura(aEstructura lista[], int tam);
int buscarLugarLibre(aEstructura lista[], int tam);
int generarId(aEstructura lista[],int tam);
int buscarExisteId(aEstructura lista[], int tam, int id);
int anadirEmpleadoMan(aEstructura lista[], int tam, int id, char nombre[], char apellido[], float sueldo, int sector);
int anadirEmpleadoaut(aEstructura lista[], int tam, int id, char nombre[], char apellido[], float sueldo, int sector);
int mostrarListaElementos(aEstructura lista[], int tam);
int mostrarUnElemento(aEstructura unElemento);
int bajaElemento(aEstructura lista[], int tam, int id);
int modificarElemento(aEstructura lista[], int tam, int id);
int ordenarEmpleados(empleado lista[], int tam);
int informesSueldos(empleado lista[], int tam);

#endif // FUNCIONES_H_INCLUDED
