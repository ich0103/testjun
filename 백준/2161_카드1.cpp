//#include <iostream>
//#include <deque>
//#define MAX 500001 
//
//using namespace std;
//
//int n;
//deque<int> arr;
//
//int main()
//{
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		arr.push_back(i);
//	}
//
//	while (arr.size() != 1)
//	{
//		int a = arr.front();
//		cout << a << " ";
//		arr.pop_front();
//		
//		int temp = arr.front();
//		arr.pop_front();
//		arr.push_back(temp);
//	}
//
//	cout << arr.at(0) << endl;
//}