#pragma once
#include <ostream>
#include <iostream>

class C_Soldier
{

protected:
	char* name;
	int honor;
	int force;



public:

	C_Soldier():name(0),honor(0),force(0) {};
	C_Soldier(char* _name, int _honor, int _force): name(_name),honor(_honor),force(_force) {};
	

	   virtual void info(int a, int b, std::ostream& out) {
		out <<"\t\t\t\tEat:"<< "\tSleep:" << "\tDamage:" << std::endl;
		out << "\tName\t" <<"*"<<this->name <<"*" << std::endl;
	    out << "\tHonor\t" << this->honor << std::endl;
		out << "\tForce\t" << this->force <<"\t\t"<<eat()<< "\t" << sleep() << "\t" << Damage()<< std::endl;
		out << "\t____________________________________________________________________________" << std::endl;

	}
		
	   int eat() {
		return 20;	
	   }
		int sleep() {
			return 20;
		}
		 
		int Damage() {
			return -20;
		}
		
		

	  virtual ~C_Soldier() {
		   std::cout << "Destructor1" << std::endl;
		 
	   }

};

