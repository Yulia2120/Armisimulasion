#pragma once
#include "C_Swordsman.h"
class C_MysticalKnight :
    public C_Swordsman
{ private:
    int _Climb;
    int _SpellCraft;
public:
    C_MysticalKnight() : _Climb(0), _SpellCraft(0), C_Swordsman() {};
    C_MysticalKnight(char* _name, int _honor, int _force, int Mobility, int Dodge, int Climb, int SpellCraft) :_Climb(Climb), _SpellCraft(SpellCraft), C_Swordsman(_name, _honor, _force, Mobility, Dodge) {};

   virtual void info(int a, int b, std::ostream& out) {
        out << "\t\t\t\tEat:" << "\tSleep:" << "\tDamage:" << "\tSpellCraft:" << "\tClimb:" << std::endl;
        out << "\tName\t" << "*" << this->name << "*" << std::endl;
        out << "\tHonor\t" << this->honor << "  \t\t\t\t\t" << "  \t\t" << climb() << std::endl;
        out << "\tForce\t" << this->force << "\t\t" << eat() << "\t" << sleep() << "\t" << Damage() << std::endl;
        out << "\tSpell Craft\t" << this->_SpellCraft << "  \t\t\t\t\t" << spellCraft() << std::endl;
        out << "\t____________________________________________________________________________" << std::endl;
    }

    int climb() {
        return 30;
    }
    int spellCraft() {
        return 30;
    }



  virtual  ~C_MysticalKnight(){ std::cout << "Destructor7" << std::endl; }


};

