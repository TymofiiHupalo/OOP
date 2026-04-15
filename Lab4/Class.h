
#include <string>
class Car
{
    double volume;
    int doors;
    int max_speed;
    std::string name;

public:
    int SetVolume (double volume_type);
    int SetDoors (int number_of_doors);
    int SetMaxSpeed (int speed);
    int SetName (std::string car_name);
    int Say();
protected:
    int CreateCar();
    };
class V8 : virtual Car
{
public:
    V8();};

class V12 : virtual Car
{
public:
    V12();};

class Kompressor_V8 : virtual V8
{
protected:
    double bar;

public:
    int SetBar (double kompressor_bar);
    Kompressor_V8 (double kompressor_bar);
    Kompressor_V8();
};
class Turbo_V8: virtual Kompressor_V8
{
    std::string type_fuel;

public:
    int SetTypeFuel (std::string fuel);
    Turbo_V8 (double kompressor_bar, std::string fuel);
};