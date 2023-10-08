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
    int elem_count;
public:
    elem* first;
    elem* last;
    keeper();
    keeper(keeper* obj);
    void add(ship& x);
    void remove();
    void display();
    void change();
};