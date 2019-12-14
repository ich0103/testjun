//#include <iostream>
//#include <algorithm>
//#include < vector>
//
//using namespace std;
//
//int getP(int P[], int x)
//{
//	if (P[x] == x) return x;
//	return P[x] = getP(P, P[x]);
//}
//
//void unionP(int P[], int a, int b)
//{
//	a = getP(P, a);
//	b = getP(P, b);
//	if (a < b) P[b] = a;
//	else P[a] = b;
//}
//
//int findP(int P[], int a, int b)
//{
//	a = getP(P, a);
//	b = getP(P, b);
//	if (a == b) return 1;
//	return 0;
//}
//
//class Edge
//{
//public:
//	int node[2];
//	int distance;
//	Edge(int a, int b, int distance)
//	{
//		this->node[0] = a;
//		this->node[1] = b;
//		this->distance = distance;
//	}
//	bool operator<Edge& edge)
//	{
//	return this->distance < edge.distance;
//	}
//};