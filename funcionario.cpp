#include"funcionario.h"

funcionario::funcionario(){
	strcpy(nome, "SemNome");
	salario = 981;
	admissao.setdata(1,1,1);
}

funcionario::funcionario(string name_, double salario_){
	strcpy(nome, nome_);
	salario = salario_;
	cin >> admissao;
}
void
funcionario::setnome(string nome_){
	strcpy(nome, nome_);
}
void
funcionario::setsalario(){
	cout << "digite o salario" << endl;
	cin >> salario;
}
void
funcionario::setdata(){
	cout << "Data de admissao";
	cin >> admissao;
}

std::istream& 
operator>> (std::istream &i, funcionario &p) { 
	std::cout << "Entre com o nome do funcionario: ";
	i >> p.nome; 
	std::cout << "Digite o salario do funcionario: ";
	i >> p.salario;
	cout << "Data de admissao";
	cin >> p.admissao;
	return i;
}

std::ostream& 
operator<< (std::ostream &o, funcionario const p) { 
	o << "Nome: " << p.nome << endl;
	o << "Salario: " << p.salario << endl;
	o << "Data de admissao: " << p.admissao << endl;
	return o;
} 

funcionario::~funcionario(){
}


