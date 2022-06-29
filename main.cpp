#include <iostream>
#include "menu.h"

int main() {
    std::cout << "+-----------------------------------------------------+" << std::endl;
    std::cout << "|                  [-[  ZX-studio  ]-]                |" << std::endl;
    std::cout << "+-----------------------------------------------------+" << std::endl;
    std::cout << "+=====================================================+" << std::endl;
    std::cout << "| Nombre Código:                 Número Código:       |" << std::endl;
    std::cout << "|        XF1R10                     011830035         |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "| Nombre:                        Edad:                |" << std::endl;
    std::cout << "|  Porfirio Chávez González        17 años            |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "| Ocupación:                                          |" << std::endl;
    std::cout << "|    Webmaster - Estudiante - Designer                |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "| Colegio:                                            |" << std::endl;
    std::cout << "|    Conalep Plantel Atizapán 1                       |" << std::endl;
    std::cout << "|                                                     |" << std::endl;
    std::cout << "| Carrera:                                            |" << std::endl;
    std::cout << "|    Profesional Técnico en Informática               |" << std::endl;
    std::cout << "+-----------------------------------------------------+" << std::endl;
    std::cout << "\n\n Presiona una tecla para continuar" << std::endl;
    std::cin.get();
    system("clear");
    menu();
    return 0;
}
