//#include <iostream>
//
//using namespace std;
//
//enum Status
//{
//	normal =0,
//	abnormal,
//	disconnect=100,
//	close
//};
//
//enum class MachineStatus :char
//{
//	normal = 'n',
//	abnormal,
//	disconnect = 100,
//	close
//};
//int main()
//{
//	MachineStatus machine = MachineStatus::normal;
//
//	
//
//	switch (machine)
//	{
//	case MachineStatus::abnormal:
//		cout << "Status:abnormal" << endl;
//		break;
//	case MachineStatus::normal:
//		cout << "Status:normal" << endl;
//		break;
//	case MachineStatus::disconnect:
//		cout << "Status:disconnect" << endl;
//		break;
//	case MachineStatus::close:
//		cout << "Status:close" << endl;
//		break;
//
//
//
//	}
//	cout << "machine:" << static_cast<int>(machine) << ", " << static_cast<char>(machine) << endl;
//
//	return 0;
//}