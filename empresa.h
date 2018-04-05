#include "funcionario.h"
#include <vector>
#include <iostream>

using namespace std;

class empresa
{
private:
	string nome;
	int CNPJ;
	int trabalhadores=0;
	std::vector <funcionarios> lista;
	std::vector<int>::iterator it;

public:
	void addfuncionarios(string nome_, float salario_, int dia_, int mes_, int ano_);
	empresa();
	~empresa();
	
};

