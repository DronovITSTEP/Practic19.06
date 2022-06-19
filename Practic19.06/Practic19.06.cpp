#include <iostream>

using namespace std;
/*

void helloWorld() {
	cout << "Hello World";
}

string helloWorld2() {
	return "Hello World";
}

int summa(int a, int b);

int main()
{
	int a = 4, b = 7;
	cout << summa(a, b) + 36;

}

int summa(int a, int b = 0) {
	return a + b;
}

возвращаемый_тип_функции имя_функции(аргументы_функции) {
	тело_функции;
}

void - ничего не возвращает


void A(int b) {
	int a = 6;
	a += b;
	cout << a << endl;
}

int main() {
	int a = 6;
	cout << a << endl;
	a += 12;
	cout << a << endl;
	a += 2;
	cout << a << endl;
	a += 8;
	cout << a << endl;
	a += 6;
	cout << a << endl;

	A(12);
	A(2);
	A(8);
	A(6);
}



int c = 15;
void f() {
	int c = 5;
	::c += 5;
}

void main() {
	cout << c << endl;
	f();
	cout << c << endl;
}



Написать функцию, выводящую на экран прямоугольник 
с высотой N и шириной K.


void showRec(int N, int K) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			cout << "*";
		}
		cout << endl;
	}
}


Написать функцию, которая возвращает максимальное из 
двух целых чисел, полученных в качестве аргумента.


int maxNumber(int s1, int s2) {
	// первый вариант
	if (s1 > s2)
		return s1;
	else
		return s2;

	//второй вариант
	if (s1 > s2)
		return s1;
	return s2;

	//третий вариант
	return (s1 > s2) ? s1 : s2;

	//четвертый вариант
	return max(s1, s2);
}


Написать функцию, которая сравнивает два целых числа и 
возвращает результат сравнения в виде одного из знаков:
>, < или =.


char znak(int a, int b) {
	if (a == b)
		return '=';
	else if (a > b)
		return '>';
	else if (a < b)
		return '<';
}


Написать функцию, вычисляющую факториал переданного ей числа.


void factorial(int n) {
	int f = 1;
	for (int i = 1; i <= n; i++) {
		f *= i;
	}
	cout << f;
}


Написать функцию, которая проверяет, 
является ли переданное ей число простым? Число называется простым,
если оно делится без остатка только на себя и на единицу.


bool isSimple(int a) {
	int count = 0;
	for (int i = 1; i < a; i++) {
		if (a % i == 0) count++;
	}
	return (count > 1) ? false : true;
}


Написать функцию, которая возвращает куб числа.


int cube(int c) {
	return c * c * c;
}


Написать функцию, которая возвращает истину, 
если передаваемое значение положительное и ложь, 
если отрицательное.


bool isNegativeOrPozitive(int a) {
	return a > 0 ? true : false;
}

void f(int arr[]) {
	arr[1] = 15;
}


Написать функцию, определяющую минимум и максимум 
(значение и номер) элементов передаваемого ей массива.


void maxAndIndex(int arr[]) {
	int maxNumber = arr[0];
	int maxIndex = 0;

	for (int i = 0; i < 4; i++) {
		if (maxNumber < arr[i]) {
			maxNumber = arr[i];
			maxIndex = i;
		}
	}
	cout << "maximum number: " << maxNumber
		<< endl << "maximum index: " << maxIndex;
}


Написать функцию, меняющую порядок следования 
элементов передаваемого ей массива на противоположный.

void reverse(int arr[]) {
	int arr_rev[4];
	for (int i = 0, j = 3; i < 4; i++, j--) {
		arr_rev[i] = arr[j];
	}
	for (int i = 0; i < 4; i++) {
		cout << arr_rev[i] << " ";
	}
}

void reverse2(int arr[], int s) {
	for (int i = 0, j = s - 1; i < s/2; i++, j--) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}


Написать функцию, возвращающую количество простых 
чисел в передаваемом ей массиве.

bool isSimple(int a) {
	int count = 0;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) count++;
	}
	return (count == 2 || a == 1) ? true : false;
}

int counter(int arr[], int s) {
	int count = 0;
	for (int i = 0; i < s; i++) {
		if (isSimple(arr[i])) count++;
	}
	return count;
}


Дан массив чисел размерностью 10 элементов. 
Написать функцию, которая сортирует массив по возрастанию 
или по убыванию, в зависимости от третьего параметра функции. 
Если он равен true, сортировка идет по убыванию, если false, 
то по возрастанию. Первые 2 параметра функции — 
это массив и его размер, третий параметр по умолчанию равен false.

//сортировка по возрастанию
void sortedASC(int arr[], int size){
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size - 1; j++) {
			if (arr[i] > arr[j+1]) {
				int temp = arr[i];
				arr[i] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
//сортировка по убыванию
void sortedDESC(int arr[], int size){
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size - 1; j++) {
			if (arr[i] < arr[j+1]) {
				int temp = arr[i];
				arr[i] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void sortArray(int arr[], int size, bool flag = false) {
	flag ? sortedASC(arr, size) : sortedDESC(arr, size);
}

void show(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main() {
	setlocale(LC_ALL, "");
	
	int arr[5] = { 8,2,7,4,1 };
	sortArray(arr, 5);
	show(arr, 5);
	sortArray(arr, 5, true);
	show(arr, 5);
}
*/

