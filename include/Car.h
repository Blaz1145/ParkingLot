//
// Created by 42194 on 20. 11. 2026.
//
#ifndef PARKINGLOT_CAR_H
#define PARKINGLOT_CAR_H
#include <string>

class Car { //auto znamena automaticky datovy typ
public:
    Car(const std::string &name, const float &maxSpeed);
    Car(const Car &car) = delete;
    auto operator=(const Car &car) = delete;


private:
    float _maxSpeed;
    std::string _name;
};


#endif //PARKINGLOT_CAR_H