/*Author: Cesar Iglesias
Course: CSCI-135
Instructor: Maryash
Assignment: Project 3 Task B

Profemon game. */

#include "department.hpp"

#include <string>
#include <vector>
#include <iostream>
using namespace std;

MLDepartment::MLDepartment(vector<Profemon> profemons) {

    for (int i = 0; i < profemons.size(); i++) {
        if (profemons[i].getSpecialty() == ML) {
            Trainer::addProfemon(profemons[i]);
        }
    }

}

bool MLDepartment::addProfemon(Profemon profemon) {

    if (profemon.getSpecialty() != ML) {
        return false;
    }
    Trainer::addProfemon(profemon);
    return true;

}

SoftwareDepartment::SoftwareDepartment(vector<Profemon> profemons) {

    for (int i = 0; i < profemons.size(); i++) {
        if (profemons[i].getSpecialty() == SOFTWARE) {
            Trainer::addProfemon(profemons[i]);
        }
    }

}

bool SoftwareDepartment::addProfemon(Profemon profemon) {

    if (profemon.getSpecialty() != SOFTWARE) {
        return false;
    }
    Trainer::addProfemon(profemon);
    return true;

}

HardwareDepartment::HardwareDepartment(vector<Profemon> profemons) {

    for (int i = 0; i < profemons.size(); i++) {
        if (profemons[i].getSpecialty() == HARDWARE) {
            Trainer::addProfemon(profemons[i]);
        }
    }

}

bool HardwareDepartment::addProfemon(Profemon profemon) {

    if (profemon.getSpecialty() != HARDWARE) {
        return false;
    }
    Trainer::addProfemon(profemon);
    return true;

}
