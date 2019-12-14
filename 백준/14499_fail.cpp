//#include <cstdio>
//#define MAX 20
//typedef struct _CUBE {
//	int top, bottom, left, right, front, rear;
//}CUBE;
//
//int n, m, comm;
//int map[MAX][MAX];
//int icomm[1000];
//
//int main()
//{
//	CUBE cube;
//	cube.top = 0;
//	cube.bottom = 0;
//	cube.front = 0;
//	cube.rear = 0;
//	cube.right = 0;
//	cube.left = 0;
//	int y, x;
//	scanf("%d %d %d %d %d", &n, &m, &x, &y, &comm);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &map[i][j]);
//		}
//	}
//	for (int i = 0; i < comm; i++)
//	{
//		scanf("%d", &icomm[i]);
//	}
//	//마지막 줄에는 이동하는 명령이 순서대로 주어진다. 동쪽은 1, 서쪽은 2, 북쪽은 3, 남쪽은 4로 주어진다.
//
//	for (int i = 0; i < comm; i++)
//	{
//		printf("명령 전\n");
//		printf("cube top : %d\n", cube.top);
//		printf("cube bottom : %d\n", cube.bottom);
//		printf("cube front : %d\n", cube.front);
//		printf("cube rear : %d\n", cube.rear);
//		printf("cube right : %d\n", cube.right);
//		printf("cube left : %d\n", cube.left);
//		printf("명령 : %d\n", icomm[i]);
//
//		if (i == 11)
//		{
//			int dd = 0;
//		}
//		switch (icomm[i])
//		{
//		case 1:
//			if ((y < n) && (y >= 0) && ((x + 1) < m) && ((x + 1) >= 0))
//			{
//				CUBE temp = cube;
//				cube.top = temp.left;
//				cube.bottom = temp.right;
//				cube.front = temp.front;
//				cube.rear = temp.rear;
//				cube.right = temp.top;
//				cube.left = temp.bottom;
//				y = y;
//				x += 1;
//
//				if (map[y][x] == 0)
//				{
//					map[y][x] = cube.bottom;
//				}
//				else {
//					cube.bottom = map[y][x];
//				}
//				printf("%d\n", cube.top);
//			}
//			break;
//
//		case 2:
//			if ((y < n) && (y >= 0) && ((x - 1) < m) && ((x - 1) >= 0))
//			{
//				CUBE temp = cube;
//				cube.top = temp.right;
//				cube.bottom = temp.left;
//				cube.front = temp.front;
//				cube.rear = temp.rear;
//				cube.right = temp.bottom;
//				cube.left = temp.top;
//				y = y;
//				x -= 1;
//
//				if (map[y][x] == 0)
//				{
//					map[y][x] = cube.bottom;
//				}
//				else {
//					cube.bottom = map[y][x];
//				}
//				printf("%d\n", cube.top);
//			}
//			break;
//
//		case 3:
//			if ((y - 1 < n) && (y - 1 >= 0) && ((x) < m) && ((x) >= 0))
//			{
//				CUBE temp = cube;
//				cube.top = temp.front;
//				cube.bottom = temp.rear;
//				cube.front = temp.bottom;
//				cube.rear = temp.top;
//				cube.right = temp.right;
//				cube.left = temp.left;
//				y -= 1;
//				x = x;
//
//				if (map[y][x] == 0)
//				{
//					map[y][x] = cube.bottom;
//				}
//				else {
//					cube.bottom = map[y][x];
//				}
//				printf("%d\n", cube.top);
//			}
//			break;
//
//		case 4:
//			if ((y + 1 < n) && (y + 1 >= 0) && ((x) < m) && ((x) >= 0))
//			{
//				CUBE temp = cube;
//				cube.top = temp.rear;
//				cube.bottom = temp.front;
//				cube.front = temp.top;
//				cube.rear = temp.bottom;
//				cube.right = temp.right;
//				cube.left = temp.left;
//				y += 1;
//				x = x;
//
//				if (map[y][x] == 0)
//				{
//					map[y][x] = cube.bottom;
//				}
//				else {
//					cube.bottom = map[y][x];
//				}
//				printf("%d\n", cube.top);
//			}
//			break;
//
//		}
//
//		printf("명령 후\n");
//		printf("cube top : %d\n", cube.top);
//		printf("cube bottom : %d\n", cube.bottom);
//		printf("cube front : %d\n", cube.front);
//		printf("cube rear : %d\n", cube.rear);
//		printf("cube right : %d\n", cube.right);
//		printf("cube left : %d\n", cube.left);
//		printf("명령 : %d\n", icomm[i]);
//
//
//	}
//
//
//	return 0;
//}