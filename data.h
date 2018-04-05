#ifndef DATA_H
#define DATA_H

#include <iostream>

using namespace std;

class data
{
private:
	int dia;
	int mes;
	int ano;
public:
	data();
	data(int d,int m, int y);
	void set data(int d,int m, int y);
	void print();
	~data();
};

#endif