#include "Classes.h"
Vector Vector::operator+(Vector v) {   //перевантажений оператор додавання векторів
	int x_res=x+v.get_x();
	int y_res=y+v.get_y();
	int z_res=z+v.get_z();
	Vector result(x_res, y_res, z_res);
	return result;
}
int Vector::operator*(Vector v) {      //перевантажений оператор скалярного добутку векторів
	int res = x * v.get_x() + y * v.get_y() + z * v.get_z();
	return res;
}
double Vector::length() {      //довжина вектора
	double len = sqrt(x * x + y * y + z * z);
	return len;
}
void Vector::show() {
	printf("%d;%d;%d\n", x, y, z);
}