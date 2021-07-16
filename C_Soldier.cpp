// Soldier.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "C_Soldier.h"
#include "C_Archer.h"
#include "C_HorseArcher.h"
#include "C_MysticalArcher.h"
#include "C_Swordsman.h"
#include "C_Knight.h"
#include "C_MysticalKnight.h"

int main()
{
	/*C_Soldier p((char*)"Soldier", 3, 12);
	p.info(3,12, std::cout);                                                           
	std::cout << std::endl;

	C_Archer s((char*)"Archer", 5, 11,0,0);
	s.info(5, 11, std::cout);
	std::cout << std::endl;
	
	C_Swordsman a((char*)"Swordsman", 6, 10,0,0);
	a.info(6, 10, std::cout);
	std::cout << std::endl;

	C_HorseArcher d((char*)"HorseArcher", 7, 15, 0,0, 15);
	d.info(7, 15, std::cout);

	C_MysticalArcher m((char*)"MysticalArcher", 10, 25, 0, 0, 15);
	m.info(10, 25, std::cout);

	C_Knight k((char*)"Knight", 10, 25, 0, 0, 34, 45);
	k.info(10, 25, std::cout);

	C_MysticalKnight r((char*)"MysticalKnight", 10, 25, 0, 0, 20, 10);
	r.info(10, 25, std::cout);*/

	C_Soldier* soldier[7];
	soldier[0] = new C_Soldier((char*)"Soldier", 3, 12);
	soldier[1] = new C_Archer((char*)"Archer", 5, 11, 0, 0);
	soldier[2] = new C_Swordsman((char*)"Swordsman", 6, 10, 0, 0);
	soldier[3] = new C_HorseArcher((char*)"HorseArcher", 7, 15, 0, 0, 15);
	soldier[4] = new C_MysticalArcher((char*)"MysticalArcher", 10, 25, 0, 0, 15);
	soldier[5] = new C_Knight((char*)"Knight", 10, 25, 0, 0, 34, 45);
	soldier[6] = new C_MysticalKnight((char*)"MysticalKnight", 10, 25, 0, 0, 20, 10);
	for (int i = 0; i < 7; i++) {
		soldier[i]->info(10, 25, std::cout);
  }
	for (int i = 0; i < 7; i++) {
		delete soldier[i];
	}
	
	



	return 0;
}
