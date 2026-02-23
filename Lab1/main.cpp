#include <iostream>
#include "Method.h"
#include <fstream>
using namespace std;

int main()
{
    ifstream file("D:\\all labs\\OOP\\Lab1\\Lab1.txt");
    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    money a, b;
    int c1, c2;
    file >> a.grivnya >> a.kopiyka >> c1;
    file >> b.grivnya >> b.kopiyka >> c2;
    file.close();
    money result = suma(a, b);
    money result1 = mnozhenya(a, c1); 
    money result2 = mnozhenya(b, c2);
    
    //money result3 = zaokruglenya(result1);
    
    vivedenya(result);
    vivedenya(result1);
    vivedenya(result2);
    //vivedenya(result3);

    return 0;
}