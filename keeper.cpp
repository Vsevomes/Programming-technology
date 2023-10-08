#include "header.h"
#include "keeper.h"

keeper::keeper(){
    first = NULL;
    last = NULL;
    elem_count = 0;
}

keeper::keeper(keeper* obj){
        if (obj->first != NULL){
            elem* temp = obj->first;
            while (temp != NULL) {
                this->add(*(temp->data));
                temp = temp->next;
            }
            std::cout << "Queue was copied!" << std::endl;
        }
        else{
            std::cout << "Original queue is empty!" << std::endl;
        }
}

void keeper::add(ship& x){
        elem* temp = new elem(x);
        if (first == NULL && last == NULL){
            first = last = temp;
            first->data=last->data=&x;
        }
        else {
            last->next = temp;
            last = temp;
            last->data=&x;
        }
        elem_count ++;
}

void keeper::remove(){
        elem* temp = first;
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

void keeper::display(){
        elem* temp = first;
        if (first == NULL) {
            std::cout << "Queue is empty!" << std::endl;
            return;
        }
        else {
            while(temp->next != NULL){ 
                (temp->data)->get();
                temp = temp->next;
            }
            (temp->data)->get();
            std::cout << std::endl;
        }
}
