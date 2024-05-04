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
	T1 FirstNumber; //для запоминания изначальных значений
	T2 SecondNumber;
};
template <typename T1, typename T2>
PairOfNumbers<T1, T2>::PairOfNumbers() {
	cout << "Вызвался конструктор по умолчанию" << '\t' << this << endl;
	this->firstNumber = 0;
	this->secondNumber = 0;
	this->FirstNumber = 0;
	this-> SecondNumber = 0;
}
template <typename T1, typename T2>
PairOfNumbers<T1, T2>::PairOfNumbers(T1 first, T2 second) {
	cout << "Вызвался конструктор с параметарми" << '\t' << this << endl;
	this->firstNumber = first;
	this->secondNumber = second;
	this->FirstNumber = first;
	this->SecondNumber = second;
}
template <typename T1, typename T2>
PairOfNumbers<T1, T2>::PairOfNumbers(const PairOfNumbers& a) {
	cout << "Вызвался конструктор копирования" << '\t' << this << endl;
	this->firstNumber = a.FirstNumber;
	this->secondNumber = a.SecondNumber;
}
template <typename T1, typename T2>
double PairOfNumbers<T1, T2>::diff() { //вычитание
	return this->firstNumber - this->secondNumber;
}
template <typename T1, typename T2>
void PairOfNumbers<T1, T2>::addConst(int number) { //добавление константы к int
	this->firstNumber += number;
}
template <typename T1, typename T2>
void PairOfNumbers<T1, T2>::addConst(double number) { //добавление константы к double
	this->secondNumber += number;
}
template <typename T1, typename T2>
void PairOfNumbers<T1, T2>::getInfo() { //вывод на экран
	cout << this->firstNumber << " : " << this->secondNumber;
}
template <typename T1, typename T2>
PairOfNumbers<T1, T2>::~PairOfNumbers() {
	cout << "Вызвался деструктор" << '\t' << this << endl;
}
template <typename T1, typename T2>
void PairOfNumbers<T1, T2>::setFirstNumber(int a) { //инициализация первого числа
	this->firstNumber = a;
	this->FirstNumber = a;
}
template <typename T1, typename T2>
void PairOfNumbers<T1, T2>::setSecondNumber(double a) { //инициализация второго числа
	this->secondNumber = a;
	this->SecondNumber = a;
}
template <typename T1, typename T2>
void PairOfNumbers<T1, T2>:: operator = (const PairOfNumbers& a) { //перегразука оператора =
	cout << "Вызвался оператор = " << endl;
	this->firstNumber = a.FirstNumber;
	this->secondNumber = a.SecondNumber;
}
template <typename T1, typename T2>
void PairOfNumbers<T1, T2>:: operator + (int x) { //перегразука оператора +
	cout << "Вызвался оператор + " << endl;
	firstNumber += x;
}
template <typename T1, typename T2>
void PairOfNumbers<T1, T2>:: operator + (double x) { //перегразука оператора +
	cout << "Вызвался оператор + " << endl;
	secondNumber += x;
}
template <typename T1, typename T2>
void PairOfNumbers<T1, T2>:: operator - (const PairOfNumbers& a) { //перегразука оператора -
	firstNumber -= a.firstNumber;
	secondNumber -= a.secondNumber;
}

template <typename T1, typename T2>
int PairOfNumbers<T1, T2>::returnFirstNumber() { //получение значение первого числа
	return firstNumber;
}
template <typename T1, typename T2>
double PairOfNumbers<T1, T2>::returnSecondNumber() { //получение значение второго числа
	return secondNumber;
}
template <typename T1, typename T2>
ostream& operator<<(ostream& os, PairOfNumbers<T1, T2>& b) //перегрузка вывода
{
	cout << "Вызвалась перегрузка оператора <<" << endl;
	os << b.returnFirstNumber() << " : " << b.returnSecondNumber();
	return os;
}
template <typename T1, typename T2>
istream& operator >> (istream& in, PairOfNumbers<T1, T2>& c) //перегрузка ввода
{
	cout << "Вызвалась перегрузка оператора >>" << endl;
	int first; double second;
	in >> first >> second;
	c.setFirstNumber(first);
	c.setSecondNumber(second);
	return in;
}