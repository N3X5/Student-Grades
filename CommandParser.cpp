#include "CommandParser.h"
#include <string>
#include <iostream>

using namespace std;

CommandParser::CommandParser() {}

unsigned short CommandParser::parseCommand()
{
	string input; //String type for simplicity

	cin >> input;

	if (!input.compare("create"))
		return 1;
	else if (!input.compare("sequentialSearch"))
		return 2;

	return 0; //Return 0 in all cases, excluding the ones written above; We assume that a valid command is always given!
}
