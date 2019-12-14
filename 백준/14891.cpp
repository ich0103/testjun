//#include <cstdio>
//#define MAX 100
//
//int arr[MAX][MAX];
//int cmd[100][100];
//int n,k;
//int ok[4];
//int dir;
//
//void rotate(int *p, int dir)
//{
//	//시계방향 오른쪾 회전
//	if (dir == 1)
//	{
//		int last = p[7];
//		for (int i = 7; i > 0; i--)
//		{
//			p[i] = p[i - 1];
//		}
//		p[0] = last;
//	}
//	//왼쪽 회전
//	else {
//		int first = p[0];
//		for (int i = 0; i < 8; i++)
//		{
//			p[i] = p[i + 1];
//		}
//		p[7] = first;
//	}
//}
//
//void print(int WheelNum, int cmd)
//{
//	printf("바퀴 : %d, 방향 : %d\n", WheelNum, cmd);
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d ", arr[WheelNum][i]);
//	}	
//	puts("");
//}
//
//void printAll()
//{
//	printf("모두 보기\n");
//	for (int i = 1; i <= 4; i++)
//	{
//		for (int j = 0; j < 8; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		puts("");
//	}
//	puts("");
//	printf("OK 보기\n");
//	for (int i = 1; i <= 3; i++)
//	{
//		printf("%d ", ok[i]);
//	}
//	puts("");
//	puts("");
//}
//
//
//
//
//int main()
//{
//	//초기 배열 입력
//	for (int i = 1; i <= 4; i++)
//	{
//		for (int j = 0; j < 8; j++)
//		{
//			scanf("%1d", &arr[i][j]);
//		}
//	}
//
//	scanf("%d", &k);
//	// 명령 입력
//	for (int i = 1; i <= k; i++)
//	{
//		scanf("%d %d", &cmd[i][0], &cmd[i][1]);
//	}
//
//	// 동작 가능 입력
//
//	
//
//	for (int i = 1; i <= k; i++)
//	{
//		
//		//바퀴 동작 여부 확인
//		for (int j = 1; j <= 3; j++)
//		{
//			if (arr[j][2] != arr[j + 1][6]) ok[j] = 1;
//			else ok[j] = 0;
//		}
//
//		//printAll();
//		//printf("명령 : %d, 방향 : %d\n\n", cmd[i][0], cmd[i][1]);
//		
//		rotate(arr[cmd[i][0]], cmd[i][1]);
//
//		//print(cmd[i][0], cmd[i][1]);
//		
//		// 부호 초기화
//		int sign = 0;
//		sign = cmd[i][1];
//
//		for (int j = cmd[i][0]+1; j <= 4; j++)
//		{
//			if (ok[j-1] == 1)
//			{
//				sign = sign * -1;
//				rotate(arr[j], sign);
//			//	print(j, sign);
//			}
//			else break;
//		}
//
//		sign = cmd[i][1];
//		for (int j = cmd[i][0]-1 ; j >=1; j--)
//		{
//			if (ok[j] == 1)
//			{
//			    sign = sign*(-1);
//				rotate(arr[j], sign);
//			//	print(j, sign);
//			}
//			else break;
//		}
//		//puts("");
//	}	
//
//	//printAll();
//	int ans = 0;
//	
//	if (arr[1][0] == 0) ans += 0;
//	else ans += 1;
//	if (arr[2][0] == 0) ans += 0;
//	else ans += 2;
//	if (arr[3][0] == 0) ans += 0;
//	else ans += 4;
//	if (arr[4][0] == 0) ans += 0;
//	else ans += 8;
//
//	printf("%d\n", ans);
//
//	return 0;
//}
//
////1번 톱니바퀴의 12시방향이 N극이면 0점, S극이면 1점
////2번 톱니바퀴의 12시방향이 N극이면 0점, S극이면 2점
////3번 톱니바퀴의 12시방향이 N극이면 0점, S극이면 4점
////4번 톱니바퀴의 12시방향이 N극이면 0점, S극이면 8점


//1등

//#include<cstdio>
//using namespace std;
//
//int a[4][8];
//int k, ans;
//
//void rotate(int n, int d) {
//	int t[8];
//	if (d == 1) {
//		for (int i = 0; i < 8; i++) {
//			t[(i + 1) % 8] = a[n][i];
//		}
//	}
//	else {
//		for (int i = 0; i < 8; i++) {
//			t[i] = a[n][(i + 1) % 8];
//		}
//	}
//	for (int i = 0; i < 8; i++) {
//		a[n][i] = t[i];
//	}
//}
//
//
//
//int main() {
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 8; j++) {
//			scanf("%1d", &a[i][j]);
//		}
//	}
//	scanf("%d", &k);
//
//	while (k--) {
//		int n, d;
//		scanf("%d %d", &n, &d);
//		n--;
//		int direct[4] = { 0 };
//		direct[n] = d;
//		for (int i = n; i < 3; i++) {
//			if (a[i][2] != a[i + 1][6])
//				direct[i + 1] = -direct[i];
//		}
//		for (int i = n; i > 0; i--) {
//			if (a[i][6] != a[i - 1][2])
//				direct[i - 1] = -direct[i];
//		}
//		for (int i = 0; i < 4; i++) {
//			if (direct[i]) {
//				rotate(i, direct[i]);
//			}
//		}
//	}
//	for (int i = 0; i < 4; i++) {
//		if (a[i][0]) ans += (1 << i);
//
//	}
//	printf("%d\n", ans);
//	return 0;
//}
//
