#include "Classes.h"
void giving_coord(int&, int&, int&, int&);
void adding_coord(Vector&);
void counting(Vector, Vector, Vector);
void showing(Vector, Vector, Vector);

void giving_coord(int& x1, int&x2, int&y2, int&z2) {
	cout << "Enter the x coordinate for M1:";
	cin >> x1;
	cout << "Enter the x, y, and z coordinates for M2:";
	cin >> x2 >> y2 >> z2;
}
void adding_coord(Vector& v) {
	int y, z;
	cout << "Enter the y and z coordinates for M2:";
	cin >> y >> z;
	v.set_y(y);
	v.set_z(z);
}
void counting(Vector m1, Vector m2, Vector m3) {
	double d_m3 = m3.length();
	int scal = m1 * m2;
	cout << "Length of M3 is " << d_m3 << endl;
	cout << "Scalar of M1 and M2 is " << scal;
}
void showing(Vector m1, Vector m2, Vector m3) {
	cout << "Vector M1: ";
	m1.show();
	cout << "Vector M2: ";
	m2.show(); 
	cout << "Vector M3: ";
	m3.show();
}