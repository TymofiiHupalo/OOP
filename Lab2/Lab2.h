#ifndef LAB2_H
#define LAB2_H
#include <cmath>
struct Point {
    double x;
    double y;
};
int perevirka(Point A, Point B, Point C);
struct Triangle {
    Point A, B, C;
    double area() const;
    int contains(const Point &D) const{
        Triangle T1 = {A, B, D};
        Triangle T2 = {B, C, D};
        Triangle T3 = {C, A, D};
        double S_main = area();
        double S_sum = T1.area() + T2.area() + T3.area();
        if(perevirka(A, B, D) == 1 || perevirka(B, C, D) == 1 || perevirka(C, A, D) == 1){
            return 2;}
        else if(fabs(S_main - S_sum) < 1e-9){
            return 1;}
        else{
            return 0;
        }
    }
};
double heronArea(const Triangle &t);
int vectordobutok(Point A, Point B, Point C, Point D);
double Dovzhina(Point A, Point B);
double S(Point A, Point B, Point C);

#endif