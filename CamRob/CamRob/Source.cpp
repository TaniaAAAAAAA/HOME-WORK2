#include<iostream>
#include<ctime>

using namespace std;
int main()
{
	//Даний двухвимірний масив розмірністю 5X4.Заповніть його випадковими числами із інтервалу - 20.. 20: Поміняти перший і останній рядки використовуючи тимчасовий масив


		/*srand(unsigned(time(NULL)));

		const int ROW = 5;
		const int COL = 4;
		int mas[ROW][COL];

		for (int i = 0; i < ROW; i++)
		{
			for (int j = 0; j < COL; j++)
			{
				mas[i][j] = rand() % 20 + -20;
			}
		}

		for (int i = 0; i < ROW; i++)
		{
			for (int j = 0; j < COL; j++)
			{
				cout<<"   "<<mas[i][j]<<"   " ;
			}
			cout << "\n";
		}



		cout << "=====================================>>>\n";



		for (int i = 0; i < ROW; i++)
		{

			for (int j = 0; j < COL; j++)
			{
				if (i == 0)
				{
					cout << "   " << mas[ROW-1][j] << "   ";

				}
				if (i == ROW - 1)
				{
					cout << "   " << mas[0][j] << "   ";
				}
				if(i!=0&&i!=ROW-1)
				{

					cout << "   " << mas[i][j] << "   ";
				}
			}
			cout << "\n";

		}*/








		//1. Написать профамму, которая вычисляет среднее арифметическое последовательности дробных чисел, вводимых с клавиатуры.
		//	После ввода последнего числа программа должна вывести минимальное и максимальное число.





		//float num0 = 0, num1 = 0, num2 = 0;
		//float suma=0, ser = 0;
		//float min = 0, max = 0;

		//cout << "num0 = ";
		//cin >> num0;

		//cout << "num1 = ";
		//cin >> num1;

		//cout << "num2 = ";
		//cin >> num2;
		//cout << "=============================>>\n";
		//
		//suma = num0 + num1 + num2 ;

		//ser = suma / 3;
		//cout << "SER = " << ser << endl;


		//
		//if (num0 > num1&&num0>num2)
		//{
		//	max = num0;
		//	
		//}
		//
		//if (num1 > num0&&num1 > num2)
		//{
		//	max = num1;

		//}
		//if (num2 > num1&&num2 > num0)
		//{
		//	max = num2;

		//}

		//cout << "=============================>>\n";

		//cout << "max = " << max << endl;
		//
		//if (num0 < num1&&num0 < num2)
		//{
		//	min = num0;

		//}

		//if (num1 < num0&&num1 < num2)
		//{
		//	min = num1;

		//}
		//if (num2 < num1&&num2 < num0)
		//{
		//	min = num2;

		//}
		//cout << "=============================>>\n";
		//cout << "min = " << min << endl;










		//2.  Напишите программу, которая выводит на экран таблицу умножения, например, на число введенное с клавиатуры.

		/*int num = 0;
		cout << "Enter number : ";
		cin >> num;


			for (int i = 0; i < 11; i++)
			{

				cout << "  " << num << " * " << i << " = " << num * i << endl;

			}*/








			//3. Написать программу, которая вводит с клавиатуры одномерный массив из 5 целых чисел, после чего выводит количество ненулевых элементов.
			//Перед вводом каждого элемента должна выводиться подсказка с номером индекса элемента.

			//
			//const int SIZE = 5;
			//int mas[SIZE];
			//int sum = 0;
			//
			//
			//for (int i = 0; i < 5; i++)
			//{
			//	cout << "mas [" << i << "] = ";
			//	cin >> mas[i];
			//	
			//	if (mas[i] != 0)
			//	{
			//		sum++;
			//	}
			//	
			//}
			//
			//cout << "Suma not Zero number = " << sum << endl;






			//
			//4. Написать профамму, которая вычисляет среднее арифметическое ненулевых элементов введенного с клавиатуры массива
			//целых чисел.




			//
			//
			//const int SIZE = 5;
			//int mas[SIZE];
			//int sum = 0, kil=0;
			//
			//
			//for (int i = 0; i < 5; i++)
			//{
			//	cout << "mas [" << i << "] = ";
			//	cin >> mas[i];
			//	
			//	if (mas[i] != 0)
			//	{
			//		sum+=mas[i];
			//		kil++;
			//	}
			//	
			//}
			//cout << "SER = " << sum/kil << endl;
			//










			//5. Написать программу, которая вычисляет среднее арифметическое элементов массива без учета минимального и максимального элементов массива.




			//
			//
			//const int SIZE = 5;
			//
			//int mas[SIZE];
			//int sum = 0;
			//int max = 0, min = 0;
			//for (int i = 0; i < SIZE; i++)
			//{
			//
			//	mas[i] = rand() % 50 + -5;
			//
			//}
			//
			//for (int i = 0; i < SIZE; i++)
			//{
			//
			//	cout << mas[i] << endl;
			//
			//}
			//
			//
			//cout << "=====================================>>>\n";
			//
			//max = mas[0];
			//min = mas[0];
			//for (int i = 0; i < SIZE; i++)
			//{
			//	
			//	if (mas[i] > max)
			//	{
			//		max = mas[i];
			//	}
			//	if (mas[i] < min)
			//	{
			//		min = mas[i];
			//	}
			//
			//
			//
			//}
			//cout << "max = " << max << endl;
			//cout << "min = " << min << endl;
			//cout << "=====================================>>>\n";
			//
			//for (int i = 0; i < SIZE; i++)
			//{
			//
			//	if (mas[i] !=max && mas[i]!=min)
			//	{
			//		sum += mas[i];
			//	}
			//	
			//
			//}
			//
			//cout << "  Suma = " << sum  << endl;
			//
			//cout << "  Ser = " << sum/SIZE << endl;




			//6. Написать программу, которая проверяет, находится ли введенное с клавиатуры число в массиве.Массив заполнять через rand().

			/*srand(unsigned(time(NULL)));

			const int SIZE = 5;

			int mas[SIZE];
			int num = 0;

			for (int i = 0; i < SIZE; i++)
			{

					mas[i] = rand() % 20 + -5;

			}

			for (int i = 0; i < SIZE; i++)
			{

					cout << mas[i] << endl;

			}



			cout << "=====================================>>>\n";


			cout << "Enter number : ";
			cin >> num;
			for (int i = 0; i < SIZE; i++)
			{

				if (num == mas[i])
				{

					cout << "NUMBER "<<i<<" = true "<<endl;
				}
				else
				{

					cout << "NUMBER "<<i<<" = false "<<endl;
				}


			}*/






			//7. Написать программу, которая создает масив с 10 случайных элементов.Сортировать масив методом "пузырька".Отсортированный масив замисать в миссыв sorted.


			//
			//
			//srand(unsigned(time(NULL)));
			//
			//const int SIZE = 10;
			//
			//int mas[SIZE];
			//
			//for (int i = 0; i < SIZE; i++)
			//{
			//
			//	mas[i] = rand() % 20 + -5;
			//
			//}
			//
			//for (int i = 0; i < SIZE; i++)
			//{
			//
			//	cout << mas[i] << endl;
			//
			//}
			//
			//
			//
			//cout << "=====================================>>>\n";
			//
			//
			//
			//for (int i = SIZE-1; i>=1; i--)
			//{
			//	for (int j = 0; j < i; j++)
			//	{
			//		if (mas[j] > mas[j + 1])
			//		{
			//			int tmp = 0;
			//			tmp = mas[j];
			//			mas[j] = mas[j + 1];
			//			mas[j + 1] = tmp;
			//		}
			//	}
			//
			//}
			//
			//cout << "======== sort mas ==========>>\n";
			//
			//
			//for (int i = 0; i < SIZE; i++)
			//{
			//
			//	cout << mas[i] << endl;
			//
			//}




			//8. Написать программу, которая определяет номер строки квадратной матрицы, сумма элементов которой максимальна.

			//
			//srand(unsigned(time(NULL)));
			//
			//const int ROW = 4;
			//const int COL = 4;
			//int mas[ROW][COL];
			//int mas2[ROW];
			//int sum = 0;
			//int index_max = 0;
			//int max1=0;
			//int max = 0;
			//
			//for (int i = 0; i < ROW; i++)
			//{
			//	for (int j = 0; j < COL; j++)
			//	{
			//		mas[i][j] = rand() % 30 + -9;
			//	}
			//}
			//
			//for (int i = 0; i < ROW; i++)
			//{
			//	for (int j = 0; j < COL; j++)
			//	{
			//		cout << "   " << mas[i][j] << "   ";
			//	}
			//	cout << "\n";
			//}
			//
			//cout << "=====================================>>>\n";
			//
			//
			//for (int i = 0; i < ROW; i++)
			//{
			//
			//
			//	for (int j = 0; j < COL; j++)
			//	{
			//		
			//		 sum += mas[i][j];
			//		 max = sum;
			//		
			//	}
			//	cout << "Suma ROW " << i << " = " << sum << endl;
			//	mas2[i] = sum;
			//	//cout << "mas2 = " << sum << endl;
			//	max1 = mas2[0];
			//	if (mas2[i] > max1)
			//	{
			//		index_max = i;
			//	}
			//
			//	cout << "\n";
			//	sum = 0;
			//
			//}
			//
			//cout << "index max =  " << index_max << endl;
			//






			//
			//10. Написать программу, реализующую игру "угадай число".Правила игры следующие.Играют двое.Один задумывает число, второй — угадывает.На каждом шаге угадывающий делает предположение.
			//Игра до N очок.

	srand(unsigned(time(NULL)));
	int score1 = 0, score2 = 0;
	char name[8];
	int num = 0;
	int play1 = 0, Bill = 0;
	const int N = 3;
	bool exit = false;

	cout << "=================== PLAY!!! ====================\n\n";
	cout << "  Enter name player1  : ";
	cin >> name;
	cout << endl;
	while (!exit)
	{
		cout << "======== Playning " << name << " ========>>\n\n";
		play1 = rand() % 6 + 1;

		//cout << "score = " << play1 << endl;

		cout << "       Vgaday number : ";
		cin >> num;
		if (num == play1)
		{
			cout << "\n    *****    TRUE!!!;)     *****  \n\n\n";
			score1++;
		}
		else
		{
			cout << "\n    *****    FALSE :(    *****\n\n\n";
		}
		cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";
		cout << "     " << name << " - " << score1 << "            " << " Bill - " << score2 << endl;
		cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";
		/*if (score1 == 3)
		{
			exit = true;


		}*/
	
		cout << "======== Playning Bill ========>>\n\n";


		Bill = rand() % 6 + 1;

		//cout << "score = " << Bill << endl;

		cout << "         Vgaday number : ";
		cin >> num;
		if (num == Bill)
		{
			cout << "\n    *****    TRUE!!! ;)    *****  \n\n\n";
			score2++;
		}
		else
		{
			cout << "\n    *****    FALSE :(    *****\n\n\n";
		}
		cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";
		cout << "     " << name << " - " << score1 << "            " << " Bill - " << score2 << endl;

		cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";
		if (score2 == 3 || score1 == 3)
		{
			exit = true;


		}

	}

	system("pause");
	return 0;
}