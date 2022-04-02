/* SimplePOO.cpp : Este archivo contiene la función "main".
La ejecución del programa comienza y termina ahí.*/


#include <iostream>


#include "Shape.h"
#include "Square.h"
#include "SquareHole.h"
#include "Triangle.h"
#include "EquiTriangle.h"
#include "Rectangle.h"
#include "Canva.h"
#include "Menu.h"



int main() {

    Menu* m = nullptr;
    Canva c;
     

    std::cout << "Angel Ivan Enriquez Rodriguez" << std::endl;
    std::cout << "Registro: 21310399 Grupo: 2P" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "\t\tBienvenido" << std::endl;
    std::cout << "\t\tPrograma con el tema de Polimorfismo" << std::endl;

    
    m->imprimirMenu();
    m->mostrarMenu();

    if (m!= nullptr)
    {
        c.printShape(m);
        delete m;
    }

    std::cout << "---------------------------------" << std::endl;

    return 1;
}