//
// Created by Porfirio Chávez González on 28/06/22.
//

#ifndef PRACTICA01_PRACTICA05_H
#define PRACTICA01_PRACTICA05_H

#include <iostream>

int globalVal;

int showVars(){
    float localVar;

    localVar = 12.5;
    ::globalVal = 4;

    std::cout << "Variable global: " << globalVal << std::endl;
    std::cout << "Variable local: " << localVar << std::endl;
}

#endif //PRACTICA01_PRACTICA05_H
