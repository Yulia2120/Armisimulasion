#pragma once
#include "C_Archer.h"
class C_HorseArcher :
    public C_Archer
{
private:
    int _HorseSpeed;

public:
    C_HorseArcher() : _HorseSpeed(0), C_Archer() {};
    C_HorseArcher(char* _name, int _honor, int _force, int PointBlankShot, int PreciseShot, int HorseSpeed) :_HorseSpeed(HorseSpeed), C_Archer(_name, _honor, _force, PointBlankShot, PreciseShot) {};

       virtual void info(int a, int b, std::ostream& out) {
        out << "\t\t\t\tEat:" << "\tSleep:" << "\tDamage:" << "\tSpeed:" << std::endl;
        out << "\tName\t" << "*" << this->name << "*" << std::endl;
        out << "\tHonor\t" << this->honor << " \t\t\t\t\t"<< Horse() << std::endl;
        out << "\tForce\t" << this->force << "\t\t" << eat() << "\t" << sleep() << "\t" << Damage() << "\t" << Speed() << std::endl;
        out << "\t____________________________________________________________________________" << std::endl;
    }
   
        int Speed() { return 30; }
        int Horse() { return 10; }



       virtual  ~C_HorseArcher() { std::cout << "Destructor4" << std::endl; };
};

