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
Data::setdata(int d,int m, int y){
	dia = d%33;
	mes = m%13;
	ano = y%2019;
}

void
data::print() {
    cout << day << "/" << month << "/" << year << endl;
};