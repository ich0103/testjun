//#include <iostream>
//#include<string>
//
//using namespace std;
//
//class KingInfo
//{
//private:
//	string value_;
//	int number_;
//
//public:
//	KingInfo() {};
//
//public:
//	void SetValue(const string value)
//	{
//		if (value.empty() == false)
//			value_ = value;
//		else
//			cout << "�߸��� ����!" << endl;
//	}
//	
//	string GetValue() const
//	{
//		if (value_.empty() == false)
//			return value_;
//		else
//			return "������ ���� ���ּ���";
//	}
//};
//
//int main()
//{
//	KingInfo king_info1;
//	king_info1.SetValue("���� ���� �̿�");
//
//	KingInfo king_info2;
//	king_info2.SetValue("���� ���� ��ȣ");
//
//	cout << king_info1.GetValue() << endl;
//	cout << king_info2.GetValue() << endl;
//
//	return 0;
//}