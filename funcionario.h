#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H


#include"data.h"
#include<cstring>

using namespace std;


class funcionario
{
private:
	string nome;
	double salario;
	data admissao;

public:
	funcionario();
	funcionario(string name_, double salario_);
	~funcionario();
	void setnome(string nome_);
	void setsalario(float salario_);
	void setdata();
	friend std::ostream& operator<< (std::ostream &o, funcionario const p);
	friend std::istream& operator>> (std::istream &i, funcionario &p);
};

#endif