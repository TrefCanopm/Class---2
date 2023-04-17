#pragma once

#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

class Exam
{
	string FIO;
	string subject;
	int Evaluation;
public:
	Exam();
	Exam(string a, string b, int i);
	Exam(const Exam& exam);
	void getExam();
	void setFIO(string str);
	void setSubject(string str);
	void setEvaluation(int i);
};