#include<iostream>
#include<ctime>

using namespace std;


//1. Дано масив цілих чисел.Користуючись вказівниками, 
//поміняти місцями елементи масиву з парними и непарними
//індексами(тобто ті елементи масиву, які стоять на парних місцях, 
//поміняти з елементами, які стоять на непарних місцях).

//
//void Fill(int mas[], const int *pSIZE);
//
//void Print(int mas[], const int *pSIZE);
//
//void Mix(int mas[], const int *pSIZE, int *pTmp);
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	const int SIZE = 6;
//	const int *pSIZE = &SIZE;
//	int mas[SIZE];
//	int tmp = 0;
//	int *pTmp = &tmp;
//
//	 Fill( mas, pSIZE);
//	 Print( mas, pSIZE);
//
//	cout << "<<===================================================>>\n";
//
//	 Mix( mas, pSIZE,  pTmp);
//	 Print(mas, pSIZE);
//
//	system("pause");
//	return 0;
//
//
//}
//
//void Fill(int mas[], const int *pSIZE)
//{
//	for (int i = 0; i < *pSIZE; i++)
//	{
//		mas[i] = rand() % 20 + -5;
//	}
//}
//
//
//
//void Print(int mas[], const int *pSIZE)
//{
//	for (int i = 0; i < *pSIZE; i++)
//	{
//		cout << "mas [" << i << "] = " << mas[i] << endl;
//	}
//}
//
//void Mix(int mas[], const int *pSIZE, int *pTmp)
//{
//	for (int i = 0; i < *pSIZE; i++)
//	{
//		if (i % 2 != 0)
//		{
//			*pTmp = mas[i];
//			mas[i] = mas[i - 1];
//			mas[i - 1] = *pTmp;
//		}
//	}
//}





//----------------------------------------------------------------------------




//
//2. Дано два масиви, впорядкованих по зростанню : А[n] і B[m].
//Сформуйте масив C[n + m], який складається з елементів масивів А і В,
//впорядкованих по зростанню.



void Fill1(int mas1[], const int *pSIZE1);
void Print1(int mas1[], const int *pSIZE1);
void Sort1(int mas1[], const int *pSIZE1, int *pTmp);

void Fill2(int mas2[], const int *pSIZE2);
void Print2(int mas2[], const int *pSIZE2);
void Sort2(int mas2[], const int *pSIZE2, int *pTmp);

void FillMasC(int mas3[], int mas2[], int mas1[], const int *pSIZE1, const int *pSIZE2);
void PrintMasC(int mas3[], int mas2[], int mas1[], const int *pSIZE1, const int *pSIZE2);

void SortMasC(int mas3[], const int *pSIZE1, const int *pSIZE2, int *pTmp);
void PrintSortMasC(int mas3[], const int *pSIZE1, const int *pSIZE2);

int main()
{
	srand(unsigned(time(NULL)));
	const int SIZE1 = 5;
	const int *pSIZE1 =&SIZE1;
	const int SIZE2 = 10;
	const int *pSIZE2 = &SIZE2;
	int tmp = 0;
	int *pTmp = &tmp;

	int mas1[SIZE1];
	int mas2[SIZE2];
	int mas3[SIZE1 + SIZE2];


	cout << "================ Mas 1 ================\n";
	 Fill1( mas1,  pSIZE1);
	 Print1( mas1,  pSIZE1);
	 cout << "============== Mas 1 Sort ============\n";
	  Sort1( mas1, pSIZE1,  pTmp);
	  Print1(mas1, pSIZE1);

	  cout << "================ Mas 2 ================\n";

	 Fill2( mas2,  pSIZE2);
	 Print2(mas2, pSIZE2);

	 cout << "============== Mas 2 Sort ============\n";

	  Sort2( mas2,  pSIZE2,  pTmp);
	  Print2(mas2, pSIZE2);


	  cout << "============== Mas C =================\n";

	   FillMasC( mas3,  mas2,  mas1, pSIZE1,  pSIZE2);
	   PrintMasC( mas3,  mas2,  mas1,   pSIZE1,  pSIZE2);

	   cout << "\n\n\n================================ Mas C Sort  ===================================\n";


	    SortMasC( mas3, pSIZE1,  pSIZE2,  pTmp);
		 PrintSortMasC( mas3,  pSIZE1, pSIZE2);
		 cout << "=================================================================================\n";

	system("pause");
	return 0;
}


void Fill1(int mas1[], const int *pSIZE1)
{
	for (int i = 0; i < *pSIZE1; i++)
	{
		mas1[i] = rand() % 15 + -5;
	}
}



void Print1(int mas1[], const int *pSIZE1)
{
	for (int i = 0; i < *pSIZE1; i++)
	{
		cout << "--- mas1[" << i << "] = " << mas1[i] << endl;
	}
}



void Sort1(int mas1[], const int *pSIZE1, int *pTmp)
{
	for (int j = 0; j < *pSIZE1 - 1; j++) {
		for (int i = 0; i < *pSIZE1 - 1; i++) {
			if (mas1[i] > mas1[i + 1]) {
				*pTmp = mas1[i];
				mas1[i] = mas1[i + 1];
				mas1[i + 1] = *pTmp;
			}
		}
	}
}

void Fill2(int mas2[], const int *pSIZE2)
{
	for (int i = 0; i < *pSIZE2; i++)
	{
		mas2[i] = rand() % 15 + -5;
	}
}



void Print2(int mas2[], const int *pSIZE2)
{
	for (int i = 0; i < *pSIZE2; i++)
	{
		cout << "--- mas2[" << i << "] = " << mas2[i] << endl;
	}
}


void Sort2(int mas2[], const int *pSIZE2, int *pTmp)
{
	for (int j = 0; j < *pSIZE2-1; j++) {
		for (int i = 0; i < *pSIZE2-1; i++) {
			if (mas2[i] > mas2[i + 1]) {
				*pTmp = mas2[i];
				mas2[i] = mas2[i + 1];
				mas2[i + 1] = *pTmp;
			}
		}
	}
}




void FillMasC(int mas3[], int mas2[], int mas1[], const int *pSIZE1, const int *pSIZE2)
{
	for (int i = 0; i < *pSIZE1 ; i++)
	{
		mas3[i] = mas1[i];
	}


	for (int i = *pSIZE1; i < *pSIZE2+ *pSIZE1; i++)
	{
		mas3[i] = mas2[i-*pSIZE1];
	}
}

void PrintMasC(int mas3[], int mas2[], int mas1[], const int *pSIZE1, const int *pSIZE2)
{
	for (int i = 0; i < *pSIZE1 + *pSIZE2; i++)
	{
		cout << "MasC [" << i << "] = " << mas3[i] << endl;
	}
}


void SortMasC(int mas3[], const int *pSIZE1, const int *pSIZE2,  int *pTmp)
{
	for (int j = 0; j < (*pSIZE2+ *pSIZE1) - 1; j++) {
		for (int i = 0; i < (*pSIZE2 + *pSIZE1) - 1; i++) {
			if (mas3[i] > mas3[i + 1]) {
				*pTmp = mas3[i];
				mas3[i] = mas3[i + 1];
				mas3[i + 1] = *pTmp;
			}
		}
	}
}



void PrintSortMasC(int mas3[], const int *pSIZE1, const int *pSIZE2 )
{
	for (int i = 0; i < *pSIZE2 + *pSIZE1; i++)
	{
		cout << "                 Mas C Sort [" << i << "] = " << mas3[i] << endl;
	}
}