// ================================================================================================
// 삽입 정렬
// ================================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#define ColSize 10
#define SWAP(x,y,t) ((t) = (x),(x) = (y),(y) = (t)) 

using namespace std;

void Swap_Reference(int &Number1, int &Number2);
void Swap_Address(int *Number1, int *Number2);
void printdata(int iNumber[ColSize], int i, int CSize);
void insertSort(int iNumber[ColSize], int i, int CSize);
int main(void){
	//입력-선언부
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize;

	i = 0;
	CSize = sizeof(iNumber) / sizeof(int);


	insertSort(iNumber, i, CSize);

	printdata(iNumber, i, CSize);
	return 0;
}

void Swap_Reference(int &Number1, int &Number2)
{
	int temp;
	temp = Number1;
	Number1 = Number2;
	Number2 = temp;
}
void Swap_Address(int *Number1, int *Number2)
{
	int temp;
	temp = *Number1;
	*Number1 = *Number2;
	*Number2 = temp;
}

void printdata(int iNumber[ColSize], int i, int CSize)
{
	for (i = 0; i < CSize; i++)
	{
		cout << iNumber[i] << " ";
	}
	cout << endl;
}

void insertSort(int iNumber[ColSize], int i, int CSize)
{
	//삽입 정렬은 자료 배열의 모든 요소를 앞에서부터 차례대로 이미 정렬된 배열 부분과 비교하여, 
	//자신의 위치를 찾아 삽입함으로써 정렬을 완성하는 알고리즘이다.
	int j = 0, temp;

	for (i = 1; i < ColSize; i++)
	{
		temp = iNumber[i];
		for (j = i - 1; j >= 0 && iNumber[j]>temp; j--)
		{
			iNumber[j + 1] = iNumber[j];
		}
		iNumber[j + 1] = temp;
	}
}

#endif