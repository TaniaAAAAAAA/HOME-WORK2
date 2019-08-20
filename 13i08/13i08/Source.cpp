#include<iostream>
#include<ctime>

using namespace std;

void FillMass(int mas[], int SIZE);
void PrintMass(int mas[], int SIZE);

int VidMass(int mas[], int SIZE);
int RightVidMass(int mas[], int SIZE);

void SortMass(int mas[], int SIZE, int leftmas, int rightmas);
void PrintSortMass(int mas[], int SIZE);


int main() {
	srand(unsigned(time(NULL)));
	const int SIZE = 10;
	int mas[SIZE];
	bool bo = true;
	int leftmas=0, rightmas = 0;

	FillMass( mas, SIZE);
	PrintMass( mas, SIZE);

	VidMass(mas, SIZE);
	cout << "\n  left**  [i] == " << leftmas << endl;
    RightVidMass( mas, SIZE);
	
    SortMass( mas, SIZE,  leftmas, rightmas);
    PrintSortMass( mas, SIZE);
	

	system("pause");
	return 0;
}

void FillMass(int mas[], int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		mas[i] = rand() % 20 + -10;
	}
}


void PrintMass(int mas[], int SIZE) {
	cout << "\n<--------- Mas [] ---------->\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << "       Mas [" << i << "] = " << mas[i] << endl;
	}
}



int VidMass(int mas[], int SIZE) {
	bool bo = true;
	int leftmas = 0;
	
	for (int i = 0; i < SIZE; i++)
	{
		if (bo) {
			if (mas[i] < 0)
			{
				leftmas = i;
				cout << "\n  left  [i] == " << leftmas << endl;
				bo = false;

			}
		}
	}
	cout << "\n  left  [i] == " << leftmas << endl;
	return leftmas;
}
int RightVidMass(int mas[], int SIZE)
{
	int rightmas = 0;
	for (int i = 0; i < SIZE; i++)
	{


		if (mas[i] < 0)
		{
			rightmas = i;
		}
	
	}
	cout << "  right  [i] == " << rightmas << endl;
	return rightmas;
}



void SortMass(int mas[], int SIZE, int leftmas, int rightmas) {

	/*VidMass(mas, SIZE);
	RightVidMass(mas, SIZE);*/

	int tmp = 0;
	for (int j = 0; j < SIZE - 1; j++) {
		for (int i = 0; i < SIZE - 1; i++) {
			if (mas[i] > mas[i + 1]) {  
				tmp = mas[i];         
				mas[i] = mas[i + 1]; 
				mas[i + 1] = tmp;    
			}
		}
	}


}


void PrintSortMass(int mas[], int SIZE) {
	/*VidMass(mas, SIZE);
	RightVidMass(mas, SIZE);*/
	cout << "\n<--------- Mas Sort [] ---------->\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << "       Mas Sort [" << i << "] = " << mas[i] << endl;
	}
}