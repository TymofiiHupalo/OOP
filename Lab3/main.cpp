#include <iostream>
#include "Dyhotomia_class.h"
using namespace std;
int main(){
    Dyhotomia_class miy;
    miy.setVolumes(-10, -5);
    miy.setTolerance(1e-9);
    cout << "Корінь рівняння(Дихотомія): " << miy.Dyhotomia() << endl;
    cout << "Корінь рівняння(Ньютон): " << miy.Newton() << endl;
    return 0;
}