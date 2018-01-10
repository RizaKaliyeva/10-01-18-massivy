#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <time.h>
using namespace std;

#define sizeArr 20

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int z;
	do
	{
		cout << "Kakoe zadanie?" << endl;
		cin >> z;
		switch (z)
		{
		case 1:
		{

			int arrNumber[sizeArr];
			srand(time(NULL));

			for (size_t i = 0; i < sizeArr; i++)
			{
				arrNumber[i] = 1 + rand() % 99;
				cout << arrNumber[i] << endl;
			}

			for (int i = 0; i < sizeArr; i++)
			{
				for (int j = (sizeArr - 1); j > i; j--)
				{
					if (arrNumber[j - 1] > arrNumber[j])
					{
						int temp = arrNumber[j - 1];
						arrNumber[j - 1] = arrNumber[j];
						arrNumber[j] = temp;

					}
				}
			}

			cout << endl;
			for (int a = 0; a < sizeArr; a++)
			{
				cout << arrNumber[a] << endl;
			}


		}
		break;

		case 2:
		{

			int min, temp;
			int arrNumber[sizeArr];
			srand(time(NULL));

			for (size_t i = 0; i < sizeArr; i++)
			{
				arrNumber[i] = 1 + rand() % 99;
				cout << arrNumber[i] << endl;
			}

			for (int i = 0; i < 20; i++)
			{
				min = i;

				for (int j = i + 1; j< 20; j++)
				{
					if (arrNumber[j] < arrNumber[min])
						min = j;
				}
				temp = arrNumber[i];
				arrNumber[i] = arrNumber[min];
				arrNumber[min] = temp;
			}

			cout << endl;
			for (int a = 0; a < sizeArr; a++)
			{
				cout << arrNumber[a] << endl;
			}
		}
		break;

		case 3:
		{
			int arrNumber[sizeArr];
			srand(time(NULL));

			for (size_t i = 0; i < sizeArr; i++)
			{
				arrNumber[i] = 1 + rand() % 99;
				cout << arrNumber[i] << endl;
			}

			for (int i = 1; i < sizeArr; i++)
			{
				int value = arrNumber[i];
				int index = i;

				while ((index > 0) && (arrNumber[index - 1] > value))
				{
					arrNumber[index] = arrNumber[index - 1];
					index--;
				}
				arrNumber[index] = value;
			}


			cout << endl;
			for (int a = 0; a < sizeArr; a++)
			{
				cout << arrNumber[a] << endl;
			}
		}
		break;

		case 4:
		{
			//1.	Используя датчик случайных чисел, заполнить массив из двадцати элементов неповторяющимися числами
			int arr[20];
			for (int i = 0; i < 20; i++)
			{
				arr[i] = 1 + rand() % 99;
				cout << arr[i] << endl;
			}

		}
		break;

		case 5:
		{
			/*2.	Определить:
			a.сумму всех элементов массива;
			b.произведение всех элементов массива;
			c.сумму квадратов всех элементов массива;
			d.сумму шести первых элементов массива;
			e.сумму элементов массива с k1 - го по k2 - й(значения k1 и k2 вводятся  с клавиатуры; k2 > k1);
			f.среднее арифметическое всех элементов массива;
			g.среднее арифметическое элементов массива с s1 - го по s2 - й(значения s1 и s2 вводятся с клавиатуры; s2 > s1).*/
			int sum = 0, pr = 1, k1, k2, sr, schet = 0;
			int arr[20];
			for (int i = 0; i < 20; i++)
			{
				arr[i] = 1 + rand() % 99;
				cout << arr[i] << endl;
			}
			cout << "-------------------------------";
			for (int i = 0; i < 20; i++)
			{
				sum += arr[i];
				pr *= arr[i];
			}
			sr = sum / 20;
			cout << sum << endl << pr << endl;
			cout << "Srednee arifmeticheskoe = " << sr << endl;
			sum = 0;
			for (int i = 0; i < 6; i++)
			{
				sum += arr[i];
			}
			cout << sum << " - " << "Summa 6-ti elementov" << endl;
			sum = 0;
			cout << "Vvedite 2 chisla?";
			cin >> k1;
			cin >> k2;
			for (k1; k1 < k2; k1++)
			{
				sum += k1;
				schet++;
			}
			sr = sum / schet;
			cout << sum << endl;



		}
		break;

		case 6:
		{
			/*3.	Дан массив.Найти:
			a.сумму элементов массива, значение которых не превышает 20;
			b.сумму элементов массива, больших числа a.*/
			int arr[20], sum = 0;
			for (int i = 0; i < 20; i++)
			{
				arr[i] = 1 + rand() % 99;
				cout << arr[i] << endl;
			}
			cout << "-------------------------------" << endl;
			for (int i = 0; i < 20; i++)
			{
				if (arr[i] < 20)
				{
					sum += arr[i];
					cout << arr[i] << endl;
				}
			}
			cout << sum << endl;

		}
		break;

		case 7:
		{
			//4.	Ввести целочисленный массив, состоящий из 9 элементов.Поменять местами максимальный и минимальный  элементы массива
			int arr[9], sum = 0, min, temp, max;
			for (int i = 0; i < 9; i++)
			{
				arr[i] = 1 + rand() % 99;
				cout << arr[i] << endl;
			}
			min = 0;
			max = 0;
			cout << "-------------------------------" << endl;
			for (int i = 0; i < 9; i++)
			{


				if (arr[i] < arr[min])
					min = i;



				if (arr[i] > arr[max])
					max = i;

			}
			int tMin = arr[min];
			int tMam = arr[max];

			arr[min] = tMam;
			arr[max] = tMin;
			for (int a = 0; a < 9; a++)
			{
				cout << arr[a] << endl;
			}

		}
		break;

		case 8:
		{
			//5.	Ввести массив, состоящий из 20 элементов целого типа.Определить  каких элементов больше четных или нечетных по значению.
			int arr[20], chet = 0, nechet = 0;
			for (int i = 0; i < 20; i++)
			{
				arr[i] = 1 + rand() % 99;
				cout << arr[i] << endl;
			}
			cout << "-------------------------------" << endl;
			for (int i = 0; i < 20; i++)
			{
				if (arr[i] % 2 == 0)
					chet++;
				if (arr[i] % 2 != 0)
					nechet++;
			}
			cout << chet << endl << nechet << endl;
			if (chet > nechet)
				cout << "Chetnyh bol'we" << endl;
			else if (chet == nechet)
				cout << "Odinakovoe kol-vo" << endl;
			else
				cout << "Nechetnyh bol'we" << endl;

		}
		break;

		case 9:
		{
			//6.	Задан массив, состоящий из 16 элементов вещественного типа.Определить индексы(местоположение) максимального и минимального элементов
			int arr[16], min, max;
			for (int i = 0; i < 16; i++)
			{
				arr[i] = 1 + rand() % 99;
				cout << i << " - " << arr[i] << endl;
			}
			min = 0;
			max = 0;
			cout << "-------------------------------" << endl;
			for (int i = 0; i < 16; i++)
			{


				if (arr[i] < arr[min])
					min = i;

				if (arr[i] > arr[max])
					max = i;

			}
			cout << "Maksimal'nogo = " << max << endl;
			cout << "Minimal'nogo = " << min << endl;

		}
		break;

		case 10:
		{
			/*18.	Дан список.Посчитайте, сколько в нем различных элементов, не изменяя самого списка.
			Входные данные(3 2 1 2 3)
			Вводится список чисел.Все числа списка находятся на одной строке.
			Дан список.Не изменяя его и не используя дополнительные списки, определите, какое число в этом списке встречается чаще всего.
			Если таких чисел несколько, выведите любое из них.*/
			int arr[5] = { 3,2,1,2,3 }, sch = 0;
			for (int i = 0; i < 5; i++)
			{

			}





		}
		break;

		}
	} while (z <= 0);

	system("pause");
}