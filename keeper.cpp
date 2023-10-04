#include "header.h"
#include "keeper.h"

template <typename C>
keeper<C>::keeper(){
    first = NULL;
    last = NULL;
    elem_count = 0;
}

template <typename C>
keeper<C>::keeper(keeper* obj){
        if (first != NULL){
            elem<C>* temp = first;
            while (temp != NULL) {
                this.add(temp->data);
                temp = temp->next;
            }
            std::cout << "Queue was copied!" << std::endl;
        }
        else{
            std::cout << "Original queue is empty!" << std::endl;
        }
}

template <typename C>
C keeper<C>::show_data(elem<C>& x){
        return x->data.get();
}

template <typename C>
void keeper<C>::add(C x){
        elem<C>* temp = new elem<C>(x);
        if (first == NULL && last == NULL){
            first = last = temp;
        }
        else {
            last->next = temp;
            last = temp;
        }
        elem_count ++;
}

template <typename C>
void keeper<C>::remove(){
        elem<C>* temp = first;
        if (first == NULL) {
            std::cout << "Queue is empty!" << std::endl;
            return;
        }
        if (first == last) {
            first = last = NULL;
            std::cout << "Element removed!" << std::endl;
        }
        else {
            first = first->next;
            std::cout << "Element removed!" << std::endl;
        }
        delete temp;
}

template <typename C>
void keeper<C>::display(){
        elem<C>* temp = first;
        if (first == NULL) {
            std::cout << "Queue is empty!" << std::endl;
            return;
        }
        else {
            while(temp->next != NULL){
                std::cout << show_data(temp) << "\n";
                temp = temp->next;
            }
            std::cout << show_data(temp);
            std::cout << std::endl;
        }
}

template class keeper<submarine>;
template class keeper<sailboat>;
template class keeper<boat>;