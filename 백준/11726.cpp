////https://www.acmicpc.net/problem/11726
//
//#if 0
//
//#include <iostream>
//
//using namespace std;
//
//int dp(int n) {
//	if (n == 1) return 1;
//	if (n == 2) return 2;
//	return dp(n - 1) + dp(n - 2);
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	int n;
//	cin >> n;
//	cout << dp(n);
//
//	return 0;
//}
//#endif
//
//#if 0
//// Top down
//#include <iostream>
//
//using namespace std;
//
//int d[1001];
//
//int dp(int n) {
//	if (n == 1) return 1;
//	if (n == 2) return 2;
//
//	if (d[n] > 0) return d[n];
//
//
//	return d[n] = (dp(n - 1) + dp(n - 2))%10007;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	int n;
//	cin >> n;
//	cout << dp(n);
//
//	return 0;
//}
//#endif
//
//#if 1
//// Bottom up
//#include <iostream>
//
//using namespace std;
//
//int d[1001];
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	int n;
//	cin >> n;
//
//	d[0] = 1;
//	d[1] = 1;
//	d[2] = 3;
//
//	for (int i = 2; i <= n; i++)
//	{
//		d[i] = d[i - 1] + 2*d[i - 2];
//		d[i] %= 10007;
//	}
//	cout << d[n] << endl;
//
//	return 0;
//}
//#endif
