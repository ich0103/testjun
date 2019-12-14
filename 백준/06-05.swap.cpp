//=========================================================================================
// call by value
//=========================================================================================
// call by value ����� ��� swap �Լ� ���ο����� ���� ���������, ���� �Լ����� ������ ��ġ�� ����
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void swap(int x, int y);
int main(void){
	//�Է�-�����
	int x, y;

	x = 10;
	y = 20;

	swap(x, y);

	// ó����
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
	//�Է�-�����
	int x, y;

	x = 10;
	y = 20;

	swap(&x, &y);

	// ó����
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
	//�Է�-�����
	int x, y;

	x = 10;
	y = 20;

	swap(x, y);

	// ó����
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
// ��ũ�� �Լ��� ����Ͽ� swap �Լ� ����
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define userSwap(x,y,temp) ((temp) = (x),(x) = (y),(y) = (temp)) 

using namespace std;

int main(void){
	//�Է�-�����
	int x, y, t;

	x = 10;
	y = 20;

	userSwap(x, y, t);

	// ó����
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	return 0;
}
#endif

//=========================================================================================
// ��Ʈ �����ڸ� �̿��Ͽ� swap ��ũ�� �Լ� �����Ͽ� ����ϴ� ����
//=========================================================================================
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define userSwap(a,b){a= a^b;b= b^a;a=b^a;}

using namespace std;

int main(void){
	//�Է�-�����
	int x, y;

	x = 10;
	y = 20;

	userSwap(x, y);

	// ó����
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	return 0;
}
#endif