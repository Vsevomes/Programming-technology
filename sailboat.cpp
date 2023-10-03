#include "header.h"

sailboat::sailboat(){
    sailboat_type = 1;
    name = "unknown";
    type = 1;
    len = 20;
    speed = 50;
    people = 5;
    std::cout << "Sailboat parameters set";
}

sailboat::sailboat(int sailboat_type_, std::string name_, int type_,
    int len_, int speed_, int people_){
        sailboat_type = sailboat_type_;
        name = name_;
        type = type_;
        len = len_;
        speed = speed_;
        people = people_;
        std::cout << "Sailboat parameters set";
}

sailboat::sailboat(sailboat &obj){
    sailboat_type = obj.sailboat_type;
    name = obj.name;
    type = obj.type;
    len = obj.len;
    speed = obj.speed;
    people = obj.people;
    std::cout << "Sailboat parameters copied";
}