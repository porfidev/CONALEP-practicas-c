//
// Created by Porfirio Chávez González on 28/06/22.
//

#ifndef PRACTICA01_PRACTICA04_H
#define PRACTICA01_PRACTICA04_H

#include <iostream>
#include <string>

const int maxLength = 255;

class CustomString {
    char str[maxLength];
    unsigned long length;

public:
    void assign(const char*assignStr) {
        strcpy(str, assignStr);
        length = strlen(assignStr);
    }

    unsigned long getLength(){
        return (length);
    }

    void print(){
        std::cout << "Cadena: " << str << std::endl;
        std::cout << "Cantidad de caracteres: " << length << std::endl;
    }
};

int testClass() {
    CustomString customStr{};
    customStr.assign("anita lava la tina");
    customStr.print();
    return 0;
}
#endif //PRACTICA01_PRACTICA04_H
