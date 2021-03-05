/*
 * Dog.hpp
 *
 *  Created on: Mar 1, 2021
 *      Author: Nolan Baker
 */

#ifndef DOG_HPP_
#define DOG_HPP_

#ifndef BOARD_HPP_
#define BOARD_HPP_

#include <iostream>
#include <string.h>
using namespace std;

class Dog{
	friend class Board;
	string name;
	int strength;
	int x;
	int y;
public:
	Dog(string n);
	Dog();
	bool changeStrength(int amt);
	void die();
	void printDog();
	void won();

};


#endif /* DOG_HPP_ */
