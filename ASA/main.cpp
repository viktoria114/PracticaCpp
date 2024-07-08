#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct lista {
    char dato;
    struct lista* sigue;
} * inicio, * nuevo, * aux, * recorre;

void verlista(struct lista*);
void liblista(struct lista*);

int main() {
    char a;

    inicio = NULL;
    printf("Ingrese caracteres MINUSCULAS para agregar y MAYUSCULAS para quitar (ingrese '.' para salir)\n");

    while ((a = getch()) != '.') {
        if (a >= 'a' && a <= 'z') {
            nuevo = (struct lista*)malloc(sizeof(struct lista));
            nuevo->dato = a;
            nuevo->sigue = NULL;

            if (inicio == NULL || a <= inicio->dato) {
                nuevo->sigue = inicio;
                inicio = nuevo;
            } else {
                aux = inicio;
                while (aux->sigue != NULL && a > aux->sigue->dato) {
                    aux = aux->sigue;
                }
                nuevo->sigue = aux->sigue;
                aux->sigue = nuevo;
            }
        } else if (a >= 'A' && a <= 'Z') {
            char lower_a = a + 32; // Convertir a minúscula
            if (inicio != NULL && inicio->dato == lower_a) {
                aux = inicio;
                inicio = inicio->sigue;
                free(aux);
            } else {
                recorre = inicio;
                while (recorre->sigue != NULL && recorre->sigue->dato != lower_a) {
                    recorre = recorre->sigue;
                }
                if (recorre->sigue != NULL) {
                    aux = recorre->sigue;
                    recorre->sigue = recorre->sigue->sigue;
                    free(aux);
                }
            }
        }

        verlista(inicio);
        getchar(); // Consumir el carácter de nueva línea
    }

    printf("\n\n");
    verlista(inicio);
    liblista(inicio);
    return (0);
}

void verlista(struct lista* inicio) {
    struct lista* recorre;
    recorre = inicio;
    printf("-------------------");
    while (recorre) {
        putchar(recorre->dato);
        recorre = recorre->sigue;
    }
    printf("\n");
}

void liblista(struct lista* inicio) {
    struct lista* aux;
    while (inicio) {
        aux = inicio;
        inicio = inicio->sigue;
        free(aux);
    }
}
