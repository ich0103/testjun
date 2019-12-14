//#include <iostream>
//
//using namespace std;
//
//int d[91];
//int n;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin >> n;
//
//	d[1] = 1;
//	d[2] = 1;
//	for (int i = 3; i <= n; i++)
//	{
//		d[i] = d[i - 2] + d[i - 1];
//	}
//	cout << d[n];
//
//	return 0;
//}