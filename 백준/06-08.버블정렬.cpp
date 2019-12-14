// ================================================================================================
// 버블정렬
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

void BubbleSort(int[ColSize], int i, int CSiz);
int main(void){
	//입력-선언부
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize;

	i = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	BubbleSort(iNumber, i, CSize);

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

void BubbleSort(int iNumber[ColSize], int i, int CSize)
{// 두 인접한 원소를 검사하여 정렬하는 방법
	int j;
	cout << "버블 정렬" << endl;

	for (i = 0; i < ColSize - 1; i++)
	{
		for (j = 0; j < ColSize - i - 1; j++)
		{

			if (iNumber[j] > iNumber[j + 1])
			{
				Swap_Reference(iNumber[j], iNumber[j + 1]);

			}
		}
	}
}

#endif