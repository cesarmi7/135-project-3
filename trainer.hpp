/*Author: Cesar Iglesias
Course: CSCI-135
Instructor: Maryash
Assignment: Project 3 Task B

Profemon game. */

#ifndef TRAINER_HPP
#define TRAINER_HPP

#include "profemon.hpp"

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Trainer {

protected:

	vector <Profemon> profedex;
	Profemon team[3];
	Profemon* currentprofemon;

public:

	Trainer();
	Trainer(vector <Profemon> profemons);
	bool contains(string name);
	bool addProfemon(Profemon profemon);
	bool removeProfemon(string name);
	void setTeamMember(int slot, string name);
	bool chooseProfemon(int slot);
	Profemon getCurrent();
	void printProfedex();
	void printTeam();

};

#endif 