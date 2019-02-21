#include<iostream>
#include<time.h>
#include<locale.h>
#include<Windows.h>
#include<cmath>

#define pi 3.14159265;


using namespace std;

/// Указатели на функции 2019 02 21



/*int summa(int a, int b)
{
	return a + b;
}

int summa2(int a, int b, int c)
{
	return a + b + c;
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int(*ukaz)(int, int) = &summa;
	int(*ukaz)(int, int, int) = &summa2;
	int(*ukaz)(int, int, int) = summa2;  // тоже правильно

	cout << summa << endl;

	system("pause");
}*/


/// 12.	**Реализовать 4 функции на простейшие арифметические операции (+,-,*,/). 
//Каждая функция должна принимать два вещественных числа и возвращать результат 
//операции в виде вещественного числа. В главной функции создайте массив из 4-х указателей на эти функции. 
//Добавьте меню, в котором пользователь может выбрать желаемую операцию. Напишите программу без использования операторов if и switch.


/*double summ(double a, double b)
{
	return a + b;
}

double substraction(double a, double b)
{
	return a - b;
}

double multiplication(double a, double b)
{
	return a * b;
}

double division(double a, double b)
{
	if (b != 0)
	return a / b;
	else return a;
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	double (*ukaz[4])(double, double) = { summ, substraction, multiplication, division };
	int choice = -1;
	double a, b;

	while (true)
	{
		cout << "Enter 0 to summ" << endl;
		cout << "Enter 1 to subs" << endl;
		cout << "Enter 2 to mult" << endl;
		cout << "Enter 3 to div" << endl;

		cin >> choice;
		if (choice < 0 || choice>3) break;
		cout << "Enter a and b -> " << endl;
		cin >> a >> b;
		cout << ukaz[choice](a, b) << endl;
	}

	
	system("pause");
}*/

// var 2

/*double summ(double a, double b)
{
	return a + b;
}

double substraction(double a, double b)
{
	return a - b;
}

double multiplication(double a, double b)
{
	return a * b;
}

double division(double a, double b)
{
	if (b != 0)
	return a / b;
	else return a;
}

int determine(char* operations, char oper)
{
	for (int i = 0; i < 4; i++)
		if (operations[i] == oper)
			return i;
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	double(*ukaz[4])(double, double) = { summ, substraction, multiplication, division };
	char operations[4] = { '+','-','*','/' };
	char oper;
	int k;
	double a, b;

	while (true)
	{
		cout << "Enter a and b" << endl;
		cin >> a >> oper >> b;
		k = determine(operations, oper);
		if (k == -1) break;
		cout << ukaz[k](a, b) << endl;
	}


	system("pause");
}*/


//13.	**Реализовать 3 функции каждая из которых принимает вещественное число и возвращает вещественное число.
//Первая функция вычисляет квадратный корень числа, вторая – куб числа, третья – синус числа.
//В главной функции создайте массив из 3 - х указателей на эти функции.Добавьте меню, в котором пользователь может выбрать желаемую операцию.
//Напишите программу без использования операторов if и switch.


/*double sqrt(double a)
{
	return sqrt(a);
}

double cub(double a)
{
	return pow(a,3);
}

double sinus(double a)
{
	return sin(a*pi/180);
}


int determine(char* operations, char oper)
{
	for (int i = 0; i < 4; i++)
		if (operations[i] == oper)
			return i;
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	double(*ukaz[4])(double) = { sqrt, cub, sinus };
	int choice = -1;
	double a, b;

	while (true)
	{
		cout << "Enter 0 to sqrt" << endl;
		cout << "Enter 1 to cub" << endl;
		cout << "Enter 2 to sinus" << endl;
		
		cin >> choice;
		if (choice < 0 || choice>3) break;
		cout << "Enter a and b -> " << endl;
		cin >> a >> b;
		cout << ukaz[choice](a, b) << endl;
	}

	system("pause");
}*/


/// сортировка 

/*template<typename T>
bool asc(T a, T b) { return a > b; }

template<typename T>
bool desc(T a, T b) { return a > b; }

template<typename T>
void bubbleSort(T *a, int n, bool(*func)(int, int))
{
	for (int pass = 0; pass < n - 1; pass++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (func(a[i], a[i + 1]) == 1)
				swap(a[i], a[i + 1]);
		}
	}

}

template<typename T>
void fillArray(T a[], int n)
{
	for (int *p = a; p < a + n; p++)
		*p=1+rand()%15;
}

template<typename T>
void printArray(T a[], int n)
{
	for (int *p=a; p<a+n; p++)
		cout<<*p<<" ";
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	const int n = 10;
	int a[10];
	
	fillArray(a, n);
	printArray(a, n);
	bubbleSort(a, n, desc);
	printArray(a, n);
	
	system("pause");
}*/



//14.	***Реализовать 3 функции каждая из которых принимает указатель на массив и количество элементов и возвращает указатель на новый массив. 
//Первая функция ищет простые числа и заносит их в новый массив, вторая – все числа кратные трем, третья – все четные числа. Затем напишите функцию, 
//которая принимает указатель на одну из этих функций, а указатель на массив и количество элементов. Добавьте меню, в котором пользователь может выбрать желаемую операцию. 
//Простое число – это число, которое делиться ТОЛЬКО на 1 и на себя (2, 5, 7, 11 и т.д.).



void primeNumbers(int *a, int n) // ищет простые числа
{
	for (int *p=a; p<a+n; p++)
	{
		if (*p > 0 && *p <= 9)
			cout << *p << " ";
	}
}

void multilpe3(int *a, int n) // все числа кратные трем
{
	for (int *p = a; p < a + n; p++)
	{
		if (*p % 3 == 0)
			cout << *p << " ";
	}
}

void evenNumbers(int *a, int n) // ищет простые числа
{
	for (int *p = a; p < a + n; p++)
	{
		if (*p % 2 == 0)
			cout << *p << " ";
	}
}


void menu(int *a, int n, void(*func)(int*, int))
{
	func(a, n);
}


int main()
{
	srand(time(NULL));

	void(*func[3])(int*, int) = { primeNumbers, multilpe3, evenNumbers };
	int a[10] = { 5,6,7,1,3,6,67,12,45,32};
	int choice;

	while (true)
	{
		cin >> choice;
		if (choice < 0 || choice>2) break;
		menu(a, 10, func[choice]);
	}

	system("pause");
	return 0;
}


/// динамический массив

/*int main()
{
	int *p;
	int n;

	cin >> n;			// задали 5

	p = new int[n];  /// int в памяти занимает 4 байта, массив из 5 элементов, т.е. занимает в памяти 4*5=20 байт

	delete[] p;

	system("pause");
	return 0;
}*/