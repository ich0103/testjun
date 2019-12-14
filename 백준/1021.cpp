//#include <cstdio>
//#define MAX 100
//
//int n, m, k, ret;
//int arr[MAX];
//int element[MAX];
//int front, rear;
//int ifront, irear;
//int main()
//{
//	scanf("%d %d", &n, &m);
//	
//	front = rear = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", element+i);
//	}
//
//	ifront = irear = 0;
//	while (m--)
//	{
//		int number = element[ifront++];
//		int idx = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (number == arr[i])
//			{
//				idx = i;
//			}
//		}
//		int left = idx;
//		int right = n - idx;
//
//		rear = n-1;
//		front = 0;
//		int cnt = 0;
//		while (1)
//		{
//			if (idx == 0)
//			{
//				front++;
//			}
//			else if (left <= right)
//			{
//				arr[++rear]=arr[front++];
//				cnt += 1;
//			}
//			else if (right < left)
//			{
//				if (right == 0)
//				{
//					arr[front]
//				}
//				int tmep = arr[rear];
//
//			}
//
//		}
//	}
//
//
//	return 0;
//}