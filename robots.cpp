#include "robots.h"

string Robot1::tostring() {
	string robotmodel = "-" + name + "-" + modelnum + "-" + parts.to_string() + "-";
	cout << "test";
	return robotmodel;
}

