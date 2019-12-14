//=========================================================================================
// case1. ��ȯ���� ���� �Լ����� ��� ���
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int sum);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, sum;

	i = 0;
	sum = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// ó����
	ComputeSummaion(iNumber, i, CSize, sum);
	return 0;
}

void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int sum)
{

}
#endif

//=========================================================================================
// case2. call by value  ���·� ���� ��ȯ�ϴ� ����
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
int ComputeSummaion(int iNumber[ColSize], int i, int CSize, int sum);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, sum;

	i = 0;
	sum = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// ó����
	sum = ComputeSummaion(iNumber, i, CSize, sum);

	printf("�հ�   : %d\n", sum);
	return 0;
}

int ComputeSummaion(int iNumber[ColSize], int i, int CSize, int sum)
{

}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
int ComputeSummaion(int iNumber[ColSize], int i, int CSize, int sum);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, sum;

	i = 0;
	sum = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// ó����
	printf("�հ�   : %d\n", ComputeSummaion(iNumber, i, CSize, sum));
	return 0;
}

int ComputeSummaion(int iNumber[ColSize], int i, int CSize, int sum)
{


}
#endif

//=========================================================================================
//case3. ��ȯ���� �ʰ� call by reference �� �ѱ�� ���
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int &sum);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, sum;

	i = 0;
	sum = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// ó����
	ComputeSummaion(iNumber, i, CSize, sum);
	printf("�հ�   : %d\n", sum);
	return 0;
}

void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int &sum)
{

}
#endif

//=========================================================================================
//case4. ��ȯ���� �ʰ� call by address �� �ѱ�� ���
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int *sum);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, sum;

	i = 0;
	sum = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// ó����
	ComputeSummaion(iNumber, i, CSize, &sum);
	printf("�հ�   : %d\n", sum);
	return 0;
}

void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int *sum)
{

}
#endif


//=========================================================================================
//case5. �Լ� ��ȯ�� �� call by reference
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
int& ComputeSummaion(int iNumber[ColSize], int i, int CSize, int sum);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, sum;

	i = 0;
	sum = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// ó����
	sum = ComputeSummaion(iNumber, i, CSize, sum);

	printf("�հ�   : %d\n", sum);
	return 0;
}

int& ComputeSummaion(int iNumber[ColSize], int i, int CSize, int sum)
{

}
#endif

//=========================================================================================
//case6. �Լ� ��ȯ�� �� call by address
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
int* ComputeSummaion(int iNumber[ColSize], int i, int CSize, int sum);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, sum;

	i = 0;
	sum = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// ó����
	sum = *(ComputeSummaion(iNumber, i, CSize, sum));

	printf("�հ�   : %d\n", sum);
	return 0;
}

int* ComputeSummaion(int iNumber[ColSize], int i, int CSize, int sum)
{

}
#endif