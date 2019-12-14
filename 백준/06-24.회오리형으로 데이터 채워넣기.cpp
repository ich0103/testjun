// ================================================================================================
// 회전 10. 회오리형으로 데이터 채워넣기
// ================================================================================================
/*
==============================
1  2  3  4  5  6  0  0  0  0
20 21 22 23 24  7  0  0  0  0
19 32 33 34 25  8  0  0  0  0
18 31 36 35 26  9  0  0  0  0
17 30 29 28 27 10  0  0  0  0
16 15 14 13 12 11  0  0  0  0
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

void SetAData2DArray(int DataFirst[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize);
void print2DArrayBefore(int DataFirst[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize);
void print2DArrayAfter(int DataFirst[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize);
void Rotate2DArray_cyclone(int DataFirst[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize);

int main(void){
	int DataFirst[MaxRowSize][MaxColSize];
	int i, j, RSize, CSize;

	i = j = 0;
	RSize = 6;
	CSize = 5;

	SetAData2DArray(DataFirst, i, j, RSize, CSize);
	print2DArrayBefore(DataFirst, i, j, RSize, CSize);

	Rotate2DArray_cyclone(DataFirst, i, j, RSize, CSize);

	print2DArrayAfter(DataFirst, i, j, RSize, CSize);

	return 0;
}
void SetAData2DArray(int DataFirst[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize)
{
	int num = 1;

	for (i = 0; i < MaxRowSize; i++)
	{
		for (j = 0; j < MaxColSize; j++)
		{
			DataFirst[i][j] = 0;
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
void print2DArrayBefore(int DataFirst[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize)
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
void print2DArrayAfter(int DataFirst[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize)
{
	cout << endl;
	cout << "==============================" << endl;
	cout << "            변경 후           " << endl;
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
void Rotate2DArray_cyclone(int DataFirst[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize)
{
	int reverse_search_number, value_count, limit, row, column;
	row = 0;
	column = -1;
	limit = RSize;
	reverse_search_number = 1;
	value_count = 0;
	while (1)
	{

		for (int i = 0; i < limit; i++)
		{
			value_count += 1;
			column += reverse_search_number;
			DataFirst[row][column] = value_count;
		}

		limit--;

		if (limit == 0) break;

		for (int i = 0; i < limit; i++)
		{
			value_count += 1;
			row += reverse_search_number;
			DataFirst[row][column] = value_count;
		}

		reverse_search_number *= -1;
	}
}
#endif