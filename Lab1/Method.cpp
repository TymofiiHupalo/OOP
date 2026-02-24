#include "Method.h"
#include <iostream>
using namespace std;

money suma(money &a, money &b){
    money cina;
    cina.grivnya = a.grivnya + b.grivnya;
    cina.kopiyka = a.kopiyka + b.kopiyka;
    if(cina.kopiyka >= 100){
        cina.grivnya += cina.kopiyka / 100;
        cina.kopiyka %= 100;
    }
    return cina;
}
money mnozhenya(money &a, int b){
    money cina;
    if(b >= 0){
        cina.grivnya = a.grivnya * b;
        cina.kopiyka = a.kopiyka * b;
        if(cina.kopiyka >= 100){
        cina.grivnya += cina.kopiyka / 100;
        cina.kopiyka %= 100;
    }
}
    else{
        cout << "Eror" << endl;
    }
    return cina;
}
money zaokruglenya(money &a){
    if (a.kopiyka >= 50){   
        a.grivnya += 1;
        a.kopiyka = 0;}
    else{
        a.kopiyka = 0;
    }
    return a;
}
money vivedenya(money &a){
    cout << a.grivnya << " grivnya and " << a.kopiyka << " kopiyka." << endl;
    return a;
}