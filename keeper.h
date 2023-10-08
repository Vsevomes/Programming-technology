#include "header.h"

class elem{
    public:
        ship* data;
        elem* next;
        elem(ship& d, elem* n = NULL){
            this->data = &d;
            this->next = n;
        };
    };

class keeper{ 
public:
    int elem_count;
    elem* first;
    elem* last;
    keeper();
    keeper(keeper* obj);
    //~keeper();
    void add(ship& x);
    void remove(elem* temp);
    void display();
    void change();
    elem* operator[] (const int index);
};