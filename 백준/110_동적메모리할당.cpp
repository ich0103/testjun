//#include <iostream>
//
//using namespace std;
//
//class Info {
//private :
//	int* data;
//	int* data_arr;
//public:
//	Info() {
//		data = new int;
//		data_arr = new int[3];
//	}
//	~Info() {
//		delete data;
//		delete[] data_arr;
//	}
//
//	void Dispose()
//	{
//		delete data;
//		delete[] data_arr;
//	}
//};
//
//int main()
//{
//	Info *info = new Info();
//	info->Dispose();
//	delete info;
//
//	return 0;
//
//}

//정상적인 경우 에러 발생 이유 : 한번 해제 했는데 다시 한번 더 해제했기 때문