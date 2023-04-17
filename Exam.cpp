#include "Exam.h"

Exam::Exam()
{
	FIO = "";
	subject = "";
	Evaluation = 0;
}

Exam::Exam(string a, string b, int i)
{
	FIO = a;
	subject = b;
	Evaluation = i;
}

Exam::Exam(const Exam& exam)
{
	FIO = exam.FIO;
	subject = exam.subject;
	Evaluation = exam.Evaluation;
}

void Exam::getExam()
{
	cout << FIO << endl;
	cout << subject << endl;
	cout << Evaluation << endl;
}

void Exam::setFIO(string str)
{
	FIO = str;
}

void Exam::setEvaluation(int i)
{
	Evaluation = i;
}

void Exam::setSubject(string str)
{
	subject = str;
}