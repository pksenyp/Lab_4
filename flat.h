#ifndef FLAT_H
#define FLAT_H

#include <string>
#include <fstream>
using std::string;
using std::ifstream;
using std::ofstream;

class Flat // class declaration
{
	private: // closed part of the class
		int rooms;
		int total;
		int living;
		int balconies;
		int floor;
		int storeys;
		string district;
	public: // open (interface) part
		void read_from(ifstream &file); // file reading
		void write_to(ofstream& file); // writing to a file
		void display(int i); // screen display

		string get_district();
		int get_rooms();
		int get_total();
		int get_living();
		int get_balconies();
		int get_floor();
		int get_storeys();
};

#endif // FLAT_H
