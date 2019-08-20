#include<iostream>
#include<ctime>
using namespace std;

int Fill (int mas[], int SIZE)
{
	srand(unsigned(time(NULL)));
	for (int i = 0; i < SIZE; i++)
	{
		mas[i] = rand() % 20 + -12;
		
	}
	return mas[SIZE];

}



void Print(int mas[], int SIZE)
{
	cout << "\n========== MAS =================>>>\n";
	for (int i = 0; i < SIZE; i++)
	{

		cout << " !    Mas ["<<i<<"] = " << mas[i]<< endl;
	
	}
	cout << "===============================>>>\n";

}



int Vid(int mas[], int SIZE)
{
	
	for (int i = 0; i < SIZE; i++)
	{
		if (mas[i] < 0)
		{
			return mas[i];
		}

	}
}




void PrintVid(int mas[], int SIZE)
{
	cout << "\n========== MAS Vid ===============>>>\n";
	for (int i = 0; i < SIZE; i++)
	{
		if (mas[i] < 0)
		{
			cout << " ! Mas Vid =" << mas[i] << endl;
		}
	}
		cout << "===============================>>>\n";
	
}



int Seredne(int mas[], int SIZE)
{
	int suma = 0;
	int Ser = 0;
	for (int i = 0; i < SIZE; i++)
	{
		suma += mas[i];
	}
	Ser = suma / SIZE;
	cout << "\n+++++++++  Ser  ++++++++++\n\n";
    cout << "       Ser = " << Ser << endl;
	cout << "\n==========================>>>\n";
	return Ser;
}



int Max(int mas[], int SIZE)
{
	int max = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (mas[i] > max)
		{
			max = mas[i];
		}

	}
	cout << "\n+++++++++  Max  ++++++++++\n\n";
	cout << "        max =" << max << endl;
	cout << "\n==========================>>>\n";
	return max;

}




int main()
{   
	int const SIZE=10;
    int mas[SIZE];

Fill(mas, SIZE);
Print(mas, SIZE);

Vid(mas, SIZE);
PrintVid(mas, SIZE);

Seredne(mas, SIZE);

Max( mas, SIZE);

	system("pause");
	return 0;
}