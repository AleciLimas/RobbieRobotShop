#ifndef PARTS_H
#define PARTS_H
#include <iostream>
#include <string>

using namespace std;


class Parts
{
public:
	Parts();
	Parts(int val) : value(val) {}

	static const int arm = 0;
	static const int head = 1;
	static const int torso = 2;
	static const int batteries = 3;
	static const int locomoter = 4;

	string to_string() {
		switch (value) {
		case (arm):return "arm";
		case (head):return "head";
		case (torso):return "torso";
		case (batteries):return "batteries";
		case (locomoter):return "locomotor";
		default: return "unknown";
		}
	}
private:
	int value;
	

};
#endif PARTS_H
