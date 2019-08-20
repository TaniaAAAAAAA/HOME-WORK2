#include<iostream>
#include<ctime>

using namespace std;

void Fill_rand(double mas[], const int SIZE);
void Fill_keyboard(double mas[], const int SIZE);

void Print(int mas[], const int SIZE);
void Print(double mas[], const int SIZE);

void Sum(int mas[], const int SIZE);
void Sum(double mas[], const int SIZE);

void Min(int mas[], int size, const int SIZE);
void Min(double mas[],int size, const int SIZE);




int main()
{
	srand(unsigned(time(NULL)));
	const int SIZE = 7;
	double  mas[SIZE];
	int size = 0;
	
	int chois = 0;
	cout << "\n**************** Hell! ********************\n\n";
	cout << " Zapovnutu masuv randomom or with keyboard ?\n1 -random\n2 - keyboard\n\nEnter : ";
	cin >> chois;
	switch (chois)
	{
	case 1:
	{
		 Fill_rand( mas, SIZE);
		 Print( mas, SIZE);
		 Sum( mas, SIZE);
		 cout << "\n\n< ------ Serch min ------ >\n";
		 cout << "--- Enter index kincevogo elemeta : ";
		 cin >> size;
		 Min( mas, size,  SIZE);

		break;
	}
	case 2:
	{
		Fill_keyboard(mas, SIZE);
		Print(mas, SIZE);
		Sum(mas, SIZE);
		cout << "\n\n< ------ Serch min ------ >\n";
		cout << "--- Enter index kincevogo elemeta : ";
		cin >> size;
		Min(mas, size, SIZE);
		break;
	}
	default: cout << "  " << endl;
	}


	system("pause");
	return 0;
}


void Fill_rand(double mas[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		mas[i] = rand() % 54 + -26;
	}
}


void Fill_keyboard(double mas[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cin>>mas[i];
	}
}


void Print(int mas[], const int SIZE)
{
	cout << "<<========== mas =========>>\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << "------ mas [" << i << "] = " << mas[i] << endl;
		cout << "============================\n";
	}
}


void Print(double mas[], const int SIZE)
{ 
	cout << "<<========== mas =========>>\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << "------ mas [" << i << "] = " << mas[i] << endl;
	}
	cout << "============================\n";
}



void Sum(int mas[], const int SIZE)
{
	cout << "\n< ------ Suma ------ >\n";
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += mas[i];
	}
	cout << "****** Suma elementiv = " << sum << endl;
}

void Sum(double mas[], const int SIZE)
{
	cout << "\n< ------ Suma ------ >\n";
	double sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += mas[i];
	}
	cout << "****** Suma elementiv = " << sum << endl;
}


void Min(int mas[], int size, const int SIZE)
{

	int min = mas[0];
	for (int i = 0; i < size; i++)
	{
		if (mas[i] < min)
		{
			min = mas[i];
		}
		
	}
	cout << "------ min = " << min << endl;
}


void Min(double mas[], int size, const int SIZE)
{
	double min = mas[0];
	for (int i = 0; i < size; i++)
	{
		if (mas[i] < min)
		{
			min = mas[i];
		}

	}
	cout << "------ min = " << min << endl;
}
