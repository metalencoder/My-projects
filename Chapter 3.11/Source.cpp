#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
	int ch=0;
	while (true)
	{
		system("Color 5A");
		cout << "������� ������ �����:";
		char ch;
		int funt, funt1, shil, shil1, pens, pens1, funt2, shil2, pens2, pens3, funt3, shil3;
		cin >> ch >> funt >> ch >> shil >> ch >> pens;
		cout << "������� ������ �����:";
		cin >> ch >> funt1 >> ch >> shil1 >> ch >> pens1;
		cout << "������� ��������:1.��������\n2.���������:";

		funt2 = funt + funt1;
		shil2 = shil + shil1;
		pens2 = pens + pens1;
		funt3 = funt - funt1;
		shil3 = shil - shil1;
		pens3 = pens - pens1;
		int oper;
		cin >> oper;
		switch (oper)
	case 1:
		{
			if (shil2 > 19 || pens2 > 11)
			{
				funt2++;
				shil2 = shil2 - 20;
				shil2++;
				pens2 = pens2 - 12;
				cout << "���������: " << "j" << funt2 << "." << shil2 << "." << pens2 << endl;
			}
			else
			{
				cout << "���������: " << "j" << funt2 << '.' << shil2 << '.' << pens2 << endl;
			}
			break;
	case 2:
		if (funt1 > funt || shil1 > shil || pens1 > pens)
		{
			cout << "������ �����"<<endl;
		}
		else
		{
			int funt4, shil4, pens4;

			if (pens3 < 0 || shil3 < 0)
			{
				shil--;
				pens = pens + 12;
				funt--;
				shil = shil + 20;
				funt4 = funt - funt1;
				shil4 = shil - shil1;
				pens4 = pens - pens1;
				cout << "���������: " << "j" << funt4 << "." << shil4 << "." << pens4 << endl;
			}
			else
			{
				cout << "���������: " << "j" << funt3 << "." << shil3 << "." << pens3 << endl;

			}
			break;
		}
		}
	}
	system("pause");






}
