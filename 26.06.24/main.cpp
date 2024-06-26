#include<iostream>
#include<Windows.h>
#include<string>


// тип функции(имя указателя)(спецификация параметров)
// Пример 1
/*
int  Foo1(int a)
{
	return a - 1;
}
int Foo2(int b)
{
	return b * 2;
}
*/
//Пример 2
void PerformOperation(int a, int b, int (*operation)(int, int))
{
	int result = operation(a, b);
	std::cout << "Результат операции: " << result << "\n";
}

// Пример функции, которая будет передаваться в качестве параметра
int Add(int a, int b) 
{
	return a + b;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*
	int (*fooPointer1)(int a);
	fooPointer1 = Foo1;
	std::cout << fooPointer1(5) << "\n";
	*/
	
	// Вызов функции PerformOperation, передавая указатель на функцию Add в качестве параметра

	PerformOperation(5, 3, Add);

	return 0;







}