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
            std::cout << "List was copied!" << std::endl;
        }
        else{
            std::cout << "Original list is empty!" << std::endl;
        }
}

keeper::~keeper(){
    if (first == NULL) return;
    if (first == last) {
            delete first;
            delete last;
        }
    else{
        while (first != last){
            elem* temp = first;
            first = first->next;
            delete temp;
        }
        delete first;
        delete last;
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

void keeper::remove(elem* x){
        if (first == NULL) {
            std::cout << "List is empty!" << std::endl;
            return;
        }
        if (first == last) {
            elem *temp = first;
            first = last = NULL;
            delete temp;
            std::cout << "Element removed!" << std::endl;
        }
        else if(x == first){
            elem *temp = first;
            first = first->next;
            delete temp;
            std::cout << "Element removed!" << std::endl;
        }
        else if(x == last){
            elem *temp = first;
            while (temp->next != last) temp = temp->next;
            temp->next = NULL;
            delete last;
            last = temp;
            std::cout << "Element removed!" << std::endl;
        }
        else {
            elem* slow = first;
            elem* fast = first->next;
            while (fast && fast != x) {
                fast = fast->next;
                slow = slow->next;
            }
            slow->next = fast->next;
            delete fast;
        }
        elem_count --;
}

void keeper::display(){
        elem* temp = first;
        int i = 1;
        if (first == NULL) {
            std::cout << "List is empty!" << std::endl;
            return;
        }
        else {
            while(temp->next != NULL){ 
                std::cout << "Element " << i << " - ";
                (temp->data)->get();
                temp = temp->next;
                i++;
            }
            std::cout << "Element " << i << " - ";
            (temp->data)->get();
            std::cout << std::endl;
        }
}

void keeper::change(elem* x){
    ship* temp= x->data;
    temp->set();
    x->data = temp;
}

elem* keeper::operator[] (const int index) {
    if (first == NULL && last == NULL) return nullptr;
    elem* temp = first;
    for (int i = 0; i < index; i++) {
        temp = temp->next;
        if (!temp) return nullptr;
    }
    return temp;
}
