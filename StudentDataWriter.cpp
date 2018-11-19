#include "StudentDataWriter.h"
#include <fstream>

using namespace std;

StudentDataWriter::StudentDataWriter(unsigned long long FN, char firstName[257], char lastName[257], unsigned short grade) : FN(FN), grade(grade)
{
	strcpy(this->firstName, firstName);
	strcpy(this->lastName, lastName);
}

void StudentDataWriter::write()
{
	ofstream output;

	output.open("StudentsGrades.db", ios::app); //Open our database file

	//Write all of the student data and end the line; Each data entry for one student is separated by a single blank space
	output << FN
		<< " " << firstName 
		<< " " << lastName 
		<< " " << grade 
		<< endl;

	output.close(); // Close the database file
}
