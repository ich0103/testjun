////#define _CRT_SECURE_NO_WARNINGS
////#include <cstdio>
////#include <Windows.h>
////#include <stdlib.h>
////#define MAX 10000
////#define mMAX 100
////
////typedef struct _pos{
////	int y,x;
////}pos;
////
////typedef struct _snake{
////	pos head;
////	pos tail;
////	int dir;
////	int time;
////	int length;
////}snake;
////
////typedef struct _comm
////{
////	int t;
////	char i;
////}comm;
////
////comm queue[MAX];
////int front, rear;
////int map[mMAX][mMAX];
////int n, m, k, ret;
////
////int dy[] = { 0,1,0,-1 };
////int dx[] = { 1,0,-1,0 };
////
////void input()
////{
////	scanf("%d", &n);
////	for (int i = 0; i < n; i++)
////	{
////		for (int j = 0; j < n; j++)
////		{
////			map[i][j] = 0;
////		}
////	}
////
////	int appleCnt=0;
////
////	scanf("%d", &appleCnt);
////	for (int i = 0; i < appleCnt; i++)
////	{
////		int a, b;
////		scanf("%d %d", &a, &b);
////		map[a-1][b-1] = 2;
////	}
////
////	int commCnt=0;
////	scanf("%d", &commCnt);
////	comm init;
////	for (int i = 0; i < commCnt; i++)
////	{
////		int t;
////		char c;
////		scanf("%d %c", &t, &c);
////		init.t = t;
////		init.i = c;
////		queue[rear++] = init;
////	}
////
////}
////
////void print() {
////
////	Sleep(100);
////	system("cls");
////	for (int i = 0; i < n; i++)
////	{
////		for (int j = 0; j < n; j++)
////		{
////			printf("%d ", map[i][j]);
////		}
////		puts("");
////	}
////}
////
////void go() {
////	snake cobra;
////	cobra.head.y = 0;
////	cobra.head.x = 0;
////	cobra.tail.y = 0;
////	cobra.tail.x = 0;
////	cobra.length = 1;
////	cobra.dir = 0;
////	cobra.time = 0;
////	int time = 1;
////	map[cobra.head.y][cobra.head.x] = 1;
////	while (1)
////	{
////		
////		cobra.head.y += dy[cobra.dir];
////		cobra.head.x += dx[cobra.dir];
////
////		if (cobra.head.y >= n || cobra.head.y < 0 || cobra.head.x >= n || cobra.head.x < 0)
////		{
////			ret = time;
////			break;
////		}		
////		if (map[cobra.head.y][cobra.head.x] == 0)
////		{
////			map[cobra.head.y][cobra.head.x] = 1;
////
////			map[cobra.tail.y][cobra.tail.x] = 0;
////
////			for (int i = 0; i < 4; i++)
////			{
////				int ny = cobra.tail.y + dy[i];
////				int nx = cobra.tail.x + dx[i];
////
////				if (map[ny][nx] == 1)
////				{
////					cobra.tail.y = ny;
////					cobra.tail.x = nx;
////					break;
////				}
////
////			}
////		}
////		else if (map[cobra.head.y][cobra.head.x] == 2)
////		{
////			cobra.length += 1;	
////			map[cobra.head.y][cobra.head.x] = 1;
////		}
////		else if (map[cobra.head.y][cobra.head.x] == 1)
////		{
////			ret = time;
////			break;
////		}
////
////		if (time == queue[front].t)
////		{
////			if (queue[front].i == 'D')
////			{
////				cobra.dir = (cobra.dir + 1) % 4;
////			}
////			if (queue[front].i == 'L')
////			{
////				cobra.dir = (cobra.dir + 3) % 4;
////			}
////			queue[front++];
////		}
////		time += 1;
////
////		print();
////
////	}
////
////	return;
////}
////
////int main()
////{
////	input();
////
////	go();
////
////	printf("%d", ret);
////
////	return 0;
////}
//
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string.h>
//#include <cstdio>
//#include <stack>
//#define MAX_SIZE 100
//#define MOD 1000000009
//#define ull unsigned long long
//#define ll long long
//#define mp make_pair
//
//using namespace std;
//
//typedef pair<int, int> p;
//
//int N, K, L;
//int map[MAX_SIZE][MAX_SIZE]; // »ç°ú´Â 2, ¹ìÀº 1, ¸ÊÀº 0
//vector<p> v; //sec, turn
//
//int dx[4] = { -1, 1, 0, 0 };
//int dy[4] = { 0, 0, -1, 1 };
//
////¿À¸¥ÂÊ : À§ -> ¿À, ¾Æ·¡ -> ¿Þ, ¿À -> ¾Æ, ¿Þ -> À§
////¿ÞÂÊ : À§ -> ¿Þ, ¾Æ·¡ -> ¿À¸¥, ¿À -> À§, ¿Þ -> ¾Æ
//
////r : 0 -> 3, 1 -> 2, 3 -> 1, 2 -> 0
////l : 0 -> 2, 1 -> 3, 3 -> 0, 2 -> 1
//
//int turn(int now, int next)
//{
//	if (next == 0) // ¿ÞÂÊ
//	{
//		if (now == 0 || now == 1) return (now + 2) % 4;
//		else return 3 - now;
//	}
//	else // ¿À¸¥ÂÊ
//	{
//		if (now == 0 || now == 1) return 3 - now;
//		else return (now + 2) % 4;
//	}
//}
//
//
//void input()
//{
//	scanf("%d %d", &N, &K);
//
//	for (int i = 0; i < K; i++)
//	{
//		int x, y;
//		scanf("%d %d", &x, &y);
//		map[x - 1][y - 1] = 2;
//	}
//
//	scanf("%d", &L);
//
//	for (int i = 0; i < L; i++)
//	{
//		int s;
//		char c;
//
//		scanf("%d %c", &s, &c);
//
//		int d;
//		if (c == 'L') d = 0; //¿Þ
//		else d = 1; //¿À¸¥ÂÊ
//
//		v.push_back(mp(s, d));
//	}
//}
//
//void process()
//{
//	vector<p> snake;
//
//	int x = 0, y = 0; // ¸Ó¸® À§Ä¡
//
//	int d = 3;
//	int sec = 0;
//
//	int vi = 0;//½Ã°£ º¤ÅÍ ÀÎµ¦½º
//	bool v_flag = 0;//º¤ÅÍ°¡ ³¡³ª¸é 1ÀÌµÊ
//
//	map[x][y] = 1;
//	snake.push_back(mp(x, y));
//
//	while (1)
//	{
//		if (!v_flag && sec == v[vi].first)
//		{
//			d = turn(d, v[vi++].second);
//			if (vi == v.size()) v_flag = 1;
//		}
//
//		//´ÙÀ½ ÁÂÇ¥
//		int nx = x + dx[d];
//		int ny = y + dy[d];
//
//		if (nx < 0 || ny < 0 || nx >= N || ny >= N) break; // ¸Ê ¹þ¾î³ª´ÂÁö °Ë»ç
//
//		//¸Ê°Ë»ç
//		if (map[nx][ny] == 1) break;
//		else if (map[nx][ny] == 0)
//		{
//			map[snake[0].first][snake[0].second] = 0;
//			snake.erase(snake.begin());
//		}
//
//		//½º³×ÀÌÅ© ¸Ó¸® °»½Å ¹× ¸Ê °»½Å
//		x = nx;
//		y = ny;
//		map[x][y] = 1;
//		snake.push_back(mp(x, y));
//
//		sec++;
//	}
//
//	printf("%d\n", sec + 1);
//}
//
//
//int main()
//{
//	input();
//	process();
//
//	return 0;
//}
