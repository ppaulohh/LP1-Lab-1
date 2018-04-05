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
	void setdata(int d,int m, int y);
	void print();
	~data();

	friend std::istream& operator>> (std::istream &i, data &p);
	friend std::ostream& operator<< (std::ostream &o, data const p);
};

#endif
