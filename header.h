#pragma once
#include <iostream>
#include <string>

class ship{
public:
    virtual ~ship() = 0;
};

class submarine:ship{
    int len;
    int width;
    int people;
    int time_under_water;
    int max_speed;
    int weapon_count;
public:
    submarine();
    submarine(int len_, int width_, int people_,
    int time_under_water_, int max_speed_, int weapon_count_);
    submarine(submarine &obj);
};

class sailboat:ship{
    int sailboat_type;
    std::string name;
    int type;
    int len;
    int speed;
    int people;
public:
    sailboat();
    sailboat(int sailboat_type_, std::string name_, int type_,
    int len_, int speed_, int people_);
    sailboat(sailboat &obj);
};

class boat:ship{
    int appointment;
    int material;
    int ride_quality;
    int speed;
    int people;
public:
    boat();
    boat(int appointment_, int material_, int ride_quality_,
    int speed_, int people_);
    boat(boat &obj);
};