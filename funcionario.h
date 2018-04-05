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
	funcionario(string name_, double salario_, int d_, int m_, int y_ );
	~funcionario();
	void setnome(string nome_);
	void setsalario(float salario_);
	void setdata(int d_,m_y_);
	void exibir();
	
};

#endif