#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

enum COLOR { Green, Blue, White, Black, Brown };

class Animal {
private:
    string _name;
    COLOR _color;
public:
    Animal();
    Animal(string n, COLOR c);
    virtual ~Animal();

    
    virtual void speak() const;

    virtual void move() const = 0;
};

#endif 