//=========================================================================================
//반환값이 없이 함수에서 결과 출력
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int cnt);

int main(void){
	//입력-선언부
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt;

	i = 0;
	cnt = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// 처리부
	ComputeSummaion(iNumber, i, CSize, cnt);
	return 0;
}

void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int cnt)
{

}
#endif

//=========================================================================================
//  call by value  형태로 값을 반환하는 형태
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define ColSize 10
using namespace std;
int ComputeSummaion(int iNumber[ColSize], int i, int CSize, int cnt);

int main(void){
	//입력-선언부
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt;

	i = 0;
	cnt = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// 처리부
	cnt = ComputeSummaion(iNumber, i, CSize, cnt);

	printf("합계   : %d\n", cnt);
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
	//입력-선언부
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt;

	i = 0;
	cnt = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// 처리부
	printf("합계   : %d\n", ComputeSummaion(iNumber, i, CSize, cnt));
	return 0;
}

int ComputeSummaion(int iNumber[ColSize], int i, int CSize, int cnt)
{

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
void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int &cnt);

int main(void){
	//입력-선언부
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt;

	i = 0;
	cnt = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// 처리부
	ComputeSummaion(iNumber, i, CSize, cnt);
	printf("합계   : %d\n", cnt);
	return 0;
}

void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int &cnt)
{

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
void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int *cnt);

int main(void){
	//입력-선언부
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt;

	i = 0;
	cnt = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// 처리부
	ComputeSummaion(iNumber, i, CSize, &cnt);
	printf("합계   : %d\n", cnt);
	return 0;
}

void ComputeSummaion(int iNumber[ColSize], int i, int CSize, int *cnt)
{

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
int& ComputeSummaion(int iNumber[ColSize], int i, int CSize, int cnt);

int main(void){
	//입력-선언부
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt;

	i = 0;
	cnt = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// 처리부
	cnt = ComputeSummaion(iNumber, i, CSize, cnt);

	printf("합계   : %d\n", cnt);
	return 0;
}

int& ComputeSummaion(int iNumber[ColSize], int i, int CSize, int cnt)
{

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
int* ComputeSummaion(int iNumber[ColSize], int i, int CSize, int cnt);

int main(void){
	//입력-선언부
	int iNumber[ColSize] = { 21, 50, 100, 45, 7, 40, 30, 53, 84, 99 };
	int i, CSize, cnt;

	i = 0;
	cnt = 0;
	CSize = sizeof(iNumber) / sizeof(int);

	// 처리부
	cnt = *(ComputeSummaion(iNumber, i, CSize, cnt));

	printf("합계   : %d\n", cnt);
	return 0;
}

int* ComputeSummaion(int iNumber[ColSize], int i, int CSize, int cnt)
{

}
#endif