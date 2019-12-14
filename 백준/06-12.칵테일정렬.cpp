// ================================================================================================
// Ĭ���� ����
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
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize;

	i = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	CocktailSort(iNumber, i, CSize);
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

// Ĭ���� ������ ����� ��ǰ ���� �Ǵ� shaker sort������ �Ҹ��� ��ǰ ������ ������
// ��ǰ ���İ��� �޸� �� ���帶�� ����Ʈ�� ������ ����
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
				cout << "���ʺ��ͽ���" << endl;

				swap(iNumber[i], iNumber[i + 1]);
				shift = i; // ���������� ��ȯ�� �߻��� �ε��� ����
			}
		}
		right = shift; // ������ ��ȯ �ε��� ���� right���� ����

		for (i = right; i > left; i--)
		{
			if (iNumber[i] < iNumber[i - 1])
			{
				cout << "�����ʺ��ͽ���" << endl;

				swap(iNumber[i], iNumber[i - 1]);

				shift = i; // ���������� ��ȯ�� �߻��� �ε��� ����
			}
		}
		left = shift; // ������ ��ȯ �ε��� ���� left���� ����
	}


}
#endif
