//
// Created by trici on 19/12/2024.
//

#include "Ejercicio1.h"
#include <iostream>
#include <vector>

void manejarVector() {
    std::vector<int> numeros = {10, 20, 30, 40, 50};

    for(std::vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << std::endl;
    }
}
