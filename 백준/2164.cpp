//#include <iostream>
//#include <deque>
//#include <string>
//#define MAX 500001 
//
//using namespace std;
//
//int n;
//deque<char> arr[2];
//
//int main()
//{
//	string s;
//
//	for (int i = 0; i < 2; i++)
//	{
//		cin >> s;
//		for (int j = 0; j < s.size(); j++)
//		{
//			arr[i].push_back(s[j]);
//		}
//	}
//
//	int min = 987654321;
//	for (int i = 0; i <= arr[1].size()- arr[0].size(); i++)
//	{
//		
//		int ret = 0;
//		for (int j = 0; j < arr[0].size(); j++)
//		{
//				if (arr[0][j] != arr[1][j+i])
//				{
//					ret += 1;
//				}
//		}
//
//		min = (min>ret) ? ret : min;
//	}
//	cout << min << endl;
//
//	return 0;
//}