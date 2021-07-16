#pragma once
#include "C_Soldier.h"
class C_Archer :
     public C_Soldier
{
private:
    int _PointBlankShot;
    int _PreciseShot;
public:
    C_Archer() : _PointBlankShot(0), _PreciseShot(0), C_Soldier() {};
    C_Archer(char* _name, int _honor, int _force, int PointBlankShot, int PreciseShot) : _PointBlankShot(PointBlankShot), _PreciseShot(PreciseShot), C_Soldier( _name, _honor, _force) {};
 

       virtual void info(int a, int b, std::ostream& out) {
        out << "\t\t\t\tEat:" << "\tSleep:" << "\tDamage:" << "\tPointBlankShot:" << "\tPreciseShot:" << std::endl;
        out << "\tName\t" << "*" << this->name << "*" << std::endl;
        out << "\tHonor\t" << this->honor << " \t\t\t\t\t" << Shot() <<" \t\t"<<PrecShot() << std::endl;
        out << "\tForce\t" << this->force << "\t\t" << eat() << "\t" << sleep() << "\t" << Damage() << std::endl;
        out << "\t____________________________________________________________________________" << std::endl;

    }



    int Shot() {return 20;}
    int PrecShot() {return 30;}
     
       

    virtual ~C_Archer() { std::cout << "Destructor2" << std::endl; };

};

