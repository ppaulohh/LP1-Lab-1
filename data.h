#include <iostream>

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