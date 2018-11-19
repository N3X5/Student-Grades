#include <string>

#ifndef STUDENT_DATA_WRITER_H
#define STUDENT_DATA_WRITER_H

class StudentDataWriter
{
private: //All of the required student data
	unsigned long long FN;
	char firstName[257];
	char lastName[257];
	unsigned short grade;

public: 
	StudentDataWriter(unsigned long long FN, char firstName[257], char lastName[257], unsigned short grade); //Init our student data types

	void write(); //Write the student data to the database
};

#endif
