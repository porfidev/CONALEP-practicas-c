//
// Created by Porfirio Chávez González on 28/06/22.
//

#ifndef PRACTICA01_MENU_H
#define PRACTICA01_MENU_H

#include <iostream>
#include "practica02.h"
#include "pressToContinue.h"
#include "practica03.h"
#include "practica04.h"
#include "practica05.h"
#include "practica06.h"
#include "practica07.h"
#include <limits>

void printMenu() {
    std::cout << "+-----------------------------------------------------+" << std::endl;
    std::cout << "|                  [-[    Menu    ]-]                 |" << std::endl;
    std::cout << "+-----------------------------------------------------+" << std::endl;
    std::cout << "1. Saludo" << std::endl;
    std::cout << "2. Constantes básicas" << std::endl;
    std::cout << "3. Uso de clases básicas" << std::endl;
    std::cout << "4. Variables locales y globales" << std::endl;
    std::cout << "5. Arreglos" << std::endl;
    std::cout << "6. Uso de Enumeradores" << std::endl;
}

std::string askToContinue() {
    std::string res;
    std::cout << "\n\n\t¿Regresar al menu? [s/n]\a\t" << std::endl;
    std::cin >> res;
    return res;
}

int menu() {
    int selectedOption;
    std::string confirmContinue;

    do {
        printMenu();
        std::cout << "Selecciona una opción [1-4]:" << std::endl;
        std::cin >> selectedOption;
        switch (selectedOption) {
            case 1:
                askName();
                break;
            case 2:
                basicConstants();
                break;
            case 3:
                testClass();
                break;
            case 4:
                showVars();
                break;
            case 5:
                stringArrays();
                break;
            case 6:
                printEnum();
                break;
            default: std::cout << "Opción inválida" << std::endl;
                break;
        }
        confirmContinue = askToContinue();
    } while (confirmContinue == "S" || confirmContinue == "s");
    return 0;
}

#endif //PRACTICA01_MENU_H
