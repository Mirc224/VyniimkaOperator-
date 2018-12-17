#include "PoleRealnych.h"

PoleRealnych::PoleRealnych(int velkost, int pociatocnyIndex): m_velkost(velkost), m_pociatocnyIndex(pociatocnyIndex), m_poleCisel(new double[velkost])
{
}

double PoleRealnych::operator[](int index)
{
	if (index < (m_velkost - m_pociatocnyIndex) && index >= m_pociatocnyIndex)
	{
		return m_poleCisel[index - m_pociatocnyIndex];
	}
	throw std::invalid_argument("Invalid index");
}



