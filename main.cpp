#include <iostream>

int main()
{
	int x{ 10 }, y{ 10 };

	// 상수를 가리키는 포인터
	const int* ptr1;

	// 포인터는 옮겨 다닐 수 있음
	ptr1 = &x;
	ptr1 = &y;

	// 역참조는 불가능
	// *ptr1 = 1;



	int* const ptr2 { &x };

	// 상수 포인터

	// 포인터 자체가 상수이므로
	// ptr2 = &y; 는 안된다


	// 역참조는 가능하다
	*ptr2 = 20;




	const int * const ptr3 = &x

	// 포인터를 옮길 수도 없고, 역참조를 해서 값도 못바꾸는 포인터
}