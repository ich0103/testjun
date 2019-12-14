// ================================================================================================
// 채우기 2. 상우하 대각선을 기준으로 아래쪽을 0으로 채워넣기
// ================================================================================================
/*
==============================
변경 전
==============================
1  2  3  4  5  0  0  0  0  0
6  7  8  9 10  0  0  0  0  0
11 12 13 14 15  0  0  0  0  0
16 17 18 19 20  0  0  0  0  0
21 22 23 24 25  0  0  0  0  0
26 27 28 29 30  0  0  0  0  0
0  0  0  0  0  0  0  0  0  0
0  0  0  0  0  0  0  0  0  0
0  0  0  0  0  0  0  0  0  0
0  0  0  0  0  0  0  0  0  0
==============================

==============================
변경 후
==============================
1  2  3  4  5  0  0  0  0  0
0  7  8  9 10  0  0  0  0  0
0  0 13 14 15  0  0  0  0  0
0  0  0 19 20  0  0  0  0  0
0  0  0  0 25  0  0  0  0  0
0  0  0  0  0  0  0  0  0  0
0  0  0  0  0  0  0  0  0  0
0  0  0  0  0  0  0  0  0  0
0  0  0  0  0  0  0  0  0  0
0  0  0  0  0  0  0  0  0  0
==============================
*/
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

#define MaxRowSize 10
#define MaxColSize 10

void SetAData2DArray(int DataFirst[MaxRowSize][MaxColSize], int DataFinal[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize);
void print2DArrayBefore(int DataFirst[MaxRowSize][MaxColSize], int DataFinal[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize);
void print2DArrayAfter(int DataFirst[MaxRowSize][MaxColSize], int DataFinal[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize);
void Nested2DArrayLeftDownZero(int DataFirst[MaxRowSize][MaxColSize], int DataFinal[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize);

int main(void){
	int DataFirst[MaxRowSize][MaxColSize];
	int DataFinal[MaxRowSize][MaxColSize];
	int i, j, RSize, CSize;

	i = j = 0;
	RSize = 6;
	CSize = 5;

	SetAData2DArray(DataFirst, DataFinal, i, j, RSize, CSize);
	print2DArrayBefore(DataFirst, DataFinal, i, j, RSize, CSize);

	Nested2DArrayLeftDownZero(DataFirst, DataFinal, i, j, RSize, CSize);

	print2DArrayAfter(DataFirst, DataFinal, i, j, RSize, CSize);

	return 0;
}
void SetAData2DArray(int DataFirst[MaxRowSize][MaxColSize], int DataFinal[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize)
{
	int num = 1;

	for (i = 0; i < MaxRowSize; i++)
	{
		for (j = 0; j < MaxColSize; j++)
		{
			DataFirst[i][j] = 0;
			DataFinal[i][j] = 0;
		}
	}

	for (i = 0; i < RSize; i++)
	{
		for (j = 0; j < CSize; j++)
		{
			DataFirst[i][j] = num++;
		}
	}
}
void print2DArrayBefore(int DataFirst[MaxRowSize][MaxColSize], int DataFinal[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize)
{
	cout << endl;
	cout << "==============================" << endl;
	cout << "            변경 전           " << endl;
	cout << "==============================" << endl;
	for (i = 0; i < MaxRowSize; i++)
	{
		for (j = 0; j < MaxColSize; j++)
		{
			printf("%3d", DataFirst[i][j]);
		}
		cout << endl;
	}
	cout << "==============================" << endl;
}
void print2DArrayAfter(int DataFirst[MaxRowSize][MaxColSize], int DataFinal[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize)
{
	cout << endl;
	cout << "==============================" << endl;
	cout << "            변경 후           " << endl;
	cout << "==============================" << endl;
	for (i = 0; i < MaxRowSize; i++)
	{
		for (j = 0; j < MaxColSize; j++)
		{
			printf("%3d", DataFinal[i][j]);
		}
		cout << endl;
	}
	cout << "==============================" << endl;
}
void Nested2DArrayLeftDownZero(int DataFirst[MaxRowSize][MaxColSize], int DataFinal[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize)
{
	for (i = 0; i < RSize; i++)
	{
		for (j = 0; j < CSize; j++)
		{
			if (i > j)
			{

			}
			else
			{

			}
		}
	}
}
#endif