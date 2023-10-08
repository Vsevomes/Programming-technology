#include "header.h"

sailboat::sailboat(){
    sailboat_type = 1;
    name = "unknown";
    type = 1;
    len = 20;
    speed = 50;
    people = 5;
    std::cout << "Sailboat parameters set\n";
}

sailboat::sailboat(int sailboat_type_, std::string name_, int type_,
    int len_, int speed_, int people_){
        sailboat_type = sailboat_type_;
        name = name_;
        type = type_;
        len = len_;
        speed = speed_;
        people = people_;
        std::cout << "Sailboat parameters set\n";
}

sailboat::sailboat(sailboat &obj){
    sailboat_type = obj.sailboat_type;
    name = obj.name;
    type = obj.type;
    len = obj.len;
    speed = obj.speed;
    people = obj.people;
    std::cout << "Sailboat parameters copied\n";
}

void sailboat::set(){
    std::cout << "Enter value:\n";
    std::cout << "Choose type of rig:\n";
    std::cout << "1 - with straight sailing rig\n";
    std::cout << "2 - with oblique sailing rig\n";
    std::cout << "3 - with mixed sailing rig\n";
    std::cout << "Print type: ";
    std::cin >> _sailboat_type; sailboat_type = _sailboat_type;
    std::cout << "name = ";
    std::cin >> _name; name = _name;
    std::cout << "Choose type of sailboat:\n";
    std::cout << "1 - military\n";
    std::cout << "2 - civil\n";
    std::cout << "Print type: ";
    std::cin >> _type; type = _type;
    std::cout << "length = ";
    std::cin >> _len; len = _len;
    std::cout << "speed = ";
    std::cin >> _speed; speed = _speed;
    std::cout << "people = ";
    std::cin >> _people; people = _people;
    std::cout << std::endl; 
}

void sailboat::get(){
    std::cout << "Parameters\n";
    if (sailboat_type == 1){
        std::cout << "type of rig: with straight sailing rig" << std::endl;
    }
    else if (sailboat_type == 2){
        std::cout << "type of rig: with oblique sailing rig" << std::endl;
    }
    else if (sailboat_type == 3){
        std::cout << "type of rig: with mixed sailing rig" << std::endl;
    }
    std::cout << "name: " << name << std::endl;
    if (type == 1){
        std::cout << "type of sailboat: military" << std::endl;
    }
    else if (type == 2){
        std::cout << "type of rig: civil" << std::endl;
    }
    std::cout << "length: " << len << std::endl;
    std::cout << "speed: " << speed << std::endl;
    std::cout << "peopls: " << people << std::endl;
    std::cout << std::endl;
}