/*Author: Cesar Iglesias
Course: CSCI-135
Instructor: Maryash
Assignment: Project 3 Task A

Profemon game. */

#include "skill.hpp"

#include <string>
#include <iostream>
using namespace std;

Skill::Skill() {

	skillname = "Undefined";
	skilldescription = "Undefined";
	skilluses = -1;
	skillspecialty = -1;

}

Skill::Skill(string name, string description, int specialty, int uses) {

	skillname = name;
	skilldescription = description;
	skilluses = uses;
	skillspecialty = specialty;

}

string Skill::getName() {

	return skillname;

}

string Skill::getDescription() {

	return skilldescription;

}

int Skill::getTotalUses() {

	return skilluses;

}

int Skill::getSpecialty() {

	return skillspecialty;

}

void Skill::setName(string name) {

	skillname = name;

}

void Skill::setDescription(string description) {

	skilldescription = description;

}

void Skill::setTotalUses(int uses) {

	skilluses = uses;

}

bool Skill::setSpecialty(int specialty) {

	if (specialty == 0 || specialty == 1 || specialty == 2) {
		skillspecialty = specialty;
		return true;
	}
	else {
		return false;
	}

}