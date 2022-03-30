#include <cstdlib>
#include <fstream>
#include <cstring>
#include <iostream>
#include <Windows.h>
#include "flat.h"
#include "flat.cpp"
#include "realtor.h"
#include "realtor.cpp"

using namespace std;

int main()
{
	realtor my_flats(50);
	my_flats.read_from_file("file.txt");
	my_flats.display_all();
    my_flats.menu();
    my_flats.tasks();
    my_flats.write_to_file("file.txt");
	system("pause");
	return 0;
}
