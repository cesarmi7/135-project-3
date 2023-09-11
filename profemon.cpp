/*Author: Cesar Iglesias
Course: CSCI-135
Instructor: Maryash
Assignment: Project 3 Task A

Profemon game. */

#include "profemon.hpp"

#include <string>
#include <iostream>
using namespace std;

Profemon::Profemon() {

	profemonname = "Undefined";

}

Profemon::Profemon(string name, double max_health, Specialty specialty) {

	profemonname = name;
	maximumhealthlevel = max_health;
	profemonspecialty = specialty;
	currentexperience = 0;
	profemonlevel = 0;
	requiredexperience = 50;

}

string Profemon::getName() {

	return profemonname;

}

Specialty Profemon::getSpecialty() {

	return profemonspecialty;

}

int Profemon::getLevel() {

	return profemonlevel;

}

double Profemon::getMaxHealth() {

	return maximumhealthlevel;

}

void Profemon::setName(string name) {

	profemonname = name;

}

void Profemon::levelUp(int exp) {

	currentexperience += exp;
	
	while (currentexperience >= requiredexperience) {

		currentexperience -= requiredexperience;
		profemonlevel++;

		if (profemonspecialty == ML) {
			requiredexperience += 10;
		}
		if (profemonspecialty == SOFTWARE) {
			requiredexperience += 15;
		}
		if (profemonspecialty == HARDWARE) {
			requiredexperience += 20;
		}

	}

}

bool Profemon::learnSkill(int slot, Skill skill) {

	if (slot < 0 || slot > 2) {
		return false;
	}
	if (skill.getSpecialty() != profemonspecialty) {
		return false;
	}

	profemonskill[slot] = skill;

	return true;

}

void Profemon::printProfemon(bool print_skills) {

	cout << profemonname << " [";

	if (getSpecialty() == ML) {
		cout << "ML";
	}
	if (getSpecialty() == SOFTWARE) {
		cout << "SOFTWARE";
	}
	if (getSpecialty() == HARDWARE) {
		cout << "HARDWARE";
	}

	cout << "] | lvl " << profemonlevel << " | exp " << currentexperience << "/" << requiredexperience << " | hp " << maximumhealthlevel << endl;

	if (print_skills) {
		for (int i = 0; i < 3; i++) {
			if (profemonskill[i].getName() != "Undefined") {
				cout << "    " << profemonskill[i].getName() << " [" << profemonskill[i].getTotalUses() << "] : " << profemonskill[i].getDescription() << endl;
			}
		}
	}

}