#include "Doctor.hpp"  
	
Doctor::Doctor():person()
{
	specialty = "just a doctor";
    id = 42;
}

Doctor::Doctor(string fname, 
    string lname,string speciality, int id):person(fname, lname){
        this->specialty = speciality;
        this->id = id;
    }
	
Doctor::~Doctor()
{
	
}

string Doctor::to_string(){
    return "Doctor " + person::to_string() + "\nSpecialty " + specialty;
}