#pragma once
#include<iostream>
using namespace std;
template <typename T1, typename T2>
class PairOfNumbers {
	T1 firstNumber;
	T2 secondNumber;

public:
	PairOfNumbers();
	PairOfNumbers(T1, T2);
	PairOfNumbers(const PairOfNumbers&);
	double diff();
	void addConst(int);
	void addConst(double);
	void getInfo();
	~PairOfNumbers();
	void setFirstNumber(int);
	void setSecondNumber(double);
	void operator = (const PairOfNumbers&);
	void operator + (int);
	void operator + (double);
	void operator - (const PairOfNumbers&);
	int returnFirstNumber();
	double returnSecondNumber();
private:
	T1 FirstNumber; //��� ����������� ����������� ��������
	T2 SecondNumber;
};
template <typename T1, typename T2>
PairOfNumbers<T1, T2>::PairOfNumbers() {
	cout << "�������� ����������� �� ���������" << '\t' << this << endl;
	this->firstNumber = 0;
	this->secondNumber = 0;
	this->FirstNumber = 0;
	this-> SecondNumber = 0;
}
template <typename T1, typename T2>
PairOfNumbers<T1, T2>::PairOfNumbers(T1 first, T2 second) {
	cout << "�������� ����������� � �����������" << '\t' << this << endl;
	this->firstNumber = first;
	this->secondNumber = second;
	this->FirstNumber = first;
	this->SecondNumber = second;
}
template <typename T1, typename T2>
PairOfNumbers<T1, T2>::PairOfNumbers(const PairOfNumbers& a) {
	cout << "�������� ����������� �����������" << '\t' << this << endl;
	this->firstNumber = a.FirstNumber;
	this->secondNumber = a.SecondNumber;
}
template <typename T1, typename T2>
double PairOfNumbers<T1, T2>::diff() { //���������
	return this->firstNumber - this->secondNumber;
}
template <typename T1, typename T2>
void PairOfNumbers<T1, T2>::addConst(int number) { //���������� ��������� � int
	this->firstNumber += number;
}
template <typename T1, typename T2>
void PairOfNumbers<T1, T2>::addConst(double number) { //���������� ��������� � double
	this->secondNumber += number;
}
template <typename T1, typename T2>
void PairOfNumbers<T1, T2>::getInfo() { //����� �� �����
	cout << this->firstNumber << " : " << this->secondNumber;
}
template <typename T1, typename T2>
PairOfNumbers<T1, T2>::~PairOfNumbers() {
	cout << "�������� ����������" << '\t' << this << endl;
}
template <typename T1, typename T2>
void PairOfNumbers<T1, T2>::setFirstNumber(int a) { //������������� ������� �����
	this->firstNumber = a;
	this->FirstNumber = a;
}
template <typename T1, typename T2>
void PairOfNumbers<T1, T2>::setSecondNumber(double a) { //������������� ������� �����
	this->secondNumber = a;
	this->SecondNumber = a;
}
template <typename T1, typename T2>
void PairOfNumbers<T1, T2>:: operator = (const PairOfNumbers& a) { //����������� ��������� =
	cout << "�������� �������� = " << endl;
	this->firstNumber = a.FirstNumber;
	this->secondNumber = a.SecondNumber;
}
template <typename T1, typename T2>
void PairOfNumbers<T1, T2>:: operator + (int x) { //����������� ��������� +
	cout << "�������� �������� + " << endl;
	firstNumber += x;
}
template <typename T1, typename T2>
void PairOfNumbers<T1, T2>:: operator + (double x) { //����������� ��������� +
	cout << "�������� �������� + " << endl;
	secondNumber += x;
}
template <typename T1, typename T2>
void PairOfNumbers<T1, T2>:: operator - (const PairOfNumbers& a) { //����������� ��������� -
	firstNumber -= a.firstNumber;
	secondNumber -= a.secondNumber;
}

template <typename T1, typename T2>
int PairOfNumbers<T1, T2>::returnFirstNumber() { //��������� �������� ������� �����
	return firstNumber;
}
template <typename T1, typename T2>
double PairOfNumbers<T1, T2>::returnSecondNumber() { //��������� �������� ������� �����
	return secondNumber;
}
template <typename T1, typename T2>
ostream& operator<<(ostream& os, PairOfNumbers<T1, T2>& b) //���������� ������
{
	cout << "��������� ���������� ��������� <<" << endl;
	os << b.returnFirstNumber() << " : " << b.returnSecondNumber();
	return os;
}
template <typename T1, typename T2>
istream& operator >> (istream& in, PairOfNumbers<T1, T2>& c) //���������� �����
{
	cout << "��������� ���������� ��������� >>" << endl;
	int first; double second;
	in >> first >> second;
	c.setFirstNumber(first);
	c.setSecondNumber(second);
	return in;
}