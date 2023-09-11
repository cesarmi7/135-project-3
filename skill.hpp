/*Author: Cesar Iglesias
Course: CSCI-135
Instructor: Maryash
Assignment: Project 3 Task A

Profemon game. */

#ifndef SKILL_HPP
#define SKILL_HPP

#include <string>
#include <iostream>
using namespace std;

class Skill {

private:

	string skillname;
	string skilldescription;
	int skilluses;
	int skillspecialty;

public:

	Skill();
	Skill(string name, string description, int specialty, int uses);
	string getName();
	string getDescription();
	int getTotalUses();
	int getSpecialty();
	void setName(std::string name);
	void setDescription(string description);
	void setTotalUses(int uses);
	bool setSpecialty(int specialty);

};

#endif 