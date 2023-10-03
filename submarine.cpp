#include "header.h"

submarine::submarine(){
    len = 10;
    width = 5;
    people = 5;
    time_under_water = 100;
    max_speed = 50;
    weapon_count = 10;
    std::cout << "Submarine parameters set";
}

submarine::submarine(int len_, int width_, int people_,
     int time_under_water_, int max_speed_, int weapon_count_){
        len = len_;
        width = width_;
        people = people_;
        time_under_water = time_under_water_;
        max_speed = max_speed_;
        weapon_count = weapon_count_;
        std::cout << "Submarine parameters set";
}

submarine::submarine(submarine &obj){
    len = obj.len;
    width = obj.width;
    people = obj.people;
    time_under_water = obj.time_under_water;
    max_speed = obj.max_speed;
    weapon_count = obj.weapon_count;
    std::cout << "Submarine parameters copied";
}