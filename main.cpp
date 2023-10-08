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
    submarine sub;
    sailboat sail;
    boat boat;
    ship *pSub = &sub;
    ship *pSail = &sail;
    ship *pBoat = &boat;
    keeper obj;
    pSub->set();
    pSail->set();
    pBoat->set();
    obj.add(*pSub);
    obj.add(*pSail);
    obj.add(*pBoat);
    obj.display();


    return 0;
}
