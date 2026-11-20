#include <iostream>
#include <memory>
#include "include/Car.h"

template<class T> //Sablonova funkcia
T minValue(T a, T b) {
    return a < b ? a : b;
}

int main() {
    std::cout << "Hello world!" << std::endl;

    Car car("Peugeot 208" , 300);
    Car *pCar = new Car("Peugeot 5008" , 230);
    auto pCar2 = std::make_shared<Car>("Peugeot 5008", 300);
    //v <> je datovy typ, vzdy sa zavola destruktor pri skonceni scope {} takze nikde nebude memmory leak -netreba delete

    //Car car2 = car;

    std::cout << "Auto:\n" << car << std::endl;

    std::cout << car[WheelPosition::FRONT_LEFT].pressure << std::endl;
    car[WheelPosition::FRONT_LEFT].pressure += 0.1;
    std::cout << car[WheelPosition::FRONT_LEFT].pressure << std::endl;


    std::cout << "\n Minimal value: " << minValue(10,20) << std::endl;
    std::cout << "\n Minimal value: " << minValue(1.9 ,1.5 ) << std::endl;
    delete pCar;
    return 0;
}

/*10% bodov z dojmu takze citatelnost kodu const... - napiseme a pojdeme si to s nim prejst
    - 2 pokusy a moze ti poslat tabulku so stylom hodnotenia - na test mame hodinu teda programovanie tried
    a vysledok budeme poznat do tyzden*/