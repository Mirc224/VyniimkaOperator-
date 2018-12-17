#pragma once
#include <stdexcept>
class PoleRealnych
{
public:
	PoleRealnych(int velkost, int pociatocnyIndex);
	double operator[](int index);
	void pridajCislo(int index, double hodnota) 
	{
		if (index < (m_velkost - m_pociatocnyIndex) && index > m_pociatocnyIndex)
		{
			m_poleCisel[index - m_pociatocnyIndex] = hodnota;
			return;
		}
		throw std::invalid_argument("Invalid index");
		return;
	}
	virtual ~PoleRealnych() { delete[] m_poleCisel; }
private:
	double* m_poleCisel;
	int m_velkost;
	int m_pociatocnyIndex;
};

