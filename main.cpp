#include "header.h"
#include "keeper.h"

void menu(){
    std::cout << "Select an action:\n";
    std::cout << "1 - add element\n";
    std::cout << "2 - remove element\n";
    std::cout << "3 - show elements\n";
    std::cout << "4 - change element\n";
}

int main(){
keeper<submarine> sub;
submarine s, d;
s.set();
d.set();
sub.add(s);
sub.add(d);
sub.display();

    return 0;
}
