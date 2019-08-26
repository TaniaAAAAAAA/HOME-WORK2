#include<iostream>
#include<ctime>


//Написати рекурсивну функцію, яка отримує ціле число і виводить його у двійковій системі числення

int Fun(int num, int result, int result2, int i)
{
	i++;
	result = num / 2;
	result2 = num - result * 2;
	if (result <= 2)
	{
		return result2;
	}
	 
	Fun(num, result, result2, i);
}


using namespace std;

int main()
{
	int num = 0;
	int result = 0;
	int result2=0;
	int i = 0;
	cout << " Enter num -> ";
	cin >> num;

	//result = Fun( num, result, result2, i);
while(result<=2)
	{
	result = Fun(num, result, result2, i);
		cout << " res = " << result2 << endl;
	}
	system("pause");
	return 0;
}