#include "CommandParser.h"
#include "StudentDataWriter.h"
#include "StudentDataReader.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	CommandParser parser; //New command parser; to be used while the program is running

	while(unsigned short command = parser.parseCommand()) //Parse command, which is converted to an integer; terminates when a 0 is received from the parser
	{
		unsigned long long FN;
		cin >> FN; //Read faculty number here as it is needed for both commands

		if(command == 1) //Write to file
		{
			char firstName[257]; //Max length 256
			char lastName[257]; //Max length 256
			unsigned short grade; //Positive num in [2;6] interval

			cin >> firstName >> lastName >> grade;

			StudentDataWriter writer(FN, firstName, lastName, grade); //New writer for our student

			writer.write(); //Perform the actual writing
			
			cout << "Record saved!" << endl; //Program does not have error handling, so we assume that all went OK!
		}
		else if(command == 2) //Read from file
		{
			StudentDataReader reader(FN); //Takes the FN so it can find the student

			cout << reader.read() << endl; //Print the return from the reader
		}
	}

    return 0;
}

