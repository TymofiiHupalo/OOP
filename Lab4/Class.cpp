#include "Class.h"
#include <iostream>
int Car::SetVolume (double volume_type){
        this->volume = volume_type;
        return 1;};

int Car::SetDoors (int number_of_doors)
        {
        this->doors = number_of_doors;
        return 1;
        };

int Car::SetMaxSpeed (int speed)
        {
        this->max_speed = speed;
        return 1;
        };
int Car::SetName (std::string car_name)
        {
        this->name = car_name;
        return 1;
        };
int Car::Say(){
        std::cout << "Це автомобіль: " << name << ". \n";
        return 1;
    }
int Car::CreateCar()
    {
    std::cout << "Має " << doors << " дверей та двигун об'ємом " << volume << " літри. \n Максимальна швидкість: " << max_speed << " км/год. \n";
    return 1;
    };

V8::V8()
        {
        int e = SetDoors(4);
        e = SetVolume(5.0);
        e = SetMaxSpeed(240);
        e = CreateCar();
        e = SetName("Mustang GT");
        e = Say();
        };
        
V12::V12()
        {
        int e = SetDoors(4);
        e = SetVolume(3.0);
        e = SetMaxSpeed(350);
        e = CreateCar();
        e = SetName("Ferrari F8");
        e = Say();
        };

int Kompressor_V8::SetBar (double kompressor_bar)
        {
        this->bar = kompressor_bar;
        return 1;
        };

Kompressor_V8::Kompressor_V8 (double kompressor_bar)
        {
        int e =  SetBar (kompressor_bar);
        }
        Kompressor_V8::Kompressor_V8(){};


int Turbo_V8::SetTypeFuel (std::string fuel)
        {
        this->type_fuel = fuel;
        return 1;
        };

Turbo_V8::Turbo_V8 (double kompressor_bar, std::string fuel)
        {  
        int e =  SetBar (kompressor_bar);
        e =  SetTypeFuel (fuel);
        std::cout << "Це турбований V8 з тиском " << bar << " бар та використовує " << type_fuel << " як паливо. \n";
        };

