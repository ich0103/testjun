//=========================================================================================
// �������� ����
//=========================================================================================
// swap �Լ��� �ִ�, �ּڰ� ���ϴ� �ڵ带 �̿��ϸ� ������ ������ �� ����.
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#define ColSize 10

using namespace std;

void Swap_Reference(int &Number1, int &Number2);
void Swap_Address(int *Number1, int *Number2);
void printdata(int iNumber[ColSize], int i, int CSize);
void AscSort(int[ColSize], int i, int CSize);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize;

	i = 0;
	CSize = sizeof(iNumber) / sizeof(int);


	AscSort(iNumber, i, CSize);

	//��º�
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
void AscSort(int iNumber[ColSize], int i, int CSize)
{
	int j;

	for (i = 0; i < ColSize ; i++)
	{
		for (j = 0; j < ColSize; j++)
		{

		}
	}
	cout << endl << endl;
}
#endif