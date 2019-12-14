// ================================================================================================
// 칵테일 정렬
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
void CocktailSort(int iNumber[ColSize], int i, int CSize);

int main(void){
	//입력-선언부
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize;

	i = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	CocktailSort(iNumber, i, CSize);
	//출력부
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

// 칵테일 정렬은 양방형 거품 정렬 또는 shaker sort등으로 불리는 거품 정렬의 변형임
// 거품 정렬과는 달리 매 라운드마다 리스트의 순서를 변경
void CocktailSort(int iNumber[ColSize], int i, int CSize)
{
	int left, right, shift;

	left = 0;
	right = ColSize - 1;


	while (left < right)
	{
		for (i = left; i<right; i++)
		{
			if (iNumber[i]>iNumber[i + 1])
			{
				cout << "왼쪽부터시작" << endl;

				swap(iNumber[i], iNumber[i + 1]);
				shift = i; // 마지막으로 교환이 발생한 인덱스 저장
			}
		}
		right = shift; // 마지막 교환 인덱스 값을 right값에 대입

		for (i = right; i > left; i--)
		{
			if (iNumber[i] < iNumber[i - 1])
			{
				cout << "오른쪽부터시작" << endl;

				swap(iNumber[i], iNumber[i - 1]);

				shift = i; // 마지막으로 교환이 발생한 인덱스 저장
			}
		}
		left = shift; // 마지막 교환 인덱스 값을 left값에 대입
	}


}
#endif
