#include"funcionario.h"

funcionario::funcionario(){
	strcpy(nome, "SemNome");
	salario = 981;
	admissao.setdata(1,1,1);
}

funcionario::funcionario(string name_, double salario_, int d_, int m_, int y_ ){
	strcpy(nome, nome_);
	salario = salario_;
	admissao.setdata(d_,m_,y_);
}
void
funcionario::setnome(string nome_){
	strcpy(nome, nome_);
}
void
funcionario::setsalario(float salario_){
	salario = salario_;
}
void
funcionario::setdata(int d_,m_y_){
	admissao.setdata(d_,m_,y_);
}
void
funcionario::exibir(){
	cout<< "Nome:" << nome << endl;
	cout<< "Salario:" << salario << endl;
	cout<< "Data de admissao" << admissao.print(); << endl;
}

funcionario::~funcionario(){
}
