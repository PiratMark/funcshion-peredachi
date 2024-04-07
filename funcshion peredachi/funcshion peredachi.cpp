#include <iostream>
#include <locale>

using namespace std;
/*
int DaysCount(int yearBegin, int monthBegin, int dayBegin, int yearCurrent) {
	int y, m, e, d, a, b, c, res = 0; // первое 
	a = yearCurrent - yearBegin; 
	b = a / 4; 
	c = a - b; 
	d = b * 366 + c * 365; 
	d -= (yearCurrent % 4) ? 1 : 0; 

	
	for (e = 1; e < monthBegin; e++) {
		
		if (e == 2) d -= (yearCurrent % 4) ? 28 : 29;
		 
		else if (e == 4 || e == 6 || e == 9 || e == 11) d -= 30;
		else 
			d -= 31;
	};
	if (monthBegin != 12 && a == 1) return dayBegin + d;
	else return d - dayBegin;
}

int main()
{
	cout << DaysCount(2015, 12, 15, 2016) << endl;
}
*/
/*
const int SIZE = 10;
int SUMMA = 0;

int averege(int array[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << array[i][j] << "\t";

			if (array[i][j] % 2 != 0)
			{
				SUMMA += array[i][j];
			}
		}
		cout << endl;
	}
	return SUMMA;
}

void main()
{
	cout << " Array" << endl;
	int array[SIZE][SIZE];
	cout << array[SIZE][SIZE] << endl;
	cout << "Anerege = " << averege(array);
*/

/*
int main() {
	std::locale::global(std::locale(""));
	const int m = 16;
	int KP = 0, KM = 0, KZ = 0;
	int P[16];
	cout << "Введите элементы массива (16 штук) " << endl;
	for (int i = 0; i < m; i++) {      
		cin >> P[i];
		if (P[i] > 0) KP++;
		else if (P[i] < 0) KM++;
		else KZ++;
	}
	for (int i = 0; i < m; i++) {         
		cout << P[i] << " ";
	}
	cout << endl;
	cout << "Количество положительных элементов  = " << KP << endl;
	cout << "Количество отрицательных элементов  = " << KM << endl;
	cout << "Количество нулевых элементов  = " << KZ << endl;

	system("pause");
	return 0;
}

*/


