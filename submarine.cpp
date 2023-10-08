#include "header.h"

submarine::submarine(){
    len = 10;
    width = 5;
    people = 5;
    time_under_water = 100;
    max_speed = 50;
    weapon_count = 10;
    std::cout << "Submarine parameters set\n";
}

submarine::submarine(int len_, int width_, int people_,
     int time_under_water_, int max_speed_, int weapon_count_){
        len = len_;
        width = width_;
        people = people_;
        time_under_water = time_under_water_;
        max_speed = max_speed_;
        weapon_count = weapon_count_;
        std::cout << "Submarine parameters set\n";
}

submarine::submarine(submarine &obj){
    len = obj.len;
    width = obj.width;
    people = obj.people;
    time_under_water = obj.time_under_water;
    max_speed = obj.max_speed;
    weapon_count = obj.weapon_count;
    std::cout << "Submarine parameters copied\n";
}

void submarine::set(){
    std::cout << "Enter value:\n";
    std::cout << "length = ";
    std::cin >> _len; len = _len;
    std::cout << "width = ";
    std::cin >> _width; width = _width;
    std::cout << "people = ";
    std::cin >> _people; people = _people;
    std::cout << "time under water = ";
    std::cin >> _time_under_water; time_under_water = _time_under_water;
    std::cout << "max speed = ";
    std::cin >> _max_speed; max_speed = _max_speed;
    std::cout << "weapon count = ";
    std::cin >> _weapon_count; weapon_count = _weapon_count;
    std::cout << std::endl;
}

void submarine::set(std::ifstream &f){
    f >> len;
    f >> width;
    f >> people;
    f >> time_under_water;
    f >> max_speed;
    f >> weapon_count;
}

void submarine::get(){
    std::cout << "Submarine\n";
    std::cout << "Parameters\n";
    std::cout << "length: " << len << std::endl;
    std::cout << "width: " << width << std::endl;
    std::cout << "people: " << people << std::endl;
    std::cout << "time under water: " << time_under_water << std::endl;
    std::cout << "max speed: " << max_speed << std::endl;
    std::cout << "weapon count: " << weapon_count << std::endl;
    std::cout << std::endl;
}

void submarine::get(std::ofstream &f){
    f << "sub" << std::endl;
    f << len << std::endl;
    f << width << std::endl;
    f << people << std::endl;
    f << time_under_water << std::endl;
    f << max_speed << std::endl;
    f << weapon_count << std::endl;
}
