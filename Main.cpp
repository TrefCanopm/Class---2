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
		cout << "1) �������� ����� ����� ����������� ��� ����������" << endl;
		cout << "2) �������� ����� ����� ����������� � �����������" << endl;
		cout << "3) �������� ����� ����� ����������� �����������" << endl;
		cout << "������� ����� ��������" << endl;
		cin >> n;
		switch (n)
		{
		case 1:
		{
			Exam a;
			a.getExam();
			cout << "������� ���" << endl;
			getline(cin >> ws, f);
			cout << "������� �������" << endl;
			getline(cin >> ws, s);
			cout << "������� �������" << endl;
			cin >> e;
			a.setFIO(f);
			a.setSubject(s);
			a.setEvaluation(e);
			a.getExam();
			break;
		}
		case 2:
		{
			cout << "������� ���" << endl;
			getline(cin >> ws, f);
			cout << "������� �������" << endl;
			getline(cin >> ws, s);
			cout << "������� �������" << endl;
			cin >> e;
			Exam a(f, s, e);
			a.getExam();
			break;
		}
		case 3:
		{
			cout << "������� ���" << endl;
			getline(cin >> ws, f);
			cout << "������� �������" << endl;
			getline(cin >> ws, s);
			cout << "������� �������" << endl;
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