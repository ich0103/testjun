//#include <cstdio>
//#include <Windows.h>
//#include <cstdlib>
//#define MAX 51
//
//int n, m;
//char map[MAX][MAX];
//char temp[MAX][MAX];
//int min;
//
//void print(int i, int j, int cnt) {
//
//	Sleep(10);
//	system("cls");
//
//	printf(" 시작 i :  %d, 시작 j : %d, cnt : %d, 최소값 : %d\n", i, j, cnt, min);
//	int row = i;
//	int col = j;
//	for (i; i < row + 8; i++)
//	{
//		for (j; j < col + 8; j++)
//		{
//			printf("%c ", map[i][j]);
//		}
//		puts("");
//		j = col;
//	}
//}
//
//
//int rangeCheck(int i, int j)
//{
//	if ((i + 7) < n && (j + 7) < m) return 1;
//	return 0;
//}
//
//void reset() {
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			map[i][j] = temp[i][j];
//		}
//	}
//}
//
//int main()
//{
//	int mat = 8;
//
//	scanf("%d %d ", &n, &m);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf(" %c", &map[i][j]);
//		}
//	}
//
//	min = 987654321;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			temp[i][j] = map[i][j];
//		}
//	}
//
//
//	for (int i = 0; i < n; i++)
//	{
//
//		if (i == 1) {
//			int ddd = 0;
//		}
//		for (int j = 0; j < m; j++)
//		{
//			if (rangeCheck(i, j))
//			{
//				char pre;
//				for (int k = 0; k < 2; k++)
//				{
//					if (k == 0)  pre = 'W';
//					if (k == 1) pre = 'B';
//
//					reset();
//					char row_pre = ' ';
//					int row = i;
//					int col = j;
//
//					int cnt = 0;
//					for (row; row < (i + 8); row++)
//					{
//						for (col; col < (j + 8); col++)
//						{
//							// 무니 체크   , 이전값 , 현재값
//							if (pre == 'W')
//							{
//								if (map[row][col] == 'B')
//								{
//
//								}
//								else {
//									cnt++;
//									map[row][col] = 'B';
//								}
//
//							}
//							else {
//
//								if (map[row][col] == 'W')
//								{
//
//								}
//								else {
//									cnt++;
//									map[row][col] = 'W';
//								}
//							}
//							pre = map[row][col];
//
//							//print(i,j, cnt);
//						}
//						pre = map[i + row][j];
//						col = j;
//					}
//
//					if (min > cnt) min = cnt;
//				}
//
//			}
//		}
//	}
//
//	printf("%d ", min);
//
//
//
//
//	return 0;
//}
//
