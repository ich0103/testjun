//#include <cstdio>
//#include < Windows.h>
//#include <stdlib.h>
//
//#define MAX 100
//
//int n, l;
//int map[MAX][MAX];
//int tmp[MAX][MAX];
//int ret;
//
//void rotate()
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			tmp[i][j] = map[n-1-j][i];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			map[i][j] = tmp[i][j];
//		}
//	}
//
//}
//
//void print(int a, int b) {
//
//	Sleep(2000);
//	system("cls");
//	printf("i = %d, j= %d", a, b);
//	printf("카운트 값 : %d\n", ret);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d", map[i][j]);
//		}
//		puts("");
//	}
//}
//
//int main()
//{
//
//	scanf("%d %d", &n, &l);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &map[i][j]);
//		}
//	}
//
//	int i = 1;
//	ret = 0;
//
//	do {		
//		int i, j;
//		for ( i = 0; i < n; i++)
//		{
//			int len = 1;
//
//			for ( j = 0; j < n-1; j++)
//			{
//				// 평지
//				if (map[i][j] == map[i][j + 1]) len += 1;
//				//내리막
//				else if (map[i][j] - 1 == map[i][j + 1] && len>=0) {
//					len = 1-l;
//				}
//				//오르막
//				else if (map[i][j] + 1 == map[i][j + 1] && len>=l) {
//					len = 1;
//				}
//				else break;
//
//				//print(i,j);
//			}
//			if (j == n - 1 && len>=0) ret += 1;
//			
//		}
//		
//		rotate();
//	} while (i--);
//
//	printf("%d", ret);
//	return 0;
//}