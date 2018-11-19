#include <string>

#ifndef STUDENT_DATA_READER_H
#define STUDENT_DATA_READER_H

class StudentDataReader
{
private:
	unsigned long long FN; //Faculty number to check against
public:
	StudentDataReader(unsigned long long FN); //Init FN type

	std::string read(); //Returns the full student info if found; else returns "Record not found!"
};

#endif
