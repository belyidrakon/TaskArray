// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

const int n = 20;

void Finc1(int []);
int Func2(int[], char);
void Func3(int[], char);
void Func4(int[]);
void Func5(int[]);
void Func6(int[]);
void Func7(int[]);
void Func8(int[]);
void Func9(int[]);
void Func10(int[]);
void Func11(int[]);
void Func12(int[]);
void Func13(int[]);
void Func14(int[]);
void Func15(int[]);

int main()
{
	setlocale(0, "");
	srand(time(0));

	
	int arr[n];
	Finc1(arr);

	int choice;
	do {
		
		cout << "Сделайте свой выбор(1-15): ";
		cin >> choice;
		cin.get();
		if (choice == 1) {
			Finc1(arr);
		}
		else if (choice == 2) {
			char symbol;
			while (true) {
				system("cls");
				cout << "Введите параметр: ";
				cin >> symbol;
				if ((int)symbol >= 97 && (int)symbol <= 103)
					break;
				else cout << "Неправильный символ!\n";
			}
			cout << Func2(arr, symbol) << endl;;
		}

		

	} while (choice);

	
	

    return 0;
}

void Finc1(int arr[]) {
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 51;
}
int Func2(int arr[], char symbol) {

	switch (symbol) {

	case 'a': {
		int x = 0;
		for (int i = 0; i < n; i++)
			x += arr[i];
		return x;
	}break;
	case 'b': {
		int x = 1;
		for (int i = 0; i < n; i++)
			x *= arr[i];
		return x;
	}break;
	case 'c': {
		int x = 1;
		for (int i = 0; i < n; i++)
			x = x * (arr[i]*arr[i]);
		return x;
	}break;
	case 'd': {
		int x = 0;
		for (int i = 0; i < 6; i++)
			x += arr[i];
		return x;
	}break;
	case 'e': {
		int num1;
		int num2;
		int x = 0;
		while (num1 >= num2) {
			cout << "Введите начальную границу диапазона: ";
			cin >> num1;
			cout << "Введите конечную границу диапазона: ";
			cin >> num2;
			system("cls");
			if (num1 >= num2)
				cout << "Неправильный диапазон\n";
		}
		while (num1 < num2) {
			x += arr[num1++];
		}
		return x;
	}break;
	case 'f': {
		int x = 0;
		int count = 0;
		for (int i = 0; i < n; i++) {
			x += arr[i];
			count++;
		}
		return x / count;
	}break;
	case 'g': {
		int num1;
		int num2;
		int x = 0;
		while (num1 >= num2) {
			cout << "Введите начальную границу диапазона: ";
			cin >> num1;
			cout << "Введите конечную границу диапазона: ";
			cin >> num2;
			system("cls");
			if (num1 >= num2)
				cout << "Неправильный диапазон\n";
		}
		int count = num2 - num1;
		while (num1 < num2) {
			x += arr[num1];
		}
		return x / count;
	}break;
	default: return 0;

	}

}
void Func3(int arr[], char symbol) {
	
	int sum = 0;
	if (symbol == 'a') {
		for (int i = 0; i < n; i++) {
			if (arr[i] < 20)
				sum += arr[i];
		}
		cout << "Сумма меньше чисел меньше 20: " << sum << endl;
	}
	else if (symbol == 'b') {
		int a;
		cout << "Введите a: ";
		cin >> a;
		for (int i = 0; i > n; i++)
			if (arr[i] > a)
				sum += arr[i];
		cout << "Сумма чисел больше " << a << ": " << sum << endl;
	}
	cin.get();
	system("cls");

}
void Func4(int arr[]) {
	int max = INT_MIN;
	int min = INT_MAX;
	int MaxIndex = 0;
	int MinIndex = 0;


	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			MaxIndex = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			MinIndex = i;
		}
	}
	swap(arr[MinIndex], arr[MaxIndex]);
}
void Func5(int arr[]) {

	int chet = 0;
	int nechet = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] % 2 == 0)
			chet++;
		else
			nechet++;
	}
	if (chet > nechet)
		cout << "Нечетных больше\n";
	else if (nechet > chet)
		cout << "Четных больше\n";
	else
		cout << "Значения равны\n";

	cin.get();
	system("cls");

}
void Func6(int arr[]) {
	int max = INT_MIN;
	int min = INT_MAX;
	int MaxIndex = 0;
	int MinIndex = 0;


	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			MaxIndex = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			MinIndex = i;
		}
	}
	cout << "Макс индекс - " << MaxIndex << endl;
	cout << "Мин индекс - " << MinIndex << endl;
	cin.get();
	system("cls");
}
void Func7(int arr[]) {

	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] % 2 == 0 && arr[i] > 0)
			sum += arr[i];
	}

		cout << "Сумма: " << sum << endl;
		cin.get();
		system("cls");
}
void Func8(int arr[]) {
	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < n; i++) 
		cin >> arr[i];

	for (int i = 0; i < n; i++) {
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (arr[j] < arr[j + 1])
				swap(arr[j], arr[j + 1]);
}
void Func9(int arr[]) {

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);

	for (int i = 0; i < 9; i++)
		for (int j =10; j < 19; j++)
			if (arr[j] < arr[j + 1])
				swap(arr[j], arr[j + 1]);

}
void Func10(int arr[]) {
	int min = arr[0];
	int max = arr[0];
	int MinIndex = 0;
	int MaxIndex = 0;
	int count = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
			MinIndex = i;
		}
		if (arr[i] > max) {
			max = arr[i];
			MaxIndex = i;
		}
	}
	if (MinIndex > MaxIndex) {
		swap(MinIndex, MaxIndex);
	}
	for (;MinIndex < MaxIndex;MinIndex++)
		count++;
	cout <<"Кол-во чисел: " << count << endl;
}
void Func11(int arr[]) {
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << "Введите значение: ";
	int value;
	cin >> value;

	for (int i = 0; i < n; i++) {
		if (arr[i] == value) {
			if(i!=0)
			cout << "Левый индекс: " << i - 1 << endl;

			else if(i!=19)
			cout << "Правый индекс: " << i + 1 << endl;
		}

	}

}
void Func12(int arr[]) {
	int count=0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] % 3 == 0) {
			arr[i] = 0;
			count++;
		}
		cout << "Кол-во чисел: " << count << endl;
		cin.get();
		system("cls");
	}
}
void Func13(int arr[]) {
	int sum = 0;
	int product = 1;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (i % 2 == 0)
			sum += arr[i];
		if (arr[i] % 2 == 1)
			product *= arr[i];
	}
	cout << "Сумма: " << sum << endl;
	cout << "Произведение: " << product << endl;
	cin.get();
	system("cls");
}
void Func14(int arr[]) {

	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < arr[19])
			count++;
		sum += arr[i];
	}
	cout << "Кол-во чисел меньше " << arr[19] << ": " << endl;
	cout << "Сумма чисел меньше " << arr[19] << ": " << sum << endl;
	cin.get();
	system("cls");
}
void Func15(int arr[]) {
	int start = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > start)
			start = arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0)
			arr[i] = start;
	}
}