#include <iostream>

#include "myRect.h"
#include "myString.h"
#include "Bochka.h"

#define stop __asm nop

void main()
{
	using namespace std;
	/*
		//������� 1.���������� ������. �������� ���������� ������.
		//����� ������� ������.
		//�������� �������� Class View - (����� �� ������� ����� ������� �
		//������ - ������� Rect � MyString)
		//�������� �������� �� ����������� ����� �� ���� ������ ������ - ���
		//���������� ������������ ������� � ������� ����� ������.

		//����� ����������� ���������� ��� �������� ���������� ������?
		{
			//Rect rect; // ���������� ����������� ��-���������
			stop
		}

		//1a. �������� � ���������� ����������� � ����������� ���
		//������������� ���������� ������. �������� ��������� ������ Rect
		//� ������� ������������ � �����������. ���� ���������� ������
		//������ � ���������� ���������, ��������� - ���� ��� ��
		//�������? ��������� ���������� ������.
		//�������� ������� � ������ ������ �� �����, ����������:
		//� ����� ������ ���������� ����� ������������(������?)?


		stop
		//1�. ��� ��������������� ������� ����������� ������������ ��� ����������
		//������������� ������������� ���������� ������, ��������, �����



		//1�. ���������, ��� ������� ��������� � ������, ����� ������������ �����
		//���������� ��������� �������:

		//Rect rrr(4,3,2,1);

		stop
		//1�. ��������, ���������� � �������� ����� ������ InflateRect(),
		//������� ����������� ������� �������������� �� �������� ����������
		//(��������� ������� �� ������ - ������ ������� �� ���� ��������).
		//���������: �������� � ���������� ������ ����� �� ������ "�������",
		//�� � � ������� Wizard-a Class View. ��� �����: �������� ��������
		//ClassView ���� �������, �������� �������� ����� Rect � �������
		//������ ������ ���� - � ����������� ����������� ���� ��������
		//Add/Add Member Function... � ������� ����������� ���������� ������
		//"����� ��������" Wizard-� ��� �������� � ���������� �����.




		stop


		//������� 2.���������� ������������� � ������� ������.
		//����������� �����������.

		//2�.�������� � ���������� ����������� ����������� � ������ Rect.
		//�������� ������� �� �����, ����������, �����
		//����������� ���������� ��� �������� r1,r2,r3 � r4?
		//���� ����� ���������� ��������� ��������?
			Rect r1; // ����������� �� ���������
			Rect r2(1,2,3,4); // ����������� � �����������
			Rect r3 = r1; // ����������� �����������
			Rect r4(r2); // ����������� �����������
			stop


	  //2�. �������� � ���������� � ������ Rect ����� InflateRect(),
		//������� ��������� ��� ���������, �� ��������� ������ 1, �
		//���������� ������� �������������� �� �� �������� ����������.
		//��� ����� �������� ���������� ������� InflateRect()?
			r1.InflateRect(1,1); // ��� ������� r1
			r2.InflateRect(2,2); // ��� ������� r2
		//����� �� ������� InflateRect() ���������� � ������ �� ���� �������?
			r3.InflateRect(2,2,2,2); // InflateRect() ��� 4� ����������
			r3.InflateRect(3,3); // InflateRect() ��� 2� ����������, � � ��� ��� 4�
			r3.InflateRect(5); // InflateRect(5, 1) ��� 2� ����������, � � ��� ��� 4�
			r3.InflateRect(); // InflateRect(1, 1) ��� 2� ����������, � � ��� ��� 4�
		stop



		//������� 3.������������� �������. ������������.
		{
		Rect r;
		//���������������� ��������� ������. ��������� ������
		//�����������

		//int tmp = r.m_left; // ���� ������ Rect m_left ��������� ��� private � ���������� ��� ������

		//������� � ����� Rect ����� void SetAll(...),
		//������� ����������� ���������� ������ ������������
		//��������. �������� ��������� �����, ��������� ������������.

		r3.SetAll(5, 4, 3, 2);
		r3.SetAll(2, 3, 4, 5);

		//������� � ����� Rect ������ ����� GetAll(...),
		//������� "�������" �������� private-���������� ������.
		//�������� ��������� �����, ��������� ������������.
		int left, right, top, bottom;
		r3.GetAll(left, right, top, bottom);

		stop
		}


		//������� 4.�������� ���������� ������ � �������� ���������
		//�������. ����������� ������� ������ �� ��������. ��������
		//�������� � ������������ ����������� ��� �������� ��������
		//�� �����, ����������: � ����� ������ ���������� ���������
		//� ������������ �����������.
		//�������� ���������� �������
		// Rect BoundingRect(Rect, Rect);
		//������� ��������� ��� ������� ������ Rect �� �������� �
		//���������� ������ ������ Rect, ������� �������� ���������������,
		//� ������� ������� �������� ��������������. ��� ����������
		//�������� ���������� � ����������� ������� ������?

		//���������*: ������ ���� �� ������ ��� ����, ��� �������������
		//����� ��������� "�����������������", �� ���� m_left>m_right ���/�
		//m_top>m_bottom

		{

			Rect r1(1,2,3,4), r2(5,6,7,8), r3, r4;
			r3 = BoundingRect(r1, r2); // ���������� ����������� ����������� ������� ��� 2�� ��������� (r2), ����� ��� ������� (r1)
										// ��� �������� ������� ���������� ����������� � �����������
			stop

				//������� 4�. �������� �������� �� ������.
				//�������� ���������� ������� BoundingRect2, ������� ��������� �� ��
				//������, �������� ��������� �� ������
				//���������� �� ������������ ��� �������� ����������?

				r3 = BoundingRect2(r1, r2); // ������������ ����������� �� ����������
				r4.BoundingRect(r1, r2);
		stop
		}


	*/
	/*
		//������� 5. ��������� �� �����. �������� � ����������
		//����� ���������� ������. ��������� �������� �
		//������������ (�������������) � �����������. ����������: ����� ���
		//������� �� �������� ���������� �����������, � ����� - ����������?
		{
			cout << "Task 5" << endl;
			Rect r1; // ���������� ����������� �� ���������
			Rect*	pR = new Rect(1,2,1,2);	// ���������� ����������� � �����������
			{
				Rect r2(r1); // ���������� ����������� �����������
				Rect arRect[2]; // 2 ���� ���������� ����������� �� ���������
				for(int i=0; i<3; i++)
				{
					static Rect r3 (i,i,i,i) ; // ��� ������ ����� � ���� ���������� ����������� � ����������� (��� ����������� �� ���������� � �������� �� ��������)
					Rect r4(*pR); // ���������� ����������� ����������� � ������ �������� �����
					Rect r5(i,i,i,i); // ���������� ����������� � ����������� � ������ �������� �����
				} // ���������� ���������� 2 ���� (��� r4 � r5)
			} // ���������� ���������� ��� r2 � arRect
			delete pR;	// ���������� ����������
			//stop
		} // ���������� ���������� ��� r1
		*/
		//
		////������� 6.����������� + ���������� = ��������������
		//// ���������. ����� MyString
		//// ����������� ������������ (�������������) � ����������� ����������
		////���������� ������������� � ����������� �������
		////C ������� ��������� ���������� ����� ����������
		////������ � ������������ ������ ��� ������-����� ������
		//{
		//	MyString	str("It's my string!");

		//	//�������� ����� GetString(), ������� ��������� ������ � ���������� ������.
		//	//� ������� cout � ������ GetString() ������������ ������ ������� str
		//	//���������: ���������, ��� ������� ��������� ����������� ����� GetString().

		//	const char* pntrStr = str.GetString();
		//	//*(str.GetString())='W';
		//	cout << pntrStr;
		//}
		////stop


		////6a. ���������������� ��������� ��������. ��������� - �����
		////������������ ��� �������. ���������� ��������� ��������� (���?)
		//	{
		//		MyString str1("The first string!");
		//		MyString str2 = str1; // ���������� ������� ����������� �����������

		//	}
		//	//stop

		////6�. ���������� ����� SetNewString, ������� ����� �������� ������
		//// �� �����
		//	{
		//		MyString str1("The first string!");
		//		str1.SetNewString("The NEW string!");
		//		cout << endl;
		//	}


		////6�. �������� ���������� �������, ������� ����� ��������� �����
		////���������� ���������� �� ������, � ���������� ������ MyString,
		////� ������� ������ ����� ������������� ����������
		//	{
		//		char * arrCh[] = { "ABC", "de", "g" };
		//		MyString str = ConcatStrings(arrCh[0], arrCh[1], arrCh[2], 0);
		//	}


		////������� 7.������ �������� ������.
		//{
		////�������� � ������������������ ������ ar �� ��������
		//// ���� MyString. ��������:
		////��� ������ �����������? N=3
		////MyString arstr[N] = {...
		//		const size_t N = 3;
		//		MyString arstr[N] = { MyString("ABC"), MyString("de"), MyString("f") };

		////�������� - ������ �����-������ ������
		//		for (size_t i = 0; i < sizeof(arstr) / sizeof(MyString); i++)
		//		{
		//			cout << arstr[i].GetString();
		//		}

		////��������� ������ �������, �� ������� ������ ���������������:
		////N=5???
		//		const size_t N1 = 5;
		//		// ���������� 3 ���� ����������� � �����������, ��������� 2 ������� ��������� � ������������� �� ���������
		//		MyString arstr1[N1] = { MyString("ABC"), MyString("de"), MyString("f") };

		////�������� � ������������������ ������ ��������	���� Rect.
		//		Rect arRect[N] = { Rect(1, 2, 1, 2), Rect() }; // ��� 3��� ������� ����� ������ ������ ���������� �� ���������
		//}
		////stop


		////������� 8.������ ���������� �� ������� ������.
		//{
		////�������� � ������������������ ������ arPtr �� ����
		////���������� �� ������� ���� MyString.
		//	MyString * arPtr[5] = {new MyString("abc"), new MyString("de"), new MyString("f")};

		////������ �����-������ ������

		//	for (size_t i = 0; i < sizeof(arPtr) / sizeof(MyString); i++)
		//	{
		//		if(arPtr[i]) cout << arPtr[i]->GetString() << endl;
		//	}

		//	for (size_t i = 0; i < sizeof(arPtr) / sizeof(MyString); i++)
		//	{
		//		delete arPtr[i];
		//	}
		//}
		////stop
		//

		//������� 9.  ������ � ������� ������� ��������� ������:
		//���� ��� ����� ���������� ������. � ����� ����� � ��������� ������
		//������� ���������� ����� (96%), � ������ � ����.
		//������� �������� 1� ���������� ���������� ���������� �� ����� �����
		//� ������ ��������� ��������: �� ������ ��������
		//���������� �� ������ ����� -> ������ �� ������
		//���������� �� ������ ����� -> ������ � ������.
		//��������� ���������� ����� ��������, �� ������� ������������ ������ �
		//������ ����� ������ ������ 50%.
	{
		Bochka spirt(100, 0.96);
		Bochka water(100, 0);

		int counter = 0;

		while (spirt.SpirtVol() > 0.5)
		{
			spirt.Pereliv(water, 1);
			water.Pereliv(spirt, 1);

			counter++;
		}

		cout << "Iterations: " << counter << endl;
		cout << spirt.SpirtVol() << endl;
		cout << water.SpirtVol() << endl;

	}
	
}//end_main