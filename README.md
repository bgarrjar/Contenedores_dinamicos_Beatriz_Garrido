# Instrucciones del ejercicio:

La instalación de la libreria boost es mucho más fácil y sencilla dede linux, por lo que lo he hecho desde Ubuntu. Por esta razón, si se compila el programa dede CLion este dara error. Hay que hacerlo desde ubuntu para que el programa compile correctamente con esa libreria instalada. 

1. Abrimos el Ubuntu y traemos el repositorio de nuestro GitHub a nuestra máquina con el comando: git clone https://github.com/bgarrjar/Contenedores_dinamicos_Beatriz_Garrido.git

2. Actualizamos los paquetes de nuestro Linux con sudo apt update y posteriormente instalamos la librería de boost con sudo apt install libboost-all-dev. Si es necesario instalamos el compilador con el comando: sudo apt install g++

3. Una vez ya creado, entramos al directorio y compilamos todos los archivos cpp que hay en nuestro programa para crear el ejecutable con el comando: g++ -o programa main.cpp ./ejercicio1/Ejercicio1.cpp ./ejercicio2/Ejercicio2.cpp ./ejercicio3/Ejercicio3.cpp ./ejercicio4/Ejercicio4.cpp ./ejercicio5/Ejercicio5.cpp ./ejercicio6/Ejercicio6.cpp

4. Finalmente se nos creará un archivo llamado programa de tipo ejecutable. Para ejecutarlo colocamos ./programa y ya se ejecutara nuestro programa correctamente.

# Contenedores_dinamicos_Beatriz_Garrido

https://github.com/bgarrjar/Contenedores_dinamicos_Beatriz_Garrido.git

## Enunciado

**Ejercicio 1: Vector e Iteradores:** Crea un programa que añada elementos a un vector de enteros mediante el uso del método push_back. Luego, utiliza un iterador para recorrer y mostrar cada elemento del vector.

**Ejercicio 2: Contenedores Estándar y Secuencias:** Realiza un programa que utilice el contenedor estándar list para almacenar una secuencia de números decimales. Luego, crea un adaptador de secuencia stack para este contenedor. Muestra cómo funcionan las operaciones push, pop y top en esta pila.

**Ejercicio 3: Algoritmos:** Crea un programa que tenga un vector de enteros. Luego, utiliza la función sort de la biblioteca de algoritmos para ordenar los elementos del vector. Además, utiliza la función max_element para encontrar el elemento más grande del vector.

**Ejercicio 4: Cálculo numérico:** Desarrolla un programa que utilice la clase valarray para realizar operaciones matemáticas. Crea un valarray de números decimales e implementa operaciones como la suma, la resta, la multiplicación y la división.

**Ejercicio 5: C++ Moderno:** Implementa un programa que utilice expresiones lambda para definir una función que devuelva el cuadrado de un número. Adicionalmente, utiliza la inferencia de tipos auto para declarar variables. Implementa un bucle for_each para recorrer un contenedor y usa punteros inteligentes para gestionar la memoria.

**Ejercicio 6: Introducción a Boost:** Instala la biblioteca Boost en tu entorno de desarrollo CLion. Luego, crea un programa que utilice la función boost::lexical_cast para convertir una cadena de caracteres en un número entero. Asegúrate de manejar cualquier posible excepción que pueda lanzar boost::lexical_cast.

## Propuesta de Solución

a continuación, se muestra una guía paso a paso de cómo podrías resolver estos ejercicios en CLion:

### Ejercicio 1: Vector e Iteradores

    #include <iostream>
    #include <vector>
    
    int main() {
        std::vector<int> numeros = {10, 20, 30, 40, 50};
    
        for(std::vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
            std::cout << *it << std::endl;
        }
    
        return 0;
    }
    
### Ejercicio 2: Contenedores Estándar y Secuencias

    #include <iostream>
    #include <list>
    #include <stack>
    
    int main() {
        std::list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
        std::stack<float, std::list<float>> pila(lista);
    
        while(!pila.empty()) {
            std::cout << pila.top() << std::endl;
            pila.pop();
        }
    
        return 0;
    }
    
### Ejercicio 3: Algoritmos

    #include <iostream>
    #include <vector>
    #include <algorithm>
    
    int main() {
        std::vector<int> numeros = {50, 20, 60, 10, 30, 40};
        std::sort(numeros.begin(), numeros.end());
    
        for(int num : numeros) {
            std::cout << num << std::endl;
        }
    
        int maxNum = *std::max_element(numeros.begin(), numeros.end());
        std::cout << "Número máximo: " << maxNum << std::endl;
    
        return 0;
    }
    
### Ejercicio 4: Cálculo numérico

    #include <iostream>
    #include <valarray>
    
    int main() {
        std::valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};
    
        std::cout << "Suma: " << valores.sum() << std::endl;
        std::cout << "Media: " << valores.sum() / valores.size() << std::endl;
    
        valores += 5.0;
    
        std::cout << "Valores + 5.0: ";
        for(double valor : valores) {
            std::cout << valor << " ";
        }
        std::cout << std::endl;
    
        return 0;
    }
    
### Ejercicio 5: C++ Moderno

    #include <iostream>
    #include <vector>
    #include <memory>
    
    int main() {
        auto cuadrado = [](int num) { return num * num; };
    
        std::cout << "Cuadrado de 5: " << cuadrado(5) << std::endl;
    
        std::vector<int> numeros = {1, 2, 3, 4, 5};
        std::for_each(numeros.begin(), numeros.end(), [](int num) {
            std::cout << num << std::endl;
        });
    
        std::shared_ptr<int> ptr(new int(10));
        std::cout << "Valor apuntado por ptr: " << *ptr << std::endl;
    
        return 0;
    }
    
### Ejercicio 6: Introducción a Boost

    #include <iostream>
    #include <boost/lexical_cast.hpp>
    
    int main() {
        std::string s = "12345";
    
        try {
            int i = boost::lexical_cast<int>(s);
            std::cout << "Número: " << i << std::endl;
        } catch(boost::bad_lexical_cast &e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    
        return 0;
    }
    
Cada uno de estos códigos debe ser pegado en la función main() de tu programa en CLion. Asegúrate de tener las librerías necesarias instaladas y correctamente configuradas en tu entorno de CLion. También recuerda que para el último ejercicio necesitas tener instalada la biblioteca Boost.

## Referencias

Chat GPT
