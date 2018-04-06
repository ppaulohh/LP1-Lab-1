#include "funcionario.h"
#include <vector>
#include <iostream>

using namespace std;

class empresa
{
private:
	string nome;
	int cnpj;
	std::vector <funcionarios> lista;

public:
	void setname(string nome_);
	void addfuncionarios();
	void setcnpj(int cnpj_);
	empresa();
	~empresa();
	friend std::ostream& operator<< (std::ostream &o, data const p);
};

