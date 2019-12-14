// ================================================================================================
// 회전 8. 짝수 열만 회전
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
26  2 28  4 30  0  0  0  0  0
21  7 23  9 25  0  0  0  0  0
16 12 18 14 20  0  0  0  0  0
11 17 13 19 15  0  0  0  0  0
6 22  8 24 10  0  0  0  0  0
1 27  3 29  5  0  0  0  0  0
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
void Rotate2DArray_even_Cols(int DataFirst[MaxRowSize][MaxColSize], int DataFinal[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize);

int main(void){
	int DataFirst[MaxRowSize][MaxColSize];
	int DataFinal[MaxRowSize][MaxColSize];
	int i, j, RSize, CSize;

	i = j = 0;
	RSize = 6;
	CSize = 5;

	SetAData2DArray(DataFirst, DataFinal, i, j, RSize, CSize);
	print2DArrayBefore(DataFirst, DataFinal, i, j, RSize, CSize);

	Rotate2DArray_even_Cols(DataFirst, DataFinal, i, j, RSize, CSize);

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
void Rotate2DArray_even_Cols(int DataFirst[MaxRowSize][MaxColSize], int DataFinal[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize)
{
	for (int i = 0; i < RSize; i++)
	{
		for (int j = 0; j < CSize; j++)
		{
			if (j % 2)
			{
				DataFinal[i][j] = DataFirst[i][j];
			}
			else
			{
				DataFinal[i][j] = DataFirst[RSize - 1 - i][j];
			}
		}
	}
}
#endif