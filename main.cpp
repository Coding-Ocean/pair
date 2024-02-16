#include<iostream>
#include<utility>
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
	pair<string, int> pair1{"�����O�q", 90};
	
	/*
	��L�̋L�q�ňȉ��̂悤�ȍ\���̂��p�ӂ����
	struct pair {
		string first;
		int second;
	}pair1{ "�����O�q", 90};
	*/

	{
		//�����o first, second
		cout << pair1.first << ":" << pair1.second << endl;
	}
	{
		// <<�̃I�[�o�[���[�h�ŉ\�ɂȂ�pair�̕\��
		cout << pair1 << endl;
	}
	{
		//std::tie�ŕR�Â�
		string name;
		int age;
		tie(name, age) = pair1;
		cout << name << ";" << age << endl;
	}
	{
		//C++17 �\�����S��
		auto [name, age] = pair1;
		cout << name << ";" << age << endl;
	}
	cout << endl;
#else

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