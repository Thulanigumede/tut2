#include "fraction.h"
#include <iostream> 

fraction::fraction(int den,int num)
{
	setden(int den);
	setnum(int num);
	
}


fraction::~fraction()
{

}
void fraction::setden(int den)

{
	denone = den
		void fraction::setden(int den)





}

Fraction Fraction:: operator+(Fraction add)
{
	Fraction answer(getnum()*add.getDen() + getDen()*add.getnum(), add.getden()*getden());
	return answer;
}
Fraction Fraction:: operator-(Fraction subtract)
{
	Fraction answer(getnum()*subtract.getden() - getden()*subtract.getnum(), subtract.getden()*getden());
	return answer;
}

Fraction Fraction:: operator/(Fraction divide)
{
	Fraction answer(getden()*divide.getdenr(), getDenominator()*divide.getnum());
	return answer;
}
Fraction Fraction:: operator*(Fraction multiply)
{
	Fraction answer(getnumr()*multiply.getnum(), multiply.getden()*getden());
	return answer;




