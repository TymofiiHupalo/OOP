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
    int choose;
    cout << "Choose the operation: 1 - sum, 2 - Exit" << endl;
    cin >> choose;
    switch(choose){
        case 1: {
            vivedenya(a);
            vivedenya(b);
            cout << "Resultat mnozhenya" << endl;
            money g = mnozhenya(a, c1);
            money h = mnozhenya(b, c2);
            vivedenya(g);
            vivedenya(h);
            money result = suma(g, h);
            cout << "Result suma" << endl;
            vivedenya(result);
            break;
    }
        case 2: {
            cout << "Exit" << endl;
            break;}
        default:{
            cout << "Error" << endl;
        }
    }
    return 0;
}