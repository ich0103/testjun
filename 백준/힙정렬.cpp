//#include <stdio.h>
//
//int n = 9;
//int heap[9] = { 7,6,5,8,3,5,9,1,6 };
//
//int main()
//{
//	// 먼저 전체 트리 구조를 최대 힙 구조로 변경
//	for (int i = 1; i < n; i++)
//	{
//		int c = i;
//		do {
//			int root = (c - 1) / 2;
//			if (heap[root] < heap[c])
//			{
//				int temp = heap[root];
//				heap[root] = heap[c];
//				heap[c] = temp;
//			}
//			c = root;
//		} while (c != 0);
//	}
//
//	//크기를 줄여가며 반복적으로 정렬
//	for (int i = n - 1; i >= 0; i--)
//	{
//		int temp = heap[0];
//		heap[0] = heap[i];
//		heap[i] = temp;
//		int root = 0;
//		int c = 1;
//		do {
//			c = 2 * root + 1;
//			//자식중 더 큰값을 찾기 -> 왼쪽과 오른쪽중 오른쪽이 큰면 이동
//			if (heap[c] < heap[c + 1] && c < i - 1)
//			{
//				c++;
//			}
//			if (heap[root] < heap[c] && c < i)
//			{
//				int temp = heap[root];
//				heap[root] = heap[c];
//				heap[c] = temp;
//			}
//			root = c;
//		} while (c < i);
//
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", heap[i]);
//	}
//
//
//}
//
