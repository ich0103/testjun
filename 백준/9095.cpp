//#include <cstdio>
//
//int d[11];
//
//int main()
//{
//	d[0] = 0;
//	d[1] = 1;
//	d[2] = 2;
//	d[3] = 4;
//
//	int t, n;
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++)
//	{
//		scanf("%d", &n);
//
//		for (int i = 4; i <= n; i++)
//		{
//			d[i] = d[i - 1] + d[i - 2] + d[i - 3];
//		}
//		printf("%d\n", d[n]);
//
//	}
//	return 0;
//}