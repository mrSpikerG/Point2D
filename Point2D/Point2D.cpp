#include <iostream>
#include <iomanip>
#include "c_Point2D.h"
using namespace std;

int main() {
	//размер консоли (в символах) по стандарту
	char mas[64][29];

	c_Point2D *PointMas = new c_Point2D[10];

	int temp;
	for (int i = 0; i < 10; i++) {
		cout << "\nВведите X[" << i << "]: ";
		cin >> temp;
		PointMas[i].setX(temp);

		cout << "Введите Y[" << i << "]: ";
		cin >> temp;
		PointMas[i].setY(temp);

		mas[PointMas[i].getX()][PointMas[i].getY()] = '*';
	}

	system("cls");
	for (int i = 0; i < 64; i++) {
		for (int j = 0; j < 29;j++) {
			if (mas[i][j] == '*') {
				cout << mas[i][j];
			}
			else {
				cout << " ";
			}
		}
		cout << "\n";
	}
	



}

