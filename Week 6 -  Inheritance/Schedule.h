#ifndef SCHEDULE_H
#define SCHEDULE_H

#pragma once

#include "Doctor.hpp"
#include "Patient.hpp"
class Schedule
{
public:
    Schedule();
    ~Schedule();

    void setTheDoctor(Doctor aDoc);
    void setTheDoctor(string fname, string lname, string speciality, int id);

    Schedule(Doctor aDoc, patient aPatient, string When);

    inline string to_string(){
        return theDoctor.to_string() + " sees " + 
            thePatient.to_string() + " at " + theDate;
    }


private:
    Doctor theDoctor;
    patient thePatient;

    string theDate;

};

#endif