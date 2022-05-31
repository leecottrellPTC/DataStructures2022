#ifndef DOCTOR_H
#define DOCTOR_H
#pragma once

#include "Person.hpp"
#include <string>
	
class Doctor : public person
{
	protected:
		string specialty;
		int id;

	public:

		Doctor();
		~Doctor();
		Doctor(string fname, string lname,string speciality, int id);

		//build setter and getters on yourown
		string to_string();

};
#endif