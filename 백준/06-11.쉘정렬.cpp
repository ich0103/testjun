// ================================================================================================
// 쉘 정렬
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
void shellSort(int iNumber[ColSize], int i, int CSize);
int main(void){
	//입력-선언부
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize;

	i = 0;
	CSize = sizeof(iNumber) / sizeof(int);
	shellSort(iNumber, i, CSize);

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

void shellSort(int iNumber[ColSize], int i, int CSize)
{
	int j, temp, key;
	key = CSize;
	do
	{
		key = key / 3 + 1; // 다음 간격을 k/3+1로 구함
		cout << "정렬 간격: " << key << endl;

		for (i = 0; i < key; i++)		//i는 각 묶음의 첫 인덱스가 된다.
		{
			for (i = i + key; i < CSize; i += key)
			{
				//첫번째 원소를 정렬된 것으로 간주하기 때문에 첫번째 인덱스는 i+key로 됨
				temp = iNumber[i];
				for (j = i - key; iNumber[j] >temp && j >= 0; j -= key)
				{
					iNumber[j + key] = iNumber[j];
				}
				iNumber[j + key] = temp;
			}

		}

	} while (key != 1);	// 

}

#endif