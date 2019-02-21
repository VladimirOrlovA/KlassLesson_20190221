#include<iostream>
#include<time.h>
#include<locale.h>
#include<Windows.h>



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

double summ(double a, double b)
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
}