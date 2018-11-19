#include "StudentDataReader.h"
#include <fstream>

using namespace std;

StudentDataReader::StudentDataReader(unsigned long long FN) : FN(FN) {}

std::string StudentDataReader::read()
{
	string result = "Record not found!"; //Default return if nothing is found

	ifstream input("StudentsGrades.db"); //Open database file

	for(string line; getline(input, line);)  //Read file line by line and store data in line string
		if (stoll(line.substr(0, line.find(" "))) == FN) //Parse the line input for the faculty number; return the line if we have a match
			result = line;

	input.close(); //Close the stream

	return result;
}
