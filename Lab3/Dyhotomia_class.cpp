#include "Dyhotomia_class.h"
#include <cmath>
#include <iostream>
using namespace std;

Dyhotomia_class::Dyhotomia_class() {}
Dyhotomia_class::~Dyhotomia_class() {}
    
void Dyhotomia_class::setVolumes (double vol_a, double vol_b)
{
    this->a = vol_a;
    this->b = vol_b;
}
void Dyhotomia_class::setTolerance (double vol_eps)
{
    this->eps = vol_eps;
}

double Dyhotomia_class::f(double x)
{
    double znamenik = (3 - sin(3.6*x));
    if (fabs(znamenik) < 1e-9) {
        cout << "Ділення на нуль" << endl;
        return 0;
    }
    else{
        return (x-1)/znamenik;
    }
}
double Dyhotomia_class::poxidna(double x)
{
    double deltax = 1e-9;
    if (fabs(x) < 1e-9) {
        cout << "Error" << endl;
        return 0;
    }
    return (f(x + deltax) - f(x)) / deltax;
}
double Dyhotomia_class::Dyhotomia()
    {
        if(eps < 1e-15 || eps == 0){
            cout << "Поганий eps" << endl;
            return 0;
        }
        if(f(a)*f(b) > 0)
        {
            cout << "Немає розв'язку на проміжку" << endl;
            return 0;
        }
        else{
            while(fabs(b - a) > eps){
                double c = (a + b) / 2;
                if(f(a)*f(c) <= 0){
                    b = c;
                    }
                else{
                    a = c;
                }
            }
        }
        x = (a + b) / 2;
        return x;
    
}
double Dyhotomia_class::Newton()
{
    if(eps < 1e-15 || eps == 0){
        cout << "Поганий eps" << endl;
        return 0;
    }
    x = (a + b) / 2;
    if (f(a)*f(b) > 0) {
        cout << "Немає розв'язку на проміжку" << endl;
        return 0;
    }
    while (true){
        if (fabs(poxidna(x)) < 1e-9){
            cout << "Error" << endl;
            break;
        }
        double xnew = x - (f(x)/ poxidna(x));
        if (fabs(xnew - x) < eps){
            break;
        }
        x = xnew;
    }
    return x;
}