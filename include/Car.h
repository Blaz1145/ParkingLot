//
// Created by 42194 on 20. 11. 2026.
//
#ifndef PARKINGLOT_CAR_H
#define PARKINGLOT_CAR_H
#include <string>
#include <iostream>

struct Wheel {
    float pressure;
    float threadDepth;
};

class Car { //auto znamena automaticky datovy typ
public:
    Car(const std::string &name, const float &maxSpeed);
    Car(const Car &car) = delete;
    auto operator=(const Car &car) = delete;

    float getMaxSpeed() const;
    const std::string getName() const; //preco const aj pred?


private:
    float _maxSpeed; //podtrzitko _ oznacena clenska premenna
    std::string _name;
};


std::ostream &operator<<(std::ostream &stream, const Car &car);

inline std::ostream & operator<<(std::ostream &stream, const Car &car) {
    //Co je inline?
    stream << "Name: " << car.getName() << " and max speed: " << car.getMaxSpeed();
    return stream;
}


#endif //PARKINGLOT_CAR_H
