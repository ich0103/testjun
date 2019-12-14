//// ================================================================================================
//// 회전 1. 행을 기준으로 회전
//// ================================================================================================
///*
//==============================
//변경 전
//==============================
//1  2  3  4  5  0  0  0  0  0
//6  7  8  9 10  0  0  0  0  0
//11 12 13 14 15  0  0  0  0  0
//16 17 18 19 20  0  0  0  0  0
//21 22 23 24 25  0  0  0  0  0
//26 27 28 29 30  0  0  0  0  0
//0  0  0  0  0  0  0  0  0  0
//0  0  0  0  0  0  0  0  0  0
//0  0  0  0  0  0  0  0  0  0
//0  0  0  0  0  0  0  0  0  0
//==============================
//==============================
//변경 후
//==============================
//5  4  3  2  1  0  0  0  0  0
//10  9  8  7  6  0  0  0  0  0
//15 14 13 12 11  0  0  0  0  0
//20 19 18 17 16  0  0  0  0  0
//25 24 23 22 21  0  0  0  0  0
//30 29 28 27 26  0  0  0  0  0
//0  0  0  0  0  0  0  0  0  0
//0  0  0  0  0  0  0  0  0  0
//0  0  0  0  0  0  0  0  0  0
//0  0  0  0  0  0  0  0  0  0
//==============================
//*/
//
//#if 0
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//#define MaxRow 10
//#define MaxCol 10
//
//void SetAData(int First[MaxRow][MaxCol], int Final[MaxRow][MaxCol], int i, int j, int RSize, int CSize);
//void printBefore(int First[MaxRow][MaxCol], int Final[MaxRow][MaxCol], int i, int j, int RSize, int CSize);
//void printAfter(int First[MaxRow][MaxCol], int Final[MaxRow][MaxCol], int i, int j, int RSize, int CSize);
//void Rotate_Row(int First[MaxRow][MaxCol], int Final[MaxRow][MaxCol], int i, int j, int RSize, int CSize);
//int main(void){
//	int First[MaxRow][MaxCol];
//	int Final[MaxRow][MaxCol];
//	int i, j, RSize, CSize;
//
//	i = j = 0;
//	RSize = 6;
//	CSize = 5;
//
//	SetAData(First, Final, i, j, RSize, CSize);
//	printBefore(First, Final, i, j, RSize, CSize);
//	Rotate_Row(First, Final, i, j, RSize, CSize);
//	printAfter(First, Final, i, j, RSize, CSize);
//
//	return 0;
//}
//void SetAData(int First[MaxRow][MaxCol], int Final[MaxRow][MaxCol], int i, int j, int RSize, int CSize)
//{
//	int num = 1;
//
//	for (i = 0; i < MaxRow; i++)
//	{
//		for (j = 0; j < MaxCol; j++)
//		{
//			First[i][j] = 0;
//			Final[i][j] = 0;
//		}
//	}
//
//	for (i = 0; i < RSize; i++)
//	{
//		for (j = 0; j < CSize; j++)
//		{
//			First[i][j] = num++;
//		}
//	}
//}
//void printBefore(int First[MaxRow][MaxCol], int Final[MaxRow][MaxCol], int i, int j, int RSize, int CSize)
//{
//	cout << endl;
//	cout << "==============================" << endl;
//	cout << "            변경 전           " << endl;
//	cout << "==============================" << endl;
//	for (i = 0; i < MaxRow; i++)
//	{
//		for (j = 0; j < MaxCol; j++)
//		{
//			printf("%3d", First[i][j]);
//		}
//		cout << endl;
//	}
//	cout << "==============================" << endl;
//}
//void printAfter(int First[MaxRow][MaxCol], int Final[MaxRow][MaxCol], int i, int j, int RSize, int CSize)
//{
//	cout << endl;
//	cout << "==============================" << endl;
//	cout << "            변경 후           " << endl;
//	cout << "==============================" << endl;
//	for (i = 0; i < MaxRow; i++)
//	{
//		for (j = 0; j < MaxCol; j++)
//		{
//			printf("%3d", Final[i][j]);
//		}
//		cout << endl;
//	}
//	cout << "==============================" << endl;
//}
//void Rotate_Row(int First[MaxRow][MaxCol], int Final[MaxRow][MaxCol], int i, int j, int RSize, int CSize)
//{
//	for (int i = 0; i < RSize; i++)
//	{
//		for (int j = 0; j < CSize; j++)
//		{
//			Final[i][j] = First[i][CSize - 1 - j];
//		}
//	}
//
//}
//#endif
//
//
//
//
