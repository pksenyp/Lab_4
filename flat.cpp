#include "flat.h"
#include <iostream>
using namespace std;

string Flat::get_district()
{
	return district;
}
int Flat::get_rooms()
{
	return rooms;
}
int Flat::get_total()
{
	return total;
}
int Flat::get_living()
{
	return living;
}
int Flat::get_balconies()
{
	return balconies;
}
int Flat::get_floor()
{
	return floor;
}
int Flat::get_storeys()
{
	return storeys;
}

void Flat::read_from(ifstream& file)
{
	file >> rooms;
	file >> total;
	file >> living;
	file >> balconies;
	file >> floor;
	file >> storeys;
	getline(file, district);
	file.get();
}

void Flat::write_to(ofstream& file)
{
	file << rooms << endl;
	file << total << endl;
	file << living << endl;
	file << balconies << endl;
	file << floor << endl;
	file << storeys << endl;
	file << district << endl;
}

void Flat::display(int i)
{
	cout << "Enter data for apartments of multi-storey building #" << i + 1 << endl;
	cout << " Number of rooms - " << rooms << endl;
	cout << " Total area - " << total << endl;
	cout << " Living area - " << living << endl;
	cout << " Number of balconies - " << balconies << endl;
	cout << " Floor - " << floor << endl;
	cout << " Floor of the house - " << storeys << endl;
	cout << " District - " << district << endl;
	cout << "\n";
}