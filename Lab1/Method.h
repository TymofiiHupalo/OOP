#ifndef METHOD_H
#define METHOD_H 

struct money{
    int grivnya;
    int kopiyka;
};
money suma(struct money &a, struct money &b);
money mnozhenya(struct money &a, int b);
money zaokruglenya(struct money &a);
money vivedenya(struct money &a);
#endif