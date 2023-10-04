#include "header.h"

template <typename C>
class keeper{
    template <typename C>
    class elem{
    public:
        C data;
        elem<C>* next;
        elem(C d, elem<C>* next = NULL){
            this->data = &d;
            this->next = next;
        };
    };
    int elem_count;
public:
    elem<C>* first;
    elem<C>* last;
    keeper();
    keeper(keeper* obj);
    C show_data(elem<C>& x);
    void add(C x);
    void remove();
    void display();
    void change();
};