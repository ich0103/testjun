//=========================================================================================
// call by value
//=========================================================================================
// call by value 방식의 경우 swap 함수 내부에서는 값이 변경되지만, 메인 함수에는 영향을 미치지 않음
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void swap(int x, int y);
int main(void){
	//입력-선언부
	int x, y;

	x = 10;
	y = 20;

	swap(x, y);

	// 처리부
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	return 0;
}
void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;

	return;
}
#endif

//=========================================================================================
// call by address
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void swap(int *x, int *y);
int main(void){
	//입력-선언부
	int x, y;

	x = 10;
	y = 20;

	swap(&x, &y);

	// 처리부
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	return 0;
}
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

	return;
}
#endif

//=========================================================================================
// call by reference
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void swap(int &x, int &y);
int main(void){
	//입력-선언부
	int x, y;

	x = 10;
	y = 20;

	swap(x, y);

	// 처리부
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	return 0;
}
void swap(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;

	return;
}
#endif

//=========================================================================================
// 매크로 함수를 사용하여 swap 함수 정의
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define userSwap(x,y,temp) ((temp) = (x),(x) = (y),(y) = (temp)) 

using namespace std;

int main(void){
	//입력-선언부
	int x, y, t;

	x = 10;
	y = 20;

	userSwap(x, y, t);

	// 처리부
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	return 0;
}
#endif

//=========================================================================================
// 비트 연산자를 이용하여 swap 매크로 함수 정의하여 사용하는 형식
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define userSwap(a,b){a= a^b;b= b^a;a=b^a;}

using namespace std;

int main(void){
	//입력-선언부
	int x, y;

	x = 10;
	y = 20;

	userSwap(x, y);

	// 처리부
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	return 0;
}
#endif