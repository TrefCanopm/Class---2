#include <iostream>
#include <string>
#include <windows.h>
#include "Exam.h"

using namespace std;

int main()
{
	setlocale(0,"RUS");

	string f;
	string s;
	int e;
	bool F = 1;
	int n = 0;
	while (F)
	{
		cout << "1) Создание класс через конструктор без параметров" << endl;
		cout << "2) Создание класс через конструктор с параметрами" << endl;
		cout << "3) Создание класс через конструктор копирования" << endl;
		cout << "Введите номер действия" << endl;
		cin >> n;
		switch (n)
		{
		case 1:
		{
			Exam a;
			a.getExam();
			cout << "Введите ФИО" << endl;
			getline(cin >> ws, f);
			cout << "Введите предмет" << endl;
			getline(cin >> ws, s);
			cout << "Введите отценку" << endl;
			cin >> e;
			a.setFIO(f);
			a.setSubject(s);
			a.setEvaluation(e);
			a.getExam();
			break;
		}
		case 2:
		{
			cout << "Введите ФИО" << endl;
			getline(cin >> ws, f);
			cout << "Введите предмет" << endl;
			getline(cin >> ws, s);
			cout << "Введите отценку" << endl;
			cin >> e;
			Exam a(f, s, e);
			a.getExam();
			break;
		}
		case 3:
		{
			cout << "Введите ФИО" << endl;
			getline(cin >> ws, f);
			cout << "Введите предмет" << endl;
			getline(cin >> ws, s);
			cout << "Введите отценку" << endl;
			cin >> e;
			Exam a(f, s, e);
			a.getExam();
			const Exam& b = a;
			Exam c(b);
			c.getExam();
			break;
		}
		case 4: 
		{
			F = 0;
			break;
		}
		}
	}
}