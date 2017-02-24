#include "ExamCode.hpp"

#include "cuTEST/Menu.hpp"

string ExamCoding::Location( int x, int y )
{
	if (x == 0 && y == 0)
	{
		return "ORIGIN";
	}
	else if (x > 0 && y == 0)
	{
		return "EAST";
	}
	else if (x < 0 && y == 0)
	{
		return "WEST";
	}
	else if (x == 0 && y < 0)
	{
		return "SOUTH";
	}
	else if (x == 0 && y > 0)
	{
		return "NORTH";
	}
	else if (x > 0 && y > 0)
	{
		return "NORTHEAST";
	}
	else if (x < 0 && y < 0)
	{
		return "SOUTHWEST";
	}
	else if (x < 0 && y > 0)
	{
		return "NORTHWEST";
	}
	else if (x > 0 && y < 0)
	{
		return "SOUTHEAST";
	}
	else 
	{
		return "You messed up.";
	}
}


string ExamCoding::Draw( int number )
{
	string output;
	while (number > 0)
	{
		
		if (number % 2 == 1)
		{
			output = "?" + output;
		}
		else if (number % 2 == 0)
		{
			output = "!" + output;
		}
		number--;
    }
	return output;
}







