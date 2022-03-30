#ifndef REALTOR_H
#define REALTOR_H

#include <string>
#include <fstream>
#include "flat.h"

class realtor
{
	private:
		int max_num_flats; // maximum number of apartments in the base (capacity)
		int num_flats; // the current number of apartments in the database
		Flat *flats; // array of flat class objects
	public:
		realtor(unsigned int max_nb); // constructor of the realtor class
		~realtor(); // destructor of the realtor class
		void add_flat(Flat aflat); // add an apartment
		void read_from_file(string filename); // enter data from the file
		void write_to_file(string filename); // write data to a file
		void display_all(); // to display on the screen
		void menu();
		void tasks();
};

#endif
