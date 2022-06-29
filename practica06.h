//
// Created by Porfirio Chávez González on 28/06/22.
//

#ifndef PRACTICA01_PRACTICA06_H
#define PRACTICA01_PRACTICA06_H

#include <iostream>

int stringArrays(){
    int evals[2];
    int i = 0;
    int eof;

    std::cout << "Introduzca calificaciones (1-10) y presione \"Enter\" para terminar" << std::endl;
    do  {
        std::cout << "Calificacion " << i + 1 << ": " << std::endl;
        std::cin >> evals[i];
        i++;
        eof = std::cin.eof();
        if(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(128, '\n');
        }
    } while (!eof && !std::cin.bad() && i < 3);

    for(int counter = 0; counter < i; counter++) {
        std::cout << "Registrada " << counter + 1 << ": " << evals[counter] << std::endl;
    }

    return 0;
}
#endif //PRACTICA01_PRACTICA06_H
