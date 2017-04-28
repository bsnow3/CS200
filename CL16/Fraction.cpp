#include "Fraction.hpp"

void Fraction::Setup(int n, int d)
{
	m_n = n;
	m_d = d;
}

Fraction& Fraction::operator=(const Fraction& rhs)
{
	m_d = rhs.m_d;
	m_n = rhs.m_n;
	return *this;
}

// Friend functions

ostream& operator<<(ostream& out, Fraction& a)
{
	return out << a.m_n << "/" << a.m_d << endl;
}

bool operator==(Fraction& a, Fraction& b)
{
	if (a.m_n == b.m_n && a.m_d == b.m_d)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Fraction operator*(const Fraction& a, const Fraction& b)
{
	Fraction c;
	c.m_n = a.m_n * b.m_n;
	c.m_d = a.m_d * b.m_d;
	return c;
}