#include<cstring>

using namespace std;

class funcionario
{
private:
	string nome;
	double salario;
	data admissao;

public:
	funcionario(string name_, double salario_, int d_, int m_, int y_ );
	~funcionario();
	
};