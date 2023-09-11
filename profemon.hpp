/*Author: Cesar Iglesias
Course: CSCI-135
Instructor: Maryash
Assignment: Project 3 Task A

Profemon game. */

#ifndef PROFEMON_HPP
#define PROFEMON_HPP

#include "skill.hpp"

#include <string>
#include <iostream>
using namespace std;

enum Specialty { ML, SOFTWARE, HARDWARE };

class Profemon {

private:

	string profemonname;
	int profemonlevel;
	int requiredexperience;
	int currentexperience;
	double maximumhealthlevel;
	Specialty profemonspecialty;
	Skill profemonskill[3];

public:

	Profemon();
	Profemon(string name, double max_health, Specialty specialty);
	string getName();
	Specialty getSpecialty();
	int getLevel();
	double getMaxHealth();
	void setName(string name);
	void levelUp(int exp);
	bool learnSkill(int slot, Skill skill);
	void printProfemon(bool print_skills);

};

#endif 