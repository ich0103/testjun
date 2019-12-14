//=========================================================================================
//반환값이 없이 함수에서 결과 출력
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int cnt, int sum);

int main(void){
	//입력-선언부
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt, sum;

	i = 0;
	cnt = 0;
	sum = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// 처리부
	ComputeSummaion(iNumber, i, CSize, cnt, sum);
	return 0;
}

void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int cnt, int sum)
{
	for (i = 0; i < CSize; i++)
	{
		sum = sum + iNumber[i];
		cnt++;
	}
	printf("평균  : %lf\n", (double)sum / (double)cnt);
}
#endif

//=========================================================================================
// 반환하지 않고 call by reference 로 넘기는 방식
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int &cnt, int &sum);

int main(void){
	//입력-선언부
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt, sum;

	i = 0;
	cnt = 0;
	sum = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// 처리부
	ComputeSummaion(iNumber, i, CSize, cnt, sum);

	printf("평균  : %lf\n", (double)sum / (double)cnt);
	return 0;
}

void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int &cnt, int &sum)
{
	for (i = 0; i < CSize; i++)
	{
		sum = sum + iNumber[i];
		cnt++;
	}
}
#endif

//=========================================================================================
// 반환하지 않고 call by address 로 넘기는 방식
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int *cnt, int *sum);

int main(void){
	//입력-선언부
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt, sum;

	i = 0;
	cnt = 0;
	sum = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// 처리부
	ComputeSummaion(iNumber, i, CSize, &cnt, &sum);

	printf("평균  : %lf\n", (double)sum / (double)cnt);
	return 0;
}

void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int *cnt, int *sum)
{
	for (i = 0; i < CSize; i++)
	{
		*sum = *sum + iNumber[i];
		(*cnt)++;
	}
}
#endif

//=========================================================================================
// 함수 반환할 때 call by reference
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
int& ComputeSummaion(int iNumber[ColSize], int i, int CSize, int *cnt, int &sum);

int main(void){
	//입력-선언부
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt, sum;

	i = 0;
	cnt = 0;
	sum = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// 처리부
	sum = ComputeSummaion(iNumber, i, CSize, &cnt, sum);

	printf("평균  : %lf\n", (double)sum / (double)cnt);
	return 0;
}

int& ComputeSummaion(int iNumber[ColSize], int i, int CSize, int *cnt, int &sum)
{
	for (i = 0; i < CSize; i++)
	{
		sum = sum + iNumber[i];
		(*cnt)++;
	}
	return sum;
}
#endif

//=========================================================================================
// 함수 반환할 때 call by address
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
int* ComputeSummaion(int iNumber[ColSize], int i, int CSize, int *cnt, int &sum);

int main(void){
	//입력-선언부
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt, sum;

	i = 0;
	cnt = 0;
	sum = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// 처리부
	sum = *(ComputeSummaion(iNumber, i, CSize, &cnt, sum));

	printf("평균  : %lf\n", (double)sum / (double)cnt);
	return 0;
}

int* ComputeSummaion(int iNumber[ColSize], int i, int CSize, int *cnt, int &sum)
{
	for (i = 0; i < CSize; i++)
	{
		sum = sum + iNumber[i];
		(*cnt)++;
	}
	return &sum;
}
#endif