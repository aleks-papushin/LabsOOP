#include <iostream>

#include "MyByte.h"

using namespace std;

int Bin::Show()
{
	cout <<
		static_cast<int>(m_bin7) <<
		static_cast<int>(m_bin6) <<
		static_cast<int>(m_bin5) <<
		static_cast<int>(m_bin4) <<
		static_cast<int>(m_bin3) <<
		static_cast<int>(m_bin2) <<
		static_cast<int>(m_bin1) <<
		static_cast<int>(m_bin0) <<
		endl;

	return 0;
}

int Bin::ShowPos(int pos)
{
	if (pos < 0 || pos > 7)
	{
		cout << "You should only enter position values between 0 and 7" << endl;
	}
	else
	{
		cout << ((*(reinterpret_cast<unsigned char*>(this)) & (0x01 << 7 - pos)) >> 7 - pos) << endl; // switch
	}
	
	return 0;
}

int Bin::Edit(int pos, int val)
{
	if (pos < 0 || pos > 7)
	{
		cout << "You should only enter position values between 0 and 7" << endl;
	}
	else if (val < 0 || val > 1)
	{
		cout << "You should only enter single bit value either 0 or 1" << endl;
	}
	else
	{
		switch (pos)
		{
		case 0:
			m_bin7 = val;
			break;
		case 1:
			m_bin6 = val;
			break;
		case 2:
			m_bin5 = val;
			break;
		case 3:
			m_bin4 = val;
			break;
		case 4:
			m_bin3 = val;
			break;
		case 5:
			m_bin2 = val;
			break;
		case 6:
			m_bin1 = val;
			break;
		case 7:
			m_bin0 = val;
			break;
		}
	}

	return 0;
}

int Oct::Show()
{
	cout <<
		static_cast<int>(m_oct2) <<
		static_cast<int>(m_oct1) <<
		static_cast<int>(m_oct0) <<
		endl;

	return 0;
}

int Oct::ShowPos(int pos)
{
	if (pos < 0 || pos > 2)
	{
		cout << "Position should be between 0 and 2" << endl;
	}
	else if (pos == 0)
	{
		cout << static_cast<int>(m_oct2) << endl;
	}
	else if (pos == 1)
	{
		cout << static_cast<int>(m_oct1) << endl;
	}
	else
	{
		cout << static_cast<int>(m_oct0) << endl;
	}
	return 0;
}

int Oct::Edit(int pos, int val)
{
	if ((pos < 0 || pos > 2) || (val < 0 || val > 7) || (pos == 0 && val > 3))
	{
		cout << "Incorrect input data" << endl;
	}
	else
	{
		if (pos == 0)
		{
			m_oct2 = val;
		}
		else if (pos == 1)
		{
			m_oct1 = val;
		}
		else
		{
			m_oct0 = val;
		}
	}

	return 0;
}

int Hex::Show()
{
	cout << hex <<
		static_cast<int>(m_hex1) <<
		static_cast<int>(m_hex0) <<
		endl << dec;

	return 0;
}

int Hex::ShowPos(int pos)
{

	if (pos < 0 || pos > 1)
	{
		cout << "Position should be between 0 and 1" << endl;
	}
	else if (pos == 0)
	{
		cout << hex << static_cast<int>(m_hex1) << endl << dec;
	}
	else
	{
		cout << hex << static_cast<int>(m_hex0) << endl << dec;
	}

	return 0;
}

int Hex::Edit(int pos, int val)
{
	if ( ( pos < 0 || pos > 1 ) || ( val < 0 || val > 15 ) )
	{
		cout << "Incorrect input data" << endl;
	}
	else if (pos == 0)
	{
		m_hex1 = val;
	}
	else m_hex0 = val;

	return 0;
}

MyByte::MyByte(unsigned char byte)
{
	m_dec = byte;
}

void MyByte::ShowBin()
{
	m_bin.Show();
}

void MyByte::ShowDec()
{
	cout << static_cast<int>(m_dec) << endl;
}

void MyByte::ShowOct()
{
	m_oct.Show();
}

void MyByte::ShowHex()
{
	m_hex.Show();
}

void MyByte::ShowBinPos(int pos)
{
	m_bin.ShowPos(pos);
}

void MyByte::EditBin(int pos, int val)
{
	m_bin.Edit(pos, val);
}

void MyByte::ShowOctPos(int pos)
{
	m_oct.ShowPos(pos);
}

void MyByte::EditOct(int pos, int val)
{
	m_oct.Edit(pos, val);
}

void MyByte::ShowHexPos(int pos)
{
	m_hex.ShowPos(pos);
}

void MyByte::EditHex(int pos, int val)
{
	m_hex.Edit(pos, val);
}