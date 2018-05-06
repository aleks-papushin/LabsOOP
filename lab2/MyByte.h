#pragma once

class Bin
{
	unsigned char m_bin0 : 1;
	unsigned char m_bin1 : 1;
	unsigned char m_bin2 : 1;
	unsigned char m_bin3 : 1;
	unsigned char m_bin4 : 1;
	unsigned char m_bin5 : 1;
	unsigned char m_bin6 : 1;
	unsigned char m_bin7 : 1;

public:
	int Show();
	int ShowPos(int pos);
	int Edit(int pos, int val);

	friend union MyBytes;
};

class Oct
{
	unsigned char m_oct0 : 3;
	unsigned char m_oct1 : 3;
	unsigned char m_oct2 : 2;

public:
	int Show();
	int ShowPos(int pos);
	int Edit(int pos, int val);

	friend union MyBytes;
};

class Hex
{
	unsigned char m_hex0 : 4;
	unsigned char m_hex1 : 4;

public:
	int Show();
	int ShowPos(int pos);
	int Edit(int pos, int val);

	friend union MyBytes;
};

union MyByte
{
	Bin m_bin;
	Oct m_oct;
	Hex m_hex;
	unsigned char m_dec;

public:
	MyByte(unsigned char byte);

	void ShowBin();
	void ShowOct();
	void ShowDec();
	void ShowHex();

	void ShowBinPos(int pos);
	void EditBin(int pos, int val);

	void ShowOctPos(int pos);
	void EditOct(int pos, int val);

	void ShowHexPos(int pos);
	void EditHex(int pos, int val);
};