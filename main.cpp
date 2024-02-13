#include<iostream>
#include<tuple>
#include<vector>
#include<list>
using namespace std;

template<typename T1, typename T2>
ostream& operator<<(ostream& s, const pair<T1, T2>& pair) {
	return s << pair.first << ":" << pair.second;
}

template<class C>
void show(const C& data) {
	for (const auto& d : data)
		cout << d << endl;
	cout << endl;
}

int main() 
{
#if 1
	//pair�\���̃e���v���[�g
	//���O�ƔN��̃y�A�̏ꍇ
	pair<string, int> pair1{"�����O�q", 90};
	
	//	��L�̋L�q�ňȉ��̂悤�ȍ\���̂��p�ӂ����
	//	struct pair {
	//		string first;
	//		int second;
	//	}pair1{ "�����O�q", 90};
	
	//�����o first, second
	cout << pair1.first << ":" << pair1.second << endl;
#else
	
	//std::tie�ŕR�Â�
	string name;
	int age;
	tie(name, age) = pair1;
	cout << name << ";" << age << endl;
	
	//<<�̃I�[�o�[���[�h�ŉ\�ɂȂ�\��
	cout << pair1 << endl;
	cout << endl;

	//int,string�̃y�A
	pair<int, string> pair2{ 2024, "�p���ܗ�" };
	cout << pair2 << endl;
	cout << endl;

	//pair��vector�z��
	vector<pair<string, int>> vec;
	vec.emplace_back("AKB", 48);
	vec.emplace_back("NMB", 48);
	vec.emplace_back("HKT", 48);
	show(vec);

	//pair��list
	list<pair<string, int>> list;
	list.emplace_back("�T�؍�", 46);
	list.emplace_back("�N��", 46);
	list.emplace_back("������", 46);
	show(list);
#endif

	system("pause>0");
}