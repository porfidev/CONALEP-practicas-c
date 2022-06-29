//
// Created by Porfirio Chávez González on 28/06/22.
//

#ifndef PRACTICA01_PRACTICA02_H
#define PRACTICA01_PRACTICA02_H

#include <iostream>
#include "pressToContinue.h"
#include "menu.h"

char name[80];
char response;

void doQuestion() {
    std::cout << "¿Te gusta el Ramen? [s/n]\a\t" << std::endl;
    std::cin >> response;
}

int askName() {
    std::cout << "¿Cual es tu nombre?\a\t" << std::endl;
    std::cin >> name;
    std::cout << "Mucho gusto \""<<name<<"\" soy Porfirio\a" << std::endl;

    doQuestion();
    switch (response) {
        case 's':
        case 'S':
            printf("Obviamente tienes buen gusto :)");
            break;
        case 'n':
        case 'N':
            printf("Solo lo dices para molestarme :(");
            break;
        default: std::cout << "Opción inválida." << std::endl;
            break;
    }
    return 0;
}

#endif //PRACTICA01_PRACTICA02_H
