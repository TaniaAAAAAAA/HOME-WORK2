#include<iostream>
#include<ctime>



// Написати рекурсивну логічну функцію, яка перевіряє чи переданий
//у функцію масив впорядкований за зростанням(не спаданням).
using namespace std;

template<typename T>
void Fill(T mas[], const int SIZE);
template<typename T>
void Print(T mas[], const int SIZE);


template<typename T>
void Sort(T mas[], const int SIZE);

bool Funk(double mas[], const int SIZE, int i, bool exit)
{
		if (mas[i] <= mas[i+1])
		{
			exit = true;
			if (i == SIZE-1)
			{
				return exit;
			}
			i++;

			Funk(mas, SIZE, i, exit);
		}
		else {
			exit = false;
			return exit;
		}

	
	
}



template<typename T>
void PrintSort(T mas[], const int SIZE);

int main() {
	srand(unsigned(time(NULL)));
	const int SIZE = 10;
	double mas[SIZE];
	bool exit = true;
	
	int i = 0;

	
	Fill( mas,  SIZE);
    Print(mas, SIZE);

	exit = Funk( mas, SIZE, i, exit);
	 cout << " exit = " << exit << endl;



	 Sort(mas, SIZE);
	  PrintSort( mas, SIZE);

	  exit = Funk(mas, SIZE, i, exit);
	  cout << " exit = " << exit << endl;

	
	system("pause");
	return 0;
}

template<typename T>
void Fill(T mas[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		mas[i] = rand() % 22 + -5;
	}
}

template<typename T>
void Print(T mas[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "---- mas [" << i << "] = " << mas[i] << endl;
	}
}



template<typename T>
void Sort(T mas[], const int SIZE)
{
	double tmp = 0;
	for (int j = SIZE - 1; j >=0 ; j--)
	{
		for (int i = SIZE - 1; i >= 0; i--)
		{
			if (mas[i] < mas[i - 1])
			{
				tmp = mas[i];
				mas[i] = mas[i - 1];
				mas[i - 1] = tmp;

			}
		
		}
	}
}

template<typename T>
void PrintSort(T mas[], const int SIZE)
{
	
	for (int i = 0; i < SIZE ; i++)
	{
		cout << "---- MasSort [" << i << "] = " << mas[i] << endl;
	}
}
