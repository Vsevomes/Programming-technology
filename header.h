#pragma once
#include <iostream>
#include <fstream>
#include <string>

class ship{
public:
    virtual ~ship(){};
    virtual void set() = 0;
    //virtual void set(std::ifstream &f) = 0;
    virtual void get() = 0;
    virtual void get(std::ofstream &f) = 0;
};

class submarine : public ship{
    int len;
    int width;
    int people;
    int time_under_water;
    int max_speed;
    int weapon_count;
public:
    int _len, _width, _people, _time_under_water,
    _max_speed, _weapon_count;
    submarine();
    submarine(int len_, int width_, int people_,
    int time_under_water_, int max_speed_, int weapon_count_);
    submarine(submarine &obj);
    void set() override;
    void get() override;
    void get(std::ofstream &f) override;
};

class sailboat : public ship{
    int sailboat_type;
    std::string name;
    int type;
    int len;
    int speed;
    int people;
public:
    int _sailboat_type, _type, _len, _speed, _people;
    std::string _name;
    sailboat();
    sailboat(int sailboat_type_, std::string name_, int type_,
    int len_, int speed_, int people_);
    sailboat(sailboat &obj);
    void set() override;
    void get() override;
    void get(std::ofstream &f) override;
};

class boat : public ship{
    int appointment;
    int material;
    int ride_quality;
    int speed;
    int people;
public:
    int _appointment, _material, _ride_quality, _speed, _people;
    boat();
    boat(int appointment_, int material_, int ride_quality_,
    int speed_, int people_);
    boat(boat &obj);
    void set() override;
    void get() override;
    void get(std::ofstream &f) override;
};

