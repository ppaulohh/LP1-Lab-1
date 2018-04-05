#include "empresa.h"


void
empresa::addfuncionarios(){
	lista.pushback(new funcionario());
	cin >> *lista.end()
	//usar o ponteiro no cin com o ultimo ponteiro para o funcionario pra preencher os dados

}


empresa::empresa(){

}
empresa::~empresa();
	



/*vou usar para imprimir: 
for( int i = 0; i < v.size(); i++ ) {cout << v[i] << " "; }*/



/*std::istream& 
operator>> (std::istream &i, Professor &p) { 
	std::cout << "Entre com o nome do professor: ";
	i >> p.m_nome; 
	std::cout << "Entre com a idade: ";
	i >> p.m_idade;
	return i;
}
*/