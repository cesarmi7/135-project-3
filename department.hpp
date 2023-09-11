/*Author: Cesar Iglesias
Course: CSCI-135
Instructor: Maryash
Assignment: Project 3 Task B

Profemon game. */

#ifndef DEPARTMENT
#define DEPARTMENT

#include "trainer.hpp"

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class MLDepartment : public Trainer {
public:
    MLDepartment(vector<Profemon> profemons);
    bool addProfemon(Profemon profemon);
};

class SoftwareDepartment : public Trainer {
public:
    SoftwareDepartment(vector<Profemon> profemons);
    bool addProfemon(Profemon profemon);
};

class HardwareDepartment : public Trainer {
public:
    HardwareDepartment(vector<Profemon> profemons);
    bool addProfemon(Profemon profemon);
};

#endif