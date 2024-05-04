#include <iostream>
#include"List.h"
#include"PairOfNumbers.h"
#include<stdlib.h>
#include<vector>

using namespace std;

int main()
{
    srand(time(0));
    system("chcp 1251 > null");

    List<PairOfNumbers<int, double>> list; //список и пар чисел
    list(5);
    for (int i = 0; i < 5; ++i) {
        PairOfNumbers<int, double> tmp(rand() % 100, rand() % 100);
        list[i] = tmp;
    }
    for (int i = 0; i < list.size; ++i)
        cout << list[i] << endl;
    cout << endl << endl;

}

