#include "Lab2.h"
#include <cmath>    
#include <iostream>

using namespace std;

int vectordobutok(Point A, Point B, Point C, Point D){
    int result1,result2,result3;
    result1 = (B.x - A.x)*(D.y - A.y) - (B.y - A.y)*(D.x - A.x);
    result2 = (C.x - B.x)*(D.y - B.y) - (C.y - B.y)*(D.x - B.x);
    result3 = (A.x - C.x)*(D.y - C.y) - (A.y - C.y)*(D.x - C.x);
    if(result1 > 0 && result2 > 0 && result3 > 0){
        cout <<"Точка всередині трикутника"<<endl;
        return 1;
    }
    else if(result1 == 0 || result2 == 0 || result3 == 0){
        cout <<"Точка на межі трикутника"<<endl;
        return 0;
    }
    else{
        cout <<"Точка поза межами трикутника"<<endl;
        return -1;
    }
}

double Dovzhina(Point A, Point B){
    return sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
}
double S(Point A, Point B, Point C){
    double p = (Dovzhina(A, B) + Dovzhina(B, C) + Dovzhina(C, A)) / 2;
    return fabs((p*(p-Dovzhina(A, B))*(p-Dovzhina(B, C))*(p-Dovzhina(C, A))));
}