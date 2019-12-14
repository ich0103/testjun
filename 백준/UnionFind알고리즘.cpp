//#if 1
//#include <stdio.h>
//
//
//int getParent(int parent[], int x)
//{
//	if (parent[x] == x) return x;
//	return parent[x] = getParent(parent, parent[x]);
//}
//
//// �� �θ��带 ��ġ�� �Լ�
//
//void unionParent(int parent[], int a, int b) {
//	a = getParent(parent, a);
//	b = getParent(parent, b);
//	if (a < b) parent[b] = a;
//	else parent[a] = b;
//}
//
////���� �θ����� Ȯ���ϴ� �Լ�
//
//int findParent(int parent[], int a, int b)
//{
//	a = getParent(parent, a);
//	b = getParent(parent, b);
//	if (a == b) return 1;
//	return 0;
//}
//
//int main()
//{
//	int parent[11];
//	for (int i = 1; i <= 10; i++)
//	{
//		parent[i] = i;
//	}
//	unionParent(parent, 1, 2);
//	unionParent(parent, 2, 3);
//	unionParent(parent, 3, 4);
//	unionParent(parent, 5, 6);
//	unionParent(parent, 6, 7);
//	unionParent(parent, 7, 8);
//	printf("1�� 5�� ����Ǿ� �ֳ���? %d\n", findParent(parent, 1, 5));
//	unionParent(parent, 1, 5);
//	printf("1�� 5�� ����Ǿ� �ֳ���? %d\n", findParent(parent, 1, 5));
//	return 0;
//}
//#endif
//
//#if 0
//
//#include <cstdio>
//
//// �θ� ��带 ã�� �Լ�
//
//int getParent(int parent[], int x)
//{
//	if (parent[x] == x) return x;
//	return parent[x] = getParent(parent, parent[x]);
//}
//
//
//// �� �θ� ��ġ�� �Լ�
//
//void unionParent(int parent[], int a, int b)
//{
//	a = getParent(parent, a);
//	b = getParent(parent, b);
//	if (a < b) parent[b] = a;
//	else parent[a] = b;
//}
//
//// ���� �θ����� Ȯ���ϴ� �Լ�
//
//int findParent(int parent[], int a, int b)
//{
//	a = getParent(parent, a);
//	b = getParent(parent, b);
//	if (a == b) return 1;
//	return 0;
//}
//
//
//int main()
//{
//	int parent[11];
//	for (int i = 1; i <= 10; i++)
//	{
//		parent[i] = i;
//	}
//	unionParent(parent, 1, 2);
//	unionParent(parent, 2, 3);
//	unionParent(parent, 3, 4);
//	unionParent(parent, 5, 6);
//	unionParent(parent, 6, 7);
//	unionParent(parent, 7, 8);
//	printf("1�� 5�� ����Ǿ� �ֳ���? %d\n", findParent(parent, 1, 5));
//	unionParent(parent, 1, 5);
//	printf("1�� 5�� ����Ǿ� �ֳ���? %d\n", findParent(parent, 1, 5));
//	return 0;
//}
//
//#endif
//
////
//#if 0
//
//#include <cstdio>
//
//// �θ��� ã��
//
//int getP(int p[], int x)
//{
//	if (p[x] == x) return x;
//	return p[x] = getP(p, p[x]);
//}
//
////�� �θ� ��ġ��
//
//void unionP(int p[], int a, int b)
//{
//	a = getP(p, a);
//	b = getP(p, b);
//	if (a < b) p[b] = a;
//	else p[a] = b;
//}
//
////���� �θ� Ȯ��
//int findP(int p[], int a, int b)
//{
//	a = getP(p, a);
//	b = getP(p, b);
//	if (a == b) return 1;
//	return 0;
//}
//
//int main() {
//
//
//	int P[11];
//	for (int i = 1; i <= 10; i++)
//	{
//		P[i] = i;
//	}
//
//	unionP(P, 1, 2);
//	unionP(P, 2, 3);
//	unionP(P, 3, 4);
//	unionP(P, 5, 6);
//	unionP(P, 6, 7);
//	unionP(P, 7, 8);
//	printf("1�� 5�� ����Ǿ� �ֳ���? %d\n", findP(P, 1, 5));
//	unionP(P, 1, 5);
//	printf("1�� 5�� ����Ǿ� �ֳ���? %d\n", findP(P, 1, 5));
//
//}
//#endif
//
//
//#if 0
//
//#include <cstdio>
//
//int getParent(int Parent[], int x)
//{
//	if (Parent[x] == x) return x;
//	return Parent[x] = getParent(Parent, Parent[x]);
//}
//
//
//void unionParent(int Parent[], int a, int b)
//{
//	a = getParent(Parent, a);
//	b = getParent(Parent, b);
//	if (a < b) Parent[b] = a;
//	else Parent[a] = b;
//}
//
//int findParent(int Parent[], int a, int b)
//{
//	a = getParent(Parent, a);
//	b = getParent(Parent, b);
//	if (a == b) return 1;
//	return 0;
//}
//
//
//int main()
//{
//
//	int P[11];
//	for (int i = 1; i <= 10; i++)
//	{
//		P[i] = i;
//	}
//
//	unionParent(P, 1, 2);
//	unionParent(P, 2, 3);
//	unionParent(P, 3, 4);
//	unionParent(P, 5, 6);
//	unionParent(P, 6, 7);
//	unionParent(P, 7, 8);
//	printf("1�� 5�� ����Ǿ� �ֳ���? %d\n", findParent(P, 1, 5));
//	unionParent(P, 1, 5);
//	printf("1�� 5�� ����Ǿ� �ֳ���? %d\n", findParent(P, 1, 5));
//
//
//
//	return 0;
//}
//
//#endif
