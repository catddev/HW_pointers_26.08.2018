#include <iostream>
#include <iomanip>
#include<math.h>
#include<ctime>

using namespace std;

int main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int tn = 0;

	while (true)
	{
		cout << "Задача № ";
		cin >> tn;

		switch (tn)
		{
		case 1:
		{
			// 1.	**Создать массив из 10 целых чисел. Заполнить массив случайным образом в диапазоне от -45 до 45.
			// Пользуясь указателем(и) на массив целых чисел,
			// посчитать процент положительных и отрицательных элементов массива.

			int a[10];
			int *p;
			double splus = 0;
			double sminus = 0;

			for (p=a; p < a + 10; p++)
			{
				*p = -45 + rand() % 45;
				cout << *p << " ";
				if (*p >= 0) splus++;
				else sminus++;
			}
			cout << endl << endl;
			splus = splus / 10 * 100;
			sminus = sminus / 10 * 100;
			cout << "(+) - " << splus << "%" << endl << "(-) - " << sminus << "%" << endl << endl;
		}
		break;
		case 2:
		{
			// 2.	*Создать массив из 10 целых чисел.Заполнить массив случайным образом.
			// Пользуясь указателем на массив целых чисел,
			// посчитать сумму элементов массива с четными номерами.
			int a[10];
			int *p;
			int sum = 0;
			for (p = a; p < a + 10; p++)
			{
				*p = rand() % 20;
				cout << *p << " ";
				if ((p - a) % 2 == 0) sum += *p;
			}
			cout << endl << endl << sum << endl << endl;
		}
		break;
		case 3:
		{
			// 3.	*Создать массив из 10 целых чисел. Заполнить массив случайным образом.
			// Пользуясь указателем на массив целых чисел,
			// посчитать сумму элементов массива с нечетными номерами.
			int a[10];
			int *p;
			int sum = 0;
			for (p = a; p < a + 10; p++)
			{
				*p = rand() % 20;
				if ((p - a) % 2 != 0)
				{
					sum += *p;
					cout <<"("<< *p << ") ";
				}
				else cout << *p << " ";
			}
			cout << endl << endl << sum << endl << endl;
		}
		break;
		case 4:
		{
			//4.	*Создать массив из 10 целых чисел. Заполнить массив случайным образом.
			// Пользуясь указателем на массив целых чисел,
			// посчитать сумму элементов массива с номерами кратными трем.
			int a[10];
			int *p;
			int sum = 0;
			for (p = a; p < a + 10; p++)
			{
				*p = rand() % 20;
				if ((p - a) % 3 == 0)
				{
					sum += *p;
					cout << "(" << *p << ") ";
				}
				else cout << *p << " ";
			}
			cout << endl << endl << sum << endl << endl;
		}
		break;
		case 5:
		{
			//5.	*Создать массив из 10 целых чисел. Заполнить массив случайным образом.
			// Пользуясь указателем на массив целых чисел,
			// посчитать сумму элементов массива с номерами кратными 7.

			int a[29]; // иначе лишь один индекс кратен 7
			int *p;
			int sum = 0;
			for (p = a; p < a + 29; p++)
			{
				*p = rand() % 20;
				if ((p - a) % 7 == 0)
				{
					sum += *p;
					cout << "(" << *p << ") ";
				}
				else cout << *p << " ";
			}
			cout << endl << endl << sum << endl << endl;
		}
		break;
		case 6:
		{
			//6.	*Создать массив из 20 целых чисел. Заполнить массив случайным образом
			// в диапазоне от 1 до 12.
			// Каждое число это оценка по 12 бальной системе. Пользуясь указателем на массив целых чисел,
			// посчитать процент двоек, троек, четверок и пятерок.
			// Двойка от 1 до 3 включительно, тройка от 4 до 6, четверка от 7 до 9,
			// пятерка от 10 до 12.
			int a[20];
			int *p;
			double two = 0, three = 0, four = 0, five = 0;

			for (p = a; p < a + 20; p++)
			{
				*p = 1 + rand() % 12;
				cout << *p << " ";
				if (*p >= 1 && *p <= 3) two++;
				else if (*p >= 4 && *p <= 6) three++;
				else if (*p >= 7 && *p <= 9) four++;
				else five++;
			}
			cout << endl << endl;

			two = two / 20 * 100;
			three = three / 20 * 100;
			four = four / 20 * 100;
			five = five / 20 * 100;

			cout << "(2) - " << two << "%" << endl;
			cout << "(3) - " << three << "%" << endl;
			cout << "(4) - " << four << "%" << endl;
			cout << "(5) - " << five << "%" << endl << endl;
			
		}
		break;
		case 7:
		{

		}
		break;
		default:
			cout << "нет такой задачи" << endl << endl;
		}
	}
	system("pause");
	return 0;
}