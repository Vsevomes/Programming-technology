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

    int upload;
    std::cout << "Do you want to upload list from file?\n";
    std::cout << "1 - yes\n";
    std::cout << "2 - no\n";
    std::cin >> upload;
    if (upload == 1){
        system("cls");
        std::ifstream in("param.txt");
        container.read(in, p, sub, sail, bot);
        in.close();
    }
    system("cls");

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
                try{
                    if (ind <= container.elem_count)
                        container.remove(container[ind - 1]);
                    else
                        throw std::string{"Number is outside the list\n"};
                }
                catch(std::string mes){
                    std::cout << mes;
                }
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
                try{
                    if (ind <= container.elem_count) 
                        container.change(container[ind - 1]);
                    else
                        throw std::string{"Number is outside the list\n"};
                }
                catch(std::string mes){
                    std::cout << mes;
                }
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

    system("cls");
    int save;
    std::cout << "Do you want to save list in file?\n";
    std::cout << "1 - yes\n";
    std::cout << "2 - no\n";
    std::cin >> save;
    if (save == 1){
        std::ofstream out("param.txt", std::ios_base::app);
        container.write(out);
        out.close();
        system("cls");
    }
    else{
        system("cls");
        return 0;
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