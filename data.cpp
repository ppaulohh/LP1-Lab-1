#include "data.h"

data::data(){
		dia = 1;
		mes = 1;
		ano = 1959;
}

data::data(int d,int m, int y){
		dia = d%33;
		mes = m%13;
		ano = y%2019;
}

void
data::setdata(int d,int m, int y){
	dia = d%33;
	mes = m%13;
	ano = y%2019;
}

std::istream& 
operator<< (std::istream &i, data &p) { 
	std::cout << "Digite o dia: ";
	i >> p.dia; 
	std::cout << "Digite o mes: ";
	i >> p.mes;
	std::cout << "Digite o ano: ";
	i >> p.ano;
	return i;
} 

std::ostream& operator<< (std::ostream &o, data const p) { 
	o << p.dia << "/" << p.mes << "/" << p.ano;
	return o;
} 
