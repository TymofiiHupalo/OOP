#include <iostream>
#include "Dyhotomia_class.h"
using namespace std;
int main(){
    Dyhotomia_class miy;
    miy.setVolumes(0.5, 1.5);
    miy.setTolerance(1e-40);
    cout << "Корінь рівняння(Дихотомія): " << miy.Dyhotomia() << endl;
    cout << "Корінь рівняння(Ньютон): " << miy.Newton() << endl;
    return 0;
}