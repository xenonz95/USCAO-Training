/*
ID: xenon951
PROG: ride
LANG: C++11
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout("ride.out");
	ifstream fin("ride.in");
	int multiply_one = 1,multiply_two = 1;
	char temp = 'A';
	while (temp != '\n')
	{
		multiply_one *= (temp-'A'+1);
		fin.get(temp);
	}
	temp = 'A';
	while (fin)
	{
		multiply_two *= (temp - 'A' + 1);
		fin >> temp;
	}
	if ((multiply_one % 47) == (multiply_two % 47))
		fout << "GO" << '\n';
	else fout << "STAY" << '\n';
	return 0;
}
