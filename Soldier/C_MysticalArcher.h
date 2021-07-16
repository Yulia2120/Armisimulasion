#pragma once
#include "C_Archer.h"
class C_MysticalArcher :
    public C_Archer
{
private:
    int _MagicSpell;

public:
    C_MysticalArcher() : _MagicSpell(0), C_Archer() {};
    C_MysticalArcher(char* _name, int _honor, int _force, int PointBlankShot, int PreciseShot, int MagicSpell) :_MagicSpell(MagicSpell), C_Archer(_name, _honor, _force, PointBlankShot, PreciseShot) {};

    void info(int a, int b, std::ostream& out) {
        out << "\t\t\t\tEat:" << "\tSleep:" << "\tDamage:" << "\tSpell:" << std::endl;
        out << "\tName\t" << "*" << this->name << "*" << std::endl;
        out << "\tHonor\t" << this->honor << " \t\t\t\t\t" << Spell() << std::endl;
        out << "\tForce\t" << this->force << "\t\t" << eat() << "\t" << sleep() << "\t" << Damage() << "\t" << Spell() << std::endl;
        out << "\t____________________________________________________________________________" << std::endl;
    }

    int Spell() { return 30; }


    ~C_MysticalArcher() { std::cout << "Destructor5" << std::endl; };
};

