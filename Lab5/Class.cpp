#include <iostream>
class Food
{
std::string calories;
int time_to_cook;
std::string *steps;
int number_of_steps;
void build ()
{
std::cout << "Створено їжу:\n" << calories << "\n" << time_to_cook << " хвилин приготування" << "\nкроки: \n" ;
for (int i = 0; i < number_of_steps; ++i)  std::cout << steps[i] << "\n";
};
void destroy ()
{
std::cout << "Знищено їжу:\n" << calories << "\n" << time_to_cook << " хвилин приготування" << "\nкроки: \n" ;
for (int i = 0; i < number_of_steps; ++i)  std::cout << steps[i] << "\n";
};
public:
Food()
{
calories = "калорійність 1000 ";
time_to_cook = 10;
number_of_steps = 5;
steps = new std::string [number_of_steps];
steps[0] = "Взяти 5 яєць ";
steps[1] = "Розігріти сковорідку з олією ";
steps[2] = "Вибити на сковорідку 5 яєць";
steps[3] = "Посмажити";
steps[4] = "Викласти на тарілку";

build();
};
~Food()
{

destroy();
delete[] steps;
};
};

class Meat : virtual  public Food 
{
int frying_time;
public:
Meat()
{
frying_time = 15;
std::cout << "добавлено м'ясо з часом смажіння " << frying_time << "\n";

};
~Meat()
{
std::cout << "видалено м'ясо з часом смажіння " << frying_time << "\n";

};
};

class Vegetables : virtual public Food
{
std::string slice_type;
public:
Vegetables()
{
slice_type = "дрібно, кубиками";
std::cout << "добавлено овочі які нарізані: " << slice_type << "\n";

};
~Vegetables()
{
std::cout << "видалено овочі які нарізані: " << slice_type << "\n";

};
};

class Dish : Meat, Vegetables
{
public:
    Dish()
    {
        std::cout << "Зготували їжу\n";
    };
    ~Dish(){
        std::cout << "Їжу з'їли :\n";
    };
};

int main() {
Dish beast;
std::cout << "Їжа приготована!)\n\n";
}