//-------------------------------------------//

//ИГРА "ХОД КОНЯ"

int horizontal, vertical;//координаты коня

//ф-я для проверки хода коня
bool isStepOfHorse(int h, int v){
	if (abs(horizontal - h) == 2 && abs(vertical - v) == 1 &&
		h <= 8 && v <= 8) {
		horizontal = h;
		vertical = v;
	}
	else if (abs(horizontal - h) == 1 && abs(vertical - v) == 2 &&
		h <= 8 && v <= 8) {
		horizontal = h;
		vertical = v;
	}
	else {
		cout << "Нельзя так ходить!!!:(\n\n";
		return false;
	}
	return true;
}

/* ф - я для отображения доски
	
	  1 2 3 4 5 6 7 8
	1|_|_|_|_|_|_|_|_|
	2|_|_|_|_|_|_|_|_|
	3|_|_|_|_|_|_|_|_|
	4|_|_|_|_|_|_|_|_|
	5|_|_|_|_|_|_|_|_|
	6|_|_|_|_|_|_|_|_|
	7|_|_|_|_|_|_|_|_|
	8|_|_|_|_|_|_|_|_|

*/ 
void showBoard(int a, int b) {
	char c = '_';
	char h = 'K';
	cout << "  ";
	for (int i = 1; i < 9; i++) {
		cout << i << " ";
	}
	cout << endl;

	for (int i = 1; i < 9; i++) {
		cout << i;
		for (int j = 1; j < 9; j++) {
			cout << '|';
			(a == i && b == j) ? cout << h : cout << c;
		}
		cout << '|' << endl;
	}
}

//первоначальное меню
void main_menu() {
	cout << "Игра: Ход коня\n\n";
	showBoard(0, 0);
	cout << "Куда поставить коня?\n"
		<< "Число по горизонтали: ";
	cin >> horizontal;
	cout << "Число по вертикали: ";
	cin >> vertical;
	showBoard(horizontal, vertical);
}
int main() {
	setlocale(LC_ALL, "");	
	main_menu();
	int h, v;
	do {
		cout << "Куда сходить конем?\n";
		cout << "Число по горизонтали: ";
		cin >> h;
		cout << "Число по вертикали: ";
		cin >> v;
		system("cls");
		isStepOfHorse(h, v) ? showBoard(horizontal, vertical) : showBoard(horizontal, vertical);
	} while (h > 0 && v > 0);
}
