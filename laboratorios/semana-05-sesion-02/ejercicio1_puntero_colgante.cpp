#include <iostream>


// TODO: predice antes de compilar. ¿que advertencia esperas que de
// el compilador sobre esta funcion? una advertencia sobre la memoria stack
int* obtenerLecturaInsegura(int valorSensor) {
    int lectura = valorSensor * 2;
    return &lectura;
}

int main() {
    int* resultado = obtenerLecturaInsegura(10);
    std::cout << "Lectura (puntero colgante): " << *resultado << std::endl;
    std::cout<<std::endl;
    return 0;
}
