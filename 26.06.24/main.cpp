#include<iostream>
#include<Windows.h>
#include<string>


// ��� �������(��� ���������)(������������ ����������)
// ������ 1
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
//������ 2
void PerformOperation(int a, int b, int (*operation)(int, int))
{
	int result = operation(a, b);
	std::cout << "��������� ��������: " << result << "\n";
}

// ������ �������, ������� ����� ������������ � �������� ���������
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
	
	// ����� ������� PerformOperation, ��������� ��������� �� ������� Add � �������� ���������

	PerformOperation(5, 3, Add);

	return 0;







}