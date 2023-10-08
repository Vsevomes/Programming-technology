#include "header.h"
#include "keeper.h"

int action;
int type;
int ind;

int menu();
int choose_type();

int main(){
    keeper container;
    submarine* sub;
    sailboat* sail;
    boat* bot;
    ship *p;
    menu();
    while(action != 0){
        switch(action){
            case 1:
                system("cls");
                choose_type();
                switch(type){
                    case 1:
                        system("cls");
                        sub = new submarine;
                        sub->set();
                        p = sub;
                        container.add(*p);
                        break;
                    case 2:
                        system("cls");
                        sail = new sailboat;
                        sail->set();
                        p = sail;
                        container.add(*p);
                        break;
                    case 3:
                        system("cls");
                        bot = new boat;
                        bot->set();
                        p = bot;
                        container.add(*p);
                        break;
                    default:
                        std::cout << "Wrong type\n";
                        break;    
                }
                system("pause");
                system("cls");
                menu();
                break;
            case 2:
                system("cls");
                std::cout << "Insert number of element which you wnat to delete: ";
                std::cin >> ind;
                if (ind <= container.elem_count)
                    container.remove(container[ind - 1]);
                else
                    std::cout << "Number is outside the list\n";
                system("pause");
                system("cls");
                menu();
                break;
            case 3:
                system("cls");
                container.display();
                system("pause");
                system("cls");
                menu();
                break;
            case 4:
                system("cls");
                std::cout << "Insert number of element which you wnat to change: ";
                std::cin >> ind;
                if (ind <= container.elem_count)
                    container.change(container[ind - 1]);
                else
                    std::cout << "Number is outside the list\n";
                system("pause");
                system("cls");
                menu();
                break;
            default:
                system("cls");
                std::cout << "Wrong command\n";
                system("pause");
                system("cls");
                menu();
                break;
        }
    }

    return 0;
}

int menu(){
    std::cout << "Select an action:\n";
    std::cout << "1 - add element\n";
    std::cout << "2 - remove element\n";
    std::cout << "3 - show elements\n";
    std::cout << "4 - change element\n";
    std::cout << "0 - exit\n";
    std::cin >> action;
    return action;
}

int choose_type(){
    std::cout << "Select a type:\n";
    std::cout << "1 - submarine\n";
    std::cout << "2 - sailboat\n";
    std::cout << "3 - boat\n";
    std::cin >> type;
    return type;
}