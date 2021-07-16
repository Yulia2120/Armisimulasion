#pragma once
#include "C_Soldier.h"
class C_Swordsman :
    public C_Soldier
{

private:
    int _Mobility;
    int _Dodge;
public:
    C_Swordsman() :_Mobility(0), _Dodge(0), C_Soldier() {};
    C_Swordsman(char* _name, int _honor, int _force, int Mobility, int Dodge) : _Mobility(Mobility), _Dodge(Dodge), C_Soldier(_name, _honor, _force) {};


        virtual void info(int a, int b, std::ostream& out) {
        out << "\t\t\t\tEat:" << "\tSleep:" << "\tDamage:" << "\tMobility:" << "\tDodge:" << std::endl;
        out << "\tName\t" << "*" << this->name << "*" << std::endl;
        out << "\tHonor\t" << this->honor << "  \t\t\t\t\t" << Mob() << "  \t\t" << Dod()<< std::endl;
        out << "\tForce\t" << this->force << "\t\t" << eat() << "\t" << sleep() << "\t" << Damage() << std::endl;
        out << "\t____________________________________________________________________________" << std::endl;
    }

    int Mob() {
        return 20;
    }
    int Dod() {
        return 20;
    }

     virtual ~C_Swordsman() { std::cout << "Destructor3" << std::endl; };
};

