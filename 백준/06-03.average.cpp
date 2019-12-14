//=========================================================================================
//��ȯ���� ���� �Լ����� ��� ���
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int cnt, int sum);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt, sum;

	i = 0;
	cnt = 0;
	sum = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// ó����
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
	printf("���  : %lf\n", (double)sum / (double)cnt);
}
#endif

//=========================================================================================
// ��ȯ���� �ʰ� call by reference �� �ѱ�� ���
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int &cnt, int &sum);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt, sum;

	i = 0;
	cnt = 0;
	sum = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// ó����
	ComputeSummaion(iNumber, i, CSize, cnt, sum);

	printf("���  : %lf\n", (double)sum / (double)cnt);
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
// ��ȯ���� �ʰ� call by address �� �ѱ�� ���
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int *cnt, int *sum);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt, sum;

	i = 0;
	cnt = 0;
	sum = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// ó����
	ComputeSummaion(iNumber, i, CSize, &cnt, &sum);

	printf("���  : %lf\n", (double)sum / (double)cnt);
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
// �Լ� ��ȯ�� �� call by reference
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
int& ComputeSummaion(int iNumber[ColSize], int i, int CSize, int *cnt, int &sum);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt, sum;

	i = 0;
	cnt = 0;
	sum = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// ó����
	sum = ComputeSummaion(iNumber, i, CSize, &cnt, sum);

	printf("���  : %lf\n", (double)sum / (double)cnt);
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
// �Լ� ��ȯ�� �� call by address
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
int* ComputeSummaion(int iNumber[ColSize], int i, int CSize, int *cnt, int &sum);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt, sum;

	i = 0;
	cnt = 0;
	sum = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// ó����
	sum = *(ComputeSummaion(iNumber, i, CSize, &cnt, sum));

	printf("���  : %lf\n", (double)sum / (double)cnt);
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