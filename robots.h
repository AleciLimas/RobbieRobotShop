#ifndef ROBOTS_H
#define ROBOTS_H
#include "parts.h"
#include <string>
#include <iostream>
using namespace std;


class Robot1
{
public:
	Robot1(string r_name,
		string r_modelnum,
		Parts r_parts) :

		name(r_name),
		modelnum(r_modelnum),
		parts(r_parts) { }
	string tostring();
private:
	string name;
	string modelnum;
	Parts parts;

};

#endif ROBOTS_H