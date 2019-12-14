//=========================================================================================
// 최댓값과 최솟값 구하기
//=========================================================================================
// if문을 사용한 경우
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;

void FindMax(int[ColSize], int i, int CSize, int userMax, int userMin);
void FindMin(int[ColSize], int i, int CSize, int userMax, int userMin);

int main(void){
	//입력-선언부
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize;
	int userMax, userMin;

	i = 0;
	userMax = -999999;
	userMin = 9999999;
	CSize = sizeof(iNumber) / sizeof(int);


	// 처리부
	FindMax(iNumber, i, CSize, userMax, userMin);
	FindMin(iNumber, i, CSize, userMax, userMin);

	return 0;
}
void FindMax(int iNumber[ColSize], int i, int CSize, int userMax, int userMin)
{

	for (i = 0; i < ColSize; i++)
	{

	}
	cout << "Number 배열 최댓값 : " << userMax << endl;
}
void FindMin(int iNumber[ColSize], int i, int CSize, int userMax, int userMin)
{
	for (i = 0; i < ColSize; i++)
	{

	}
	cout << "Number 배열 최소값 : " << userMin << endl;
}
#endif

// 삼항 연산자인 조건 연산자를 사용한 경우
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;

void FindMax(int[ColSize], int i, int CSize, int userMax, int userMin);
void FindMin(int[ColSize], int i, int CSize, int userMax, int userMin);

int main(void){
	//입력-선언부
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize;
	int userMax, userMin;

	i = 0;
	userMax = -999999;
	userMin = 9999999;
	CSize = sizeof(iNumber) / sizeof(int);


	// 처리부
	FindMax(iNumber, i, CSize, userMax, userMin);
	FindMin(iNumber, i, CSize, userMax, userMin);

	return 0;
}
void FindMax(int iNumber[ColSize], int i, int CSize, int userMax, int userMin)
{

	for (i = 0; i < ColSize; i++)
	{

	}
	cout << "Number 배열 최댓값 : " << userMax << endl;
}
void FindMin(int iNumber[ColSize], int i, int CSize, int userMax, int userMin)
{
	for (i = 0; i < ColSize; i++)
	{

	}
	cout << "Number 배열 최소값 : " << userMin << endl;
}
#endif