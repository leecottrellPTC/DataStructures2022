#include "Patient.hpp"  
#include <iostream>
using namespace std;
	
patient::patient() :person() {
	complaint = "";
}
patient::patient(string first, string last, string concern) : person(first, last) {
	complaint = concern;
	//cout << "Creating a patient\n";
}

string patient::getComplaint(){
	return complaint;
}

void patient::setComplaint(string Complaint){
	complaint = Complaint;
}