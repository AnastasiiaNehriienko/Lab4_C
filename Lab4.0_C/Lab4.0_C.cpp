#include "Funcs.h"
int main() {
	int x_M1, x_M2, y_M2, z_M2;   
	giving_coord(x_M1, x_M2, y_M2, z_M2);  //задання координат для подальшого створення векторів різними конструкторами
	Vector M1(x_M1);   
	Vector M2(x_M2, y_M2, z_M2);
	adding_coord(M1);    //запис інших координат вектора М1
	Vector M3;
	M3= M1 + M2;  
	showing(M1, M2, M3);     //проміжні результати
	counting(M1, M2, M3);   //проведення розрахунків довжини та скалярного добутку
}