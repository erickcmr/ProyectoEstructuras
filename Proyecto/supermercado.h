#ifndef __SUPERMERCADO_H__
#define __SUPERMERCADO_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ctype.h"
#include "stdlib.h"
#include "math.h"

struct Cliente {

   char nombre[30];
   int id_tarjeta;
};

struct Producto {

   int codigo;
   char nombre[25];
   float precio;
};

struct Arbol {

   struct Producto productoAlmacenado;
   struct Arbol *hijoDerecho;
   struct Arbol *hijoIzquierdo;
   int fe;
};

struct Producto leerProducto(void);
struct Cliente leerCliente();
struct Arbol* insertar(struct Arbol *raizArbol, struct Producto productoInsertar);
struct Arbol* rotacionDerecha(struct Arbol *raizDesbalanceada);
struct Arbol* rotacionIzquierda(struct Arbol *raizDesbalanceada);
int calcularAltura(struct Arbol *raiz);
int calcularFE(struct Arbol *raiz);
struct Producto buscar(struct Arbol *raiz, int codigoBuscar);
int modificar(struct Arbol *raiz, int codigoBuscar);
char enteroacaracter(int numero);
int obtenerCodigo(char *palabra);

#endif
