#include <math.h>
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	char answer = '1';
	do {

		int n, negative;
		bool fl = false;
		cout << "������� ������������������ ����� ����� >> ";
		do
		{

			cin >> n;

		} while (n >= 0);
		negative = n;
		do
		{
			cin >> n;
			if ((n < 0) & (n != negative))
			{
				fl = 1;
				break;
			}
		} while (n != 0);

		if (fl == 1)
		{
			cout << "� ������������������ ������������� ����� �� �����" << endl;
		}
		else
		{
			cout << "� ������������������ ������������� ����� �����" << endl;
		}
		cout << "��������� ��������?(1-�� 0-���): "; cin >> answer;

	} while (answer != '0');

	system("pause");

	return 0;
}