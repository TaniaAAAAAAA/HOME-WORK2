#include<iostream>
#include<ctime>

using namespace std;


//cout << "На шоу Пошук Зірок судді кожному учаснику виставляють оцінку від 0 до";
//cout << "10(оцінка може бути дробовим числом).Знайти підсумкову оцінку кожного";
//cout << "учасника, яка обчислюється як середнє арифметичне, але без врахування найкращої";
//cout << "та найгіршої оцінок.Виконати задачу з розбиттям на функції";
//
//void Fill(double mas[], const int SIZE);
//
//double MAX(double mas[], const int SIZE);
//
//double MIN(double mas[], const int SIZE);
//
//double SER(double mas[], const int SIZE, double max, double min, double Suma, int kil, double Ser);
//
//int main()
//{
//	const int SIZE = 5;
//	double mas[SIZE];
//	double max = 0;
//	double min =0;
//	double Suma = 0;
//	double Ser = 0;
//	int kil = 0;
//	const int kilParticipant = 5;
//
//	for (int i = 0; i < kilParticipant; i++)
//	{
//		cout << "\n             *************** Search Stars *****************\n\n";
//		cout << "<------------- participant "<<i+1<<" ----------------->\n";
//		Fill(mas, SIZE);
//		cout << "---------------------------------------------------\n";
//		max = MAX(mas, SIZE);
//		cout << "           max"<<i+1<<" = " << max << endl;
//
//		min = MIN(mas, SIZE);
//		cout << "           min"<<i+1<<" = " << min << endl;
//
//
//		Ser = SER(mas, SIZE, max, min, Suma, kil, Ser);
//		cout << "<<==========================================>>\n";
//		cout << "           Ser"<<i+1<<" = " << Ser << endl;
//		cout << "<<==========================================>>\n\n\n";
//	}
//
//
//	system("pause");
//	return 0;
//}
//
//
//
//
//
//void Fill(double mas[], const int SIZE)
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << "judge " << i + 1 << "      -->>   ";
//		cin >> mas[i];
//		if (mas[i] < 0 || mas[i] > 10)
//		{
//			cout << "                              -------- Enter 0 to 10           \n";
//			cout << "judge " << i + 1 << "      -->>   ";
//			cin >> mas[i];
//
//		}
//		
//	}
//}
//
//
//
//double MAX(double mas[], const int SIZE)
//{
//	double max = mas[0];
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (mas[i] >= max)
//		{
//			max = mas[i];
//		}
//
//	}
//	return max;
//}
//
//
//
//
//double MIN(double mas[], const int SIZE)
//{
//	double min = mas[0];
//	for (int i = 0; i < SIZE; i++)
//	{
//		if ( mas[i]<= min)
//		{
//			min = mas[i];
//		}
//
//	}
//	return min;
//}
//
//
//double SER(double mas[], const int SIZE, double max, double min, double Suma, int kil, double Ser)
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (mas[i] != min && mas[i] != max)
//		{
//			Suma += mas[i];
//			kil++;
//		}
//
//	}
//	Ser = Suma / kil;
//	return Ser;
//}
//
//


//------------------------------------------------------------------------------------------------------------------------------





//
//cout << "Дано 2 паралельних одновимірних масиви : масив назв товарів(масив рядків)";
//cout << "та масив цін товарів.Впорядкувати масиви за зростанням цін.Вивести назви";
//cout << "та ціни товарів за заростанням та спаданням цін.Використати алгоритм";
//cout << "впорядкування методом бульбашки.";


void Fill(char masName[], const int SIZE2, const int SIZE);

void FillPrice(double masPrice[], const int SIZE2);

void Sort(double masPrice[], const int SIZE2);

void Print(double masPrice[], const int SIZE2, char masName[], const int SIZE);

int main()
{
	const int SIZE = 50;
	const int SIZE2 = 5;
	char masName[SIZE];
	double masPrice[SIZE2];

	cout << "Enter 5 of name --> \nFor end enter '0'\n";
	Fill(masName, SIZE, SIZE2);
	cout << "\n===============================================>>>\n";
	FillPrice(masPrice, SIZE2);



	 Sort( masPrice,  SIZE2);

	  Print( masPrice,  SIZE2,  masName, SIZE);
	system("pause");
	return 0;
}

void Fill(char masName[], const int SIZE2, const int SIZE)
{

	for (int i = 0; i < SIZE2; i++)
	{
		
		cin >> masName[i];
		if (masName[i] == '0')
		{
			break;
		}


	}
}



void FillPrice(double masPrice[], const int SIZE2)
{
	for (int i = 0; i < SIZE2; i++)
	{
		cout << "Enter price --- ";
		cin >> masPrice[i];

	}
}






void Sort(double masPrice[], const int SIZE2)
{
	int tmp = 0;
	for (int j = 0; j < SIZE2 - 1; j++) {
		for (int i = 0; i < SIZE2 - 1; i++) {
			if (masPrice[i] > masPrice[i + 1]) {
				tmp = masPrice[i];
				masPrice[i] = masPrice[i + 1];
				masPrice[i + 1] = tmp;
			}
		}
	}
}





void Print(double masPrice[], const int SIZE2, char masName[], const int SIZE)
{
	for (int i = 0; i < SIZE2; i++)
	{
		cout << " masPrice Sort [" << i << "] = " << masPrice[i] << endl;
		cout << " masName Sort [" << i << "] = " << masName[i] <<endl;

	}
}




