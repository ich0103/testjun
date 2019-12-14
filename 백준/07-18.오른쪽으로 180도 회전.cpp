//// ================================================================================================
//// 회전 4. 오른쪽으로 180도 회전
//// ================================================================================================
///*
//==============================
//변경 전
//==============================
//1  2  3  4  5  6  0  0  0  0
//7  8  9 10 11 12  0  0  0  0
//13 14 15 16 17 18  0  0  0  0
//19 20 21 22 23 24  0  0  0  0
//25 26 27 28 29 30  0  0  0  0
//0  0  0  0  0  0  0  0  0  0
//0  0  0  0  0  0  0  0  0  0
//0  0  0  0  0  0  0  0  0  0
//0  0  0  0  0  0  0  0  0  0
//0  0  0  0  0  0  0  0  0  0
//==============================
//
//==============================
//변경 후
//==============================
//30 29 28 27 26 25  0  0  0  0
//24 23 22 21 20 19  0  0  0  0
//18 17 16 15 14 13  0  0  0  0
//12 11 10  9  8  7  0  0  0  0
//6  5  4  3  2  1  0  0  0  0
//0  0  0  0  0  0  0  0  0  0
//0  0  0  0  0  0  0  0  0  0
//0  0  0  0  0  0  0  0  0  0
//0  0  0  0  0  0  0  0  0  0
//0  0  0  0  0  0  0  0  0  0
//==============================
//*/
//#if 01
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//#define MaxRowSize 10
//#define MaxColSize 10
//
//void SetAData2DArray(int DataFirst[MaxRowSize][MaxColSize], int DataFinal[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize);
//void print2DArrayBefore(int DataFirst[MaxRowSize][MaxColSize], int DataFinal[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize);
//void print2DArrayAfter(int DataFirst[MaxRowSize][MaxColSize], int DataFinal[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize);
//void Rotate2DArray_right_180(int DataFirst[MaxRowSize][MaxColSize], int DataFinal[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize);
//
//int main(void){
//	int DataFirst[MaxRowSize][MaxColSize];
//	int DataFinal[MaxRowSize][MaxColSize];
//	int i, j, RSize, CSize;
//
//	i = j = 0;
//	RSize = 5;
//	CSize = 6;
//
//	SetAData2DArray(DataFirst, DataFinal, i, j, RSize, CSize);
//	print2DArrayBefore(DataFirst, DataFinal, i, j, RSize, CSize);
//
//	Rotate2DArray_right_180(DataFirst, DataFinal, i, j, RSize, CSize);
//
//	print2DArrayAfter(DataFirst, DataFinal, i, j, RSize, CSize);
//
//	return 0;
//}
//void SetAData2DArray(int DataFirst[MaxRowSize][MaxColSize], int DataFinal[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize)
//{
//	int num = 1;
//
//	for (i = 0; i < MaxRowSize; i++)
//	{
//		for (j = 0; j < MaxColSize; j++)
//		{
//			DataFirst[i][j] = 0;
//			DataFinal[i][j] = 0;
//		}
//	}
//
//	for (i = 0; i < RSize; i++)
//	{
//		for (j = 0; j < CSize; j++)
//		{
//			DataFirst[i][j] = num++;
//		}
//	}
//}
//void print2DArrayBefore(int DataFirst[MaxRowSize][MaxColSize], int DataFinal[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize)
//{
//	cout << endl;
//	cout << "==============================" << endl;
//	cout << "            변경 전           " << endl;
//	cout << "==============================" << endl;
//	for (i = 0; i < MaxRowSize; i++)
//	{
//		for (j = 0; j < MaxColSize; j++)
//		{
//			printf("%3d", DataFirst[i][j]);
//		}
//		cout << endl;
//	}
//	cout << "==============================" << endl;
//}
//void print2DArrayAfter(int DataFirst[MaxRowSize][MaxColSize], int DataFinal[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize)
//{
//	cout << endl;
//	cout << "==============================" << endl;
//	cout << "            변경 후           " << endl;
//	cout << "==============================" << endl;
//	for (i = 0; i < MaxRowSize; i++)
//	{
//		for (j = 0; j < MaxColSize; j++)
//		{
//			printf("%3d", DataFinal[i][j]);
//		}
//		cout << endl;
//	}
//	cout << "==============================" << endl;
//}
//void Rotate2DArray_right_180(int DataFirst[MaxRowSize][MaxColSize], int DataFinal[MaxRowSize][MaxColSize], int i, int j, int RSize, int CSize)
//{
//	// 행과 열의 변화가 없기 때문에 for문의 RSize, CSize는 변경할 필요가 없음.
//	for (i = 0; i < RSize; i++)
//	{
//		for (j = 0; j < CSize; j++)
//		{
//			DataFinal[i][j] = DataFirst[RSize-1-i][CSize-1-j];
//		}
//	}
//}
//#endif