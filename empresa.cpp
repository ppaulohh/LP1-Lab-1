#include "empresa.h"


void
empresa::addfuncionarios(){
	lista.pushback(new funcionario());
	cin >> *lista.end()
	//usar o ponteiro no cin com o ultimo ponteiro para o funcionario pra preencher os dados

}

void 
setname(){
	cout << "insira o nome da empresa" << endl;
	cin >> nome;
}

void 
setcnpj(int cnpj_){
	cnpj = cnpj_;
}



empresa::empresa(){

}
empresa::~empresa();



std::ostream& 
operator<< (std::ostream &o, empresa const p) { 
	o << "Nome: " << p.nome << endl;
	o << "CNPJ: " << p.cnpj << endl;
	o << "Colaboradores: " << endl << for( int i = 0; i < lista.size(); i++ ) {cout << lista[i] << endl ; } << endl;
	return o;
} 	



