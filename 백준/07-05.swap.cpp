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

	return;
}
#endif

