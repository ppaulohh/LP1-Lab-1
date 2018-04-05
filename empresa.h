#include "funcionario.h"
#include <vector>
#include <iostream>

using namespace std;

class empresa
{
private:
	string nome;
	int CNPJ;
	std::vector <funcionarios> lista;

public:
	void addfuncionarios();
	empresa();
	~empresa();
	
};

