//
// Created by Porfirio Chávez González on 28/06/22.
//

#ifndef PRACTICA01_PRACTICA07_H
#define PRACTICA01_PRACTICA07_H

#include <iostream>
#include <string>

enum dataType { caracter, real, entero, cadena };

void wacha(void*, dataType);

void printEnum(){
    char a = 'z';
    int b = 5;
    double c = 4.2;
    char*d = "Es hora del duelo";

    wacha(&a, caracter);
    wacha(&b, entero);
    wacha(&c, real);
    wacha(&d, cadena);
}

void wacha(void*variable, dataType dato) {
    switch (dato) {
        case caracter:
            printf("Tipo Caracter: %c \n\n", *(char*)variable);
            break;
        case entero:
            printf("Tipo Entero: %d \n\n", *(int*)variable);
            break;
        case real:
            printf("Tipo Real: %f \n\n", *(double*)variable);
            break;
        case cadena:
            printf("Tipo cadena (bugged): %c \n\n", *(char*)variable); // TODO: this not print entire string
            break;
        default:
            printf("Tipo de dato inválido");
            break;
    }
}

#endif //PRACTICA01_PRACTICA07_H
