//#include <stdio.h>
//
//int map[200][100];
//
//int main() {
//	int n, l;
//	scanf("%d %d", &n, &l);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &map[i][j]);
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			map[n + i][j] = map[n - 1 - j][i];
//		}
//	}
//	int i, j;
//	int ret = 0;
//	for ( i = 0; i < 2*n; i++)
//	{
//		int count = 1;
//		for ( j = 0; j < n-1; j++)
//		{
//			// 평지
//			if (map[i][j] == map[i][j + 1]) count++;
//			//오르막
//			else if (map[i][j] + 1 == map[i][j + 1] && count>=l)
//			{
//				count = 1;
//			}
//			//내리막
//			else if (map[i][j] - 1 == map[i][j+1] && count >= 0)
//			{
//				count = 1 - l;
//			}
//			else break;
//		}
//		if (j ==(n - 1) && count >= 0) {
//			++ret;
//		}
//	}
//
//	printf("%d", ret);
//	
//
//}