//#include <cstdio>
//#define MAX 50
//
//int map[MAX][MAX];
//int visit[MAX][MAX];
//int n, m;
//int y, x, dir;
//int cnt;
//int dy[] = { -1,0,1,0 };
//int dx[] = { 0,-1,0,1 };
//
//int check(int y, int x)
//{
//	int wall=0;
//	for (int i = 0; i < 4; i++)
//	{
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//
//		if (map[ny][nx] == 1)
//		{
//			wall += 1;
//		}
//	}
//
//	if (wall == 4) return 1;
//	else return 0;
//}
//
//void dfs(int y, int x, int dir) {
//
//
//	if (map[y][x] == 0 && visit[y][x] == 0)
//	{
//		cnt += 1;
//		visit[y][x] = 1;
//		map[y][x] = 1;
//	}
//
//	int tempdir = dir;
//
//	while (1)
//	{
//		tempdir = (tempdir+1)%4;
//
//		// ¿òÁ÷ÀÏ Ä­ÀÇ 
//		int ny = y + dy[tempdir];
//		int nx = x + dx[tempdir];
//
//		if (map[ny][nx] == 0 && visit[ny][nx] == 0)
//		{
//			dfs(ny, nx, dir);
//		}
//
//		if (map[ny][nx] == 1)
//		{
//			continue;
//		}
//
//		if (check(ny,nx) == 1) {
//			ny = y - dy[(dir+2)%4];
//			nx = x - dx[(dir + 2) % 4];
//			dfs(ny, nx, dir);
//		}
//	}
//}
//
//int main()
//{
//
//	scanf("%d %d", &n, &m);
//	scanf("%d %d %d", &y, &x, &dir);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &map[i][j]);
//		}
//	}
//
//	dfs(y, x, dir);
//
//	return 0;
//}
//
//
//1 1 1 1 1 1 1 1 1 1
//1 0 0 0 0 0 0 0 0 1
//1 0 0 0 1 1 1 1 0 1
//1 0 0 1 1 0 0 0 0 1
//1 0 1 1 0 0 0 0 0 1
//1 0 0 0 0 0 0 0 0 1
//1 0 X 0 0 0 0 1 0 1
//1 0 0 0 0 0 1 1 0 1
//1 0 0 0 0 0 1 1 0 1
//1 0 0 0 0 0 0 0 0 1
//1 1 1 1 1 1 1 1 1 1