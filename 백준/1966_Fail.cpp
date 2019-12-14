//#include<cstdio>
//#include<queue>
//
//using namespace std;
//
//int main() {
//
//	int t;
//	scanf("%d", &t);
//	for (int tc = 0; tc < t; tc++)
//	{
//		int n, m, cnt = 0;
//		queue<pair<int, int>> q;
//		priority_queue<int> pq;
//
//		scanf("%d %d", &n, &m);
//		for (int i = 0; i < n; i++)
//		{
//			int a;
//			scanf("%d", &a);
//			q.push({ i, a });
//			pq.push(a);
//		}
//		while (!q.empty())
//		{
//			int idx = q.front().first;
//			int val = q.front().second;
//			q.pop();
//			if (pq.top() == val) {
//				pq.pop();
//				cnt++;
//				if (idx == m)
//				{
//					printf("%d\n", cnt);
//					break;
//				}
//			}
//			else {
//				q.push({ idx,val });
//			}
//		}
//
//
//	}
//
//	return 0;
//}
