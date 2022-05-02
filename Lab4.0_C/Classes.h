#include <iostream>
using namespace std;
class Vector {
	int x, y, z;
public:
	Vector() { x = y = z = 0; }
	Vector(int x1) { x = x1; y = z = 0; }
	Vector(int x1, int y1) { x = x1; y = y1; z = 0; }
	Vector(int x1, int y1, int z1) { x = x1; y = y1; z = z1; }
	int get_x() { return x; }
	int get_y() { return y; }
	int get_z() { return z; }
	void set_x(int x1) { x = x1; }
	void set_y(int y1) { y = y1; }
	void set_z(int z1) { z = z1; }
	Vector operator+(Vector);
	int operator*(Vector);
	double length();
	void show();
};