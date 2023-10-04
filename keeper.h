#include "header.h"

template <typename C>
class elem{
    public:
        C* data;
        elem<C>* next;
        elem(C d, elem<C>* n = NULL){
            this->data = &d;
            this->next = n;
        };
    };

template <typename C>
class keeper{
    int elem_count;
public:
    elem<C>* first;
    elem<C>* last;
    keeper();
    keeper(keeper* obj);
    void add(C& x);
    void remove();
    void display();
    void change();
};