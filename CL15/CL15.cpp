#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Room
{
private :
	string m_title;
	int m_width;
	int m_length;
public :
	int GetWidth()
	{
		return m_width;
	}
	int GetLength()
	{
		return m_length;
	}
	int GetArea()
	{
		return m_length * m_width;
	}
	string GetTitle()
	{
		return m_title;
	}
	void SetTitle(string newTitle)
	{
		m_title = newTitle;
	}
	void SetDimensions(int newWidth, int newLength)
	{
		if (newWidth <= 0)
		{
		}
		else
		{
			m_width = newWidth;
		}
		if (newLength <= 0)
		{
		}
		else
		{
			m_length = newLength;
		}
	}
};

class Building
{
private :
	Room* m_rooms;
		int m_roomCount = 0;
public :
		Building(int roomCount)
		{
			m_rooms = nullptr;
			if (roomCount > 0)
			{
				m_roomCount = roomCount;
				m_rooms = new Room[roomCount];
			}
		}
		~Building()
		{
			if (m_rooms != nullptr)
			{
				delete m_rooms;
			}
		}
		void SetRoomTitle(int room, string title)
		{
			if (m_roomCount > room && room >= 0)
			{
				m_rooms[room].SetTitle(title);
			}
		}
		void SetRoomDimensions(int room, int newWidth, int newLength)
		{
			if (m_roomCount > room && room >= 0)
			{
				m_rooms[room].SetDimensions(newWidth, newLength);
			}
		}
		int GetTotalArea()
		{
			int sum = 0;
			int i = 0;
			while (i < m_roomCount)
			{
				sum = sum + m_rooms[i].GetArea();
				i++;
			}
			return sum;
		}
		void PrintBuildingInformation(string filename)
		{
			ofstream output(filename);

			output << "BUILDING Dimensions: " << GetTotalArea() << " sqft" << endl << endl;

			for (int i = 0; i < m_roomCount; i++)
			{
				output << endl << "ROOM " << (i + 1) << " ("
					<< m_rooms[i].GetTitle() << "):"
					<< "\n\t * Dimensions: " << m_rooms[i].GetWidth() << " x " << m_rooms[i].GetLength()
					<< "\n\t * Area:       " << m_rooms[i].GetArea() << " sqft" << endl;
			}

			output.close();
		}
};



void RoomProgram()
{
	// This function works with the Room object

	
	Room room;
	room.SetDimensions( 5, 4 );

	cout << "Room area is: " << room.GetArea() << endl;

	room.SetTitle( "closet" );

	cout << "Room name is: " << room.GetTitle() << endl;
	
}

void BuildingProgram()
{
	// This function works with the Building object

	
	Building building( 5 );

	building.SetRoomTitle( 0, "Entryway" );
	building.SetRoomTitle( 1, "Living Room" );
	building.SetRoomTitle( 2, "Kitchen" );
	building.SetRoomTitle( 3, "Bedroom" );
	building.SetRoomTitle( 4, "Bathroom" );

	building.SetRoomDimensions( 0, 5, 10 );
	building.SetRoomDimensions( 1, 5, 10 );
	building.SetRoomDimensions( 2, 5, 10 );
	building.SetRoomDimensions( 3, 5, 10 );
	building.SetRoomDimensions( 4, 5, 10 );

	building.PrintBuildingInformation( "building.txt" );
	
}

int main()
{
	RoomProgram();
	BuildingProgram();

	return 0;
}

/*
BUILDING Dimensions: 250 sqft


ROOM 1 (Entryway):
* Dimensions: 5 x 10
* Area:       50 sqft

ROOM 2 (Living Room):
* Dimensions: 5 x 10
* Area:       50 sqft

ROOM 3 (Kitchen):
* Dimensions: 5 x 10
* Area:       50 sqft

ROOM 4 (Bedroom):
* Dimensions: 5 x 10
* Area:       50 sqft

ROOM 5 (Bathroom):
* Dimensions: 5 x 10
* Area:       50 sqft
*/
