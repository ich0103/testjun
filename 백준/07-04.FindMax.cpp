//=========================================================================================
// �ִ񰪰� �ּڰ� ���ϱ�
//=========================================================================================
// if���� ����� ���
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;

void FindMax(int[ColSize], int i, int CSize, int userMax, int userMin);
void FindMin(int[ColSize], int i, int CSize, int userMax, int userMin);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize;
	int userMax, userMin;

	i = 0;
	userMax = -999999;
	userMin = 9999999;
	CSize = sizeof(iNumber) / sizeof(int);


	// ó����
	FindMax(iNumber, i, CSize, userMax, userMin);
	FindMin(iNumber, i, CSize, userMax, userMin);

	return 0;
}
void FindMax(int iNumber[ColSize], int i, int CSize, int userMax, int userMin)
{

	for (i = 0; i < ColSize; i++)
	{

	}
	cout << "Number �迭 �ִ� : " << userMax << endl;
}
void FindMin(int iNumber[ColSize], int i, int CSize, int userMax, int userMin)
{
	for (i = 0; i < ColSize; i++)
	{

	}
	cout << "Number �迭 �ּҰ� : " << userMin << endl;
}
#endif

// ���� �������� ���� �����ڸ� ����� ���
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;

void FindMax(int[ColSize], int i, int CSize, int userMax, int userMin);
void FindMin(int[ColSize], int i, int CSize, int userMax, int userMin);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize;
	int userMax, userMin;

	i = 0;
	userMax = -999999;
	userMin = 9999999;
	CSize = sizeof(iNumber) / sizeof(int);


	// ó����
	FindMax(iNumber, i, CSize, userMax, userMin);
	FindMin(iNumber, i, CSize, userMax, userMin);

	return 0;
}
void FindMax(int iNumber[ColSize], int i, int CSize, int userMax, int userMin)
{

	for (i = 0; i < ColSize; i++)
	{

	}
	cout << "Number �迭 �ִ� : " << userMax << endl;
}
void FindMin(int iNumber[ColSize], int i, int CSize, int userMax, int userMin)
{
	for (i = 0; i < ColSize; i++)
	{

	}
	cout << "Number �迭 �ּҰ� : " << userMin << endl;
}
#endif