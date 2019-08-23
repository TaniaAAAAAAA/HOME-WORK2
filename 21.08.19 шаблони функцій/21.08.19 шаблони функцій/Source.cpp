#include<iostream>
#include<ctime>


//1 Написати програму, яка запитує в користувача дату 
//в форматі DD MM YYYY та дві перевантажені функції, які визначають :
//-скільки днів залишилось до кінця року
////- скільки днів минуло з початку року
//using namespace std;
//
//
//void KilDay(int day, int month, int year, const int a );
//void KilDay(int day, int month, const int b );
//
//int main()
//{
//	int day = 0;
//	int month = 0;
//	int year = 0;
//	int chois = 0;
//	const int a = 1;
//	const int b = 2;
//
//	cout << "````````````````````````````````````````````````\n";
//	cout << "**************************************************\n";
//	cout << "Enter day, month, year : -> \n\n";
//	//cout << "    DD  MM  YYYY    \n";
//	cout << "     DD -> ";
//	cin >> day;
//	cout << "     MM -> ";
//	cin >> month;
//	cout << "     YYYY -> ";
//	cin >> year;
//
//	cout << "\n**************************************************\n";
//	cout << " 1 - How many days are left ? \n";  
//	cout << " 2 - How many days have passed ?\n ";
//	cout << "\n**************************************************\n";
//	cout << " Enter number : ";
//	cin >> chois;
//
//	if (chois == a)
//	{
//		KilDay(day, month, year, a);
//	}
//	else if (chois == b)
//	{
//		KilDay(day, month, b);
//	}
//	else
//	{
//		cout << "     ***          \n";
//	}
//
//
//	
//
//
//	cout << "**************************************************\n";
//
//	system("pause");
//	return 0;
//}
//
//void KilDay(int day, int month, int year, const int a)
//{
//	
//	int mas[13] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int index = 0;
//	index = month - 1;
//	int suma = 0;
//	for (int i = 0; i < index; i++)
//	{
//		suma += mas[i];
//	}
//	suma = suma + day;
//	cout << " By the end of the year remained  = " << 365 - suma <<" day \n"<< endl;
//}
//
//
//
//void KilDay(int day, int month, const int b)
//{
//
//	int mas[13] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int index = 0;
//	index = month - 1;
//	int suma = 0;
//	for (int i = index; i >0 ; i--)
//	{
//		suma += mas[i];
//	}
//	suma = suma + day;
//	cout << "Munylo  = " << suma << " day \n" << endl;
//}












//2. (Написати шаблони функцій для роботи з одновимірним масивом :
//a.введення елементів масиву(або заповнення випадковим чином),
//b.виводу елементів масиву на екран,
//c.пошуку першого входження елемента у масив(індексу входження, -1 - якщо не знайдено)
//d.пошуку останнього входження елемента у масив,
//e.перемішування елементів масиву випадковим чином.
//f.заповнення масиву однаковим заданим значенням
//Протестувати роботу шаблонних функцій для масивів цілого, дробового та символьного типу.

using namespace std;

template <typename T>
void Fill(T mas[], const int SIZE);
template <typename T>
void Print(T mas[], const int SIZE);

template <typename T>
void SerchIndex(T mas[], const int SIZE, T num2);
template <typename T>
void SerchIndexEnd(T mas[], const int SIZE, T num2);

template <typename T>
void FillEqually(T mas[], const int SIZE, T num);
template <typename T>
void PrintEqually(T mas[], const int SIZE, T num);




template <typename T>
void FillRand(T mas[], const int SIZE);

template <typename T>
void PrintRand(T mas[], const int SIZE);

int main()
{
	const int SIZE = 10;
	double mas[SIZE];
	//char mas[SIZE];//щоб перевірити роботу для масива символів розкоментуйте це
	double num = 0;
	double num2 = 0;
	//char num = 0;//щоб перевірити роботу для масива символів розкоментуйте це
	//char num2 = 0;//щоб перевірити роботу для масива символів розкоментуйте це
	srand(unsigned(time(NULL)));

	Fill(mas, SIZE);
    Print(mas, SIZE);

	cout << "===================================>>\n\n";

	cout << "----- Enter element mas -> ";
	cin >> num2;
	SerchIndex(mas, SIZE, num2);
	SerchIndexEnd(mas, SIZE, num2);

	   cout << "===================================>>\n\n";
		FillRand( mas, SIZE);
		PrintRand( mas, SIZE);
		cout << "===================================>>\n\n";

	cout << "----- Enter number -> ";
	cin >> num;
	FillEqually(mas, SIZE, num);
	PrintEqually(mas, SIZE, num);

	system("pause");
	return 0;
}

template <typename T>
void Fill(T mas[], const int SIZE)
{
	
	for (int i = 0; i < SIZE; i++)
	{
		//cin >> mas[i];//щоб перевірити роботу для масива символів розкоментуйте це
		mas[i] = rand() % 25 + -10;//щоб перевірити для дробових, замість -10 пишемо -10.4
	}
}



template <typename T>
void Print(T mas[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << " Mas [" << i << "] = " << mas[i] << endl;
	}
}





template <typename T>
void SerchIndexEnd(T mas[], const int SIZE, T num2)
{
	bool exit = true;
	int chois2 = 0;
	for (int i = SIZE; i > 0; i--)
	{
		if (exit)
		{
			if (mas[i] == num2)
			{
				chois2 = i;
				exit = false;
			}
			else {
				chois2 = -1;
				
			}
			
		}
		
	}
	cout << " Index end = " << chois2 << endl;
}

template <typename T>
void SerchIndex(T mas[], const int SIZE, T num2)
{
	bool exit = true;
	int chois1 = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (exit)
		{
			if (mas[i] == num2)
			{
				chois1 = i;

				exit = false;
			}
			else {
				chois1 = -1;

			
			}
		}

	}
	cout << " Index begin = " << chois1 << endl;
}



template <typename T>
void FillEqually(T mas[], const int SIZE, T num)
{
	for (int i = 0; i < SIZE; i++)
	{
		mas[i] = num;
	}
}




template <typename T>
void PrintEqually(T mas[], const int SIZE, T num)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << " MasEqually [" << i << "] = " << mas[i] << endl;
	}
}









template <typename T>
void FillRand(T mas[],  const int SIZE )
{
	double tmp = 0;
	int diversity = 0;

	for (int i = 0; i < SIZE; i++)
	{
		diversity = rand() % SIZE;
		tmp = mas[diversity];
		mas[diversity] = mas[i];
		mas[i] = tmp;
		
	}
}



template <typename T>
void PrintRand(T mas[], const int SIZE)
{
	cout << "===================================>>\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << " MasRand [" << i << "] = " << mas[i] << endl;
	}
}