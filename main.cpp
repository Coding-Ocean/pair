#include<iostream>
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

	system("pause>0");
}