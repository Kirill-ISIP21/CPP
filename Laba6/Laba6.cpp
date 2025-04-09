#include <iostream>
#include <cstdio>
#include "Stroka.h"

using namespace std;

int main(void){
	setlocale(LC_ALL, "ru");		
	Stroka s1((char*)"qwert"), s3, s4(s1), s5;
	s3.vvod();
	s3="asdfg";
	s3.vyvod();
	s5=s1+s3+s4;
	cout<<"length s5 = "<<s5.dlina()<<endl;
	s5.vyvod();
	if(s1==s5)
		cout<<"strings s1 & s5 equal"<<endl;
	else
		if(s1==s4)
			cout<<"strings s1 & s4 equal"<<endl;
	return 0;
}