#ifndef COMMAND_PARSER_H
#define COMMAND_PARSER_H

class CommandParser 
{
public:
	CommandParser(); //Dummy constructor

	//0 - Exit, 1 - Write, 2 - Read
	unsigned short parseCommand();
};

#endif

