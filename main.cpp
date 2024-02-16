#include<iostream>
#include<utility>
#include<tuple>
using namespace std;

template<typename T1, typename T2>
ostream& operator<<(ostream& s, const pair<T1, T2>& pair) {
	return s << pair.first << ":" << pair.second;
}

int main() 
{
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

	system("pause>0");
}