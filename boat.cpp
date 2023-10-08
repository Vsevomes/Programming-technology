#include "header.h"

boat::boat(){
    appointment = 1;
    material = 1;
    ride_quality = 1;
    speed = 50;
    people = 5;
    std::cout << "Boat parameters set\n";
}

boat::boat(int appointment_, int material_, int ride_quality_,
    int speed_, int people_){
        appointment = appointment_;
        material = material_;
        ride_quality = ride_quality_;
        speed = speed_;
        people = people_;
        std::cout << "Boat parameters set\n";
}

boat::boat(boat &obj){
    appointment = obj.appointment;
    material = obj.material;
    ride_quality = obj.ride_quality;
    speed = obj.speed;
    people = obj.people;
    std::cout << "Boat parameters copied\n";
}

void boat::set(){
    std::cout << "Enter value:\n";
    std::cout << "Choose appointment:\n";
    std::cout << "1 - for sport\n";
    std::cout << "2 - for relax\n";
    std::cout << "3 - for fishing\n";
    std::cout << "Print type: ";
    std::cin >> _appointment; appointment = _appointment;
    std::cout << "Choose material:\n";
    std::cout << "1 - fiberglass\n";
    std::cout << "2 - aluminum\n";
    std::cout << "Print type: ";
    std::cin >> _material; material = _material;
    std::cout << "Choose priority ride quality:\n";
    std::cout << "1 - good performance\n";
    std::cout << "2 - good handling\n";
    std::cout << "3 - good stability\n";
    std::cout << "Print type: ";
    std::cin >> _ride_quality; ride_quality = _ride_quality;
    std::cout << "speed = ";
    std::cin >> _speed; speed = _speed;
    std::cout << "people = ";
    std::cin >> _people; people = _people;
    std::cout << std::endl;
}

void boat::set(std::ifstream &f){
    f >> appointment;
    f >> material;
    f >> ride_quality;
    f >> speed;
    f >> people;
}

void boat::get(){
    std::cout << "Boat\n";
    std::cout << "Parameters\n";
    if (appointment == 1){
        std::cout << "appointment: for sport" << std::endl;
    }
    else if (appointment == 2){
        std::cout << "appointment: for relax" << std::endl;
    }
    else if (appointment == 3){
        std::cout << "appointment: for fishing" << std::endl;
    }
    if (material == 1){
        std::cout << "material: fiberglass" << std::endl;
    }
    else if (material == 2){
        std::cout << "material: aluminum" << std::endl;
    }
    if (ride_quality == 1){
        std::cout << "ride quality: good performance" << std::endl;
    }
    else if (ride_quality == 2){
        std::cout << "ride quality: good handling" << std::endl;
    }
    else if (ride_quality == 3){
        std::cout << "ride quality: good stability" << std::endl;
    }
    std::cout << "speed: " << speed << std::endl;
    std::cout << "people: " << people << std::endl;
    std::cout << std::endl;
}

void boat::get(std::ofstream &f){
    f << "boat" << std::endl;
    f << appointment << std::endl;
    f << material << std::endl;
    f << ride_quality << std::endl;
    f << speed << std::endl;
    f << people << std::endl;
}