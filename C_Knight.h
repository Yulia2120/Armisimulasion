#pragma once
#include "C_Swordsman.h"
class C_Knight :
    public C_Swordsman
{
private:
    int _SenseMotive;
    int _Ride;

public:
    C_Knight() : _SenseMotive(0), _Ride(0), C_Swordsman() {};
    C_Knight(char* _name, int _honor, int _force, int Mobility, int Dodge, int SenseMotive, int Ride) :_SenseMotive(SenseMotive), _Ride(Ride), C_Swordsman(_name, _honor, _force, Mobility, Dodge) {};

   virtual void info(int a, int b, std::ostream& out) {
        out << "\t\t\t\tEat:" << "\tSleep:" << "\tDamage:" << "\tSenseMotive:" << "\tRide:" << std::endl;
        out << "\tName\t" << "*" << this->name << "*" << std::endl;
        out << "\tHonor\t" << this->honor << "  \t\t\t\t\t" << "  \t\t" << ride() << std::endl;
        out << "\tForce\t" << this->force << "\t\t" << eat() << "\t" << sleep() << "\t" << Damage() << std::endl;
        out << "\tSense Motive\t" << this->_SenseMotive << "  \t\t\t\t\t" << Motive() << std::endl;
        out << "\t____________________________________________________________________________" << std::endl;
    }

    int Motive() {
        return 20;
    }
    int ride() {
        return 20;
    }

    virtual ~C_Knight() { std::cout << "Destructor6" << std::endl; }

};

