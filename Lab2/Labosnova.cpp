#include "Lab2.cpp"
#include <iostream>
using namespace std;
    
int main(){
    int n;
    Point A, B, C, D;
    cout <<"Введіть координати точки A (x y): ";
    cin >> A.x >> A.y;
    cout <<"Введіть координати точки B (x y): ";
    cin >> B.x >> B.y;
    cout <<"Введіть координати точки C (x y): ";
    cin >> C.x >> C.y;
    if (S(A, B, C) == 0) {
        cout << "Трикутник вироджений" << endl;
        return 0;
    }
    cout <<"Введіть кількість точок: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout <<"Введіть координати точки " << i+1 << "(x y): ";
        cin >> D.x >> D.y;
        vectordobutok(A, B, C, D);
        cout << endl;
    }

}