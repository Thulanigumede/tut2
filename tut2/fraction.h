#pragma once
class fraction
{
public:
	int denone, numone
	fraction(int,int);
	~fraction();
		void print();
	void setden(int);
		void getden(int);
		void setnum(int);
		void getnum(int);
		fraction operator+(fraction add)
			fraction operator-(fraction subtract)
			fraction operator*(fraction multiply)
			fraction operator/(fraction divide)
};

