#include "header.h"

boat::boat(){
    appointment = 1;
    material = 1;
    ride_quality = 1;
    speed = 50;
    people = 5;
    std::cout << "Boat parameters set";
}

boat::boat(int appointment_, int material_, int ride_quality_,
    int speed_, int people_){
        appointment = appointment_;
        material = material_;
        ride_quality = ride_quality_;
        speed = speed_;
        people = people_;
        std::cout << "Boat parameters set";
}

boat::boat(boat &obj){
    appointment = obj.appointment;
    material = obj.material;
    ride_quality = obj.ride_quality;
    speed = obj.speed;
    people = obj.people;
    std::cout << "Boat parameters copied";
}