//=========================================================================================
//��ȯ���� ���� �Լ����� ��� ���
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int cnt);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt;

	i = 0;
	cnt = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// ó����
	ComputeSummaion(iNumber, i, CSize, cnt);
	return 0;
}

void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int cnt)
{

}
#endif

//=========================================================================================
//  call by value  ���·� ���� ��ȯ�ϴ� ����
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
int ComputeSummaion(int iNumber[ColSize], int i, int CSize, int cnt);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt;

	i = 0;
	cnt = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// ó����
	cnt = ComputeSummaion(iNumber, i, CSize, cnt);

	printf("�հ�   : %d\n", cnt);
	return 0;
}

int ComputeSummaion(int iNumber[ColSize], int i, int CSize, int cnt)
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
	int i, CSize, cnt;

	i = 0;
	cnt = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// ó����
	printf("�հ�   : %d\n", ComputeSummaion(iNumber, i, CSize, cnt));
	return 0;
}

int ComputeSummaion(int iNumber[ColSize], int i, int CSize, int cnt)
{

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
void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int &cnt);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt;

	i = 0;
	cnt = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// ó����
	ComputeSummaion(iNumber, i, CSize, cnt);
	printf("�հ�   : %d\n", cnt);
	return 0;
}

void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int &cnt)
{

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
void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int *cnt);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt;

	i = 0;
	cnt = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// ó����
	ComputeSummaion(iNumber, i, CSize, &cnt);
	printf("�հ�   : %d\n", cnt);
	return 0;
}

void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int *cnt)
{

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
int& ComputeSummaion(int iNumber[ColSize], int i, int CSize, int cnt);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt;

	i = 0;
	cnt = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// ó����
	cnt = ComputeSummaion(iNumber, i, CSize, cnt);

	printf("�հ�   : %d\n", cnt);
	return 0;
}

int& ComputeSummaion(int iNumber[ColSize], int i, int CSize, int cnt)
{

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
int* ComputeSummaion(int iNumber[ColSize], int i, int CSize, int cnt);

int main(void){
	//�Է�-�����
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt;

	i = 0;
	cnt = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// ó����
	cnt = *(ComputeSummaion(iNumber, i, CSize, cnt));

	printf("�հ�   : %d\n", cnt);
	return 0;
}

int* ComputeSummaion(int iNumber[ColSize], int i, int CSize, int cnt)
{

}
#endif