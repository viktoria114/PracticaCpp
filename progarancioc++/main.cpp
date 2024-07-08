#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

struct lista
{
    char dato;
    struct lista *sigue;
} *inicio, *nuevo, *aux, *recorre;

void verlista(struct lista *);
void liblista(struct lista *);
int tamano = sizeof(struct lista);

int main()
{
    char a;
    inicio = NULL;

    printf("Ingrese caracteres MINUSCULAS para agregar y MAYUSCULAS para quitar (ingrese '.' para salir)\n");

    while ((a = getch()) != '.') {
        if (a >= 'a' && a <= 'z')
        {
            nuevo = (struct lista *)malloc(sizeof(struct lista));
            nuevo->dato = a;
            nuevo->sigue = NULL;

            if ((inicio == NULL) || a <= (inicio->dato))
            {
                nuevo->sigue = inicio;
                inicio = nuevo;
            }
            else
            {
                aux = inicio;
                while (aux->sigue && a > aux->sigue->dato)
                {
                    aux = aux->sigue;
                }
                nuevo->sigue = aux->sigue;
                aux->sigue = nuevo;
            }
        }
        else if (a >= 'A' && a <= 'Z')
        {
            a = a + 32;
            if (inicio != NULL && (inicio->dato) == a){

                aux = inicio;
                inicio = inicio->sigue;
                free(aux);
            }
            else
            {
                recorre = inicio;
                while (recorre->sigue && (recorre->sigue)->dato != a)
                    recorre = recorre->sigue;
                aux = recorre->sigue;
                recorre->sigue = (recorre->sigue)->sigue;
                free(aux);
            }
        }

        verlista(inicio);
    }

    printf("\n\n");
    verlista(inicio);
    liblista(inicio);
    getch();
    return (0);
}

void verlista(struct lista *inicio)
{
    struct lista *recorre;
    recorre = inicio;
    printf("-------------------");
    while (recorre)
    {
        putch(recorre->dato);
        recorre = recorre->sigue;
    }
    printf("\n");
}

void liblista(struct lista *inicio)
{
    struct lista *aux;
    while (inicio)
    {
        aux = inicio;
        inicio = inicio->sigue;
        free(aux);
    }
}

void verlistar(struct lista *recorre)
{
    printf("\n");
    if (recorre)
    {
        verlista(recorre->sigue);
        printf("%c", recorre->dato);
    }
}
