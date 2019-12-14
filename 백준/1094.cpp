//#include <cstdio>
//
//int main()
//{
//	int x, sum, cnt;
//	int arr[7] = { 64,32,16,8,4,2,1 };
//	cnt = sum = 0;
//	scanf("%d", &x);
//	for (int i = 0; i < 7; i++)
//	{
//
//		if (sum > x)
//		{
//			sum -= arr[i - 1];
//			cnt -= 1;
//			//	printf(" »©±â %d %d %d\n", arr[i], sum, cnt);
//		}
//
//		if (x < arr[i]) continue;
//		else if (x == arr[i])
//		{
//			sum += arr[i];
//			cnt += 1;
//			break;
//		}
//		else {
//			sum += arr[i];
//			cnt += 1;
//			//	printf("´õÇÏ±â %d %d %d\n", arr[i], sum, cnt);
//
//			if (sum == x) break;
//		}
//	}
//
//	printf("%d", cnt);
//}