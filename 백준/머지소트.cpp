//
#if 0
#include <iostream>
#include "Windows.h"
#define max 100

int arr[max], buf[max];

void msort(int* p, int len)
{
	if (len < 2) return;
	int i, j, k, mid;
	mid = len / 2;
	i = k = 0;
	j = mid;

	msort(p, mid);
	msort(p + mid, len - mid);

	while (i < mid && j < len) {
		if (p[i] < p[j]) {
			buf[k++] = p[i++];
		}
		else {
			buf[k++] = p[j++];
		}
	}

	while (i < mid) buf[k++] = p[i++];
	while (j < len) buf[k++] = p[j++];

	for (int i = 0; i < len; i++)
	{
		p[i] = buf[i];
	}
}

int main() {

	int n, m;

	n = 5;

	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;// rand();
	}

	msort(arr, n);

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}
#endif

//#if 0
//
//#include <iostream>
//#include "Windows.h"
//#define max 100
//
//int arr[max], buf[max];
//
//void msort(int* p, int len)
//{
//	if (len < 2) return;
//	int i, j, k, mid;
//	mid = len / 2;
//	i = k = 0;
//	j = mid;
//
//	msort(p, mid);
//	msort(p + mid, len - mid);
//
//	while (i < mid && j < len) {
//
//		if (p[i] < p[j]) {
//			buf[k++] = p[i++];
//		}
//		else {
//			buf[k++] = p[j++];
//		}
//	}
//
//	while (i < mid) buf[k++] = p[i++];
//	while (j < len) buf[k++] = p[j++];
//
//	for (int i = 0; i < len; i++)
//	{
//		p[i] = buf[i];
//	}
//}
//
//
//int main()
//{
//	int n, m;
//	n = 5;
//
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = i + 1;
//	}
//
//	msort(arr, n);
//
//	for (int i = 0; i < n; i++)
//	{
//		std::cout << arr[i] << " ";
//	}
//
//
//	return 0;
//}
//#endif