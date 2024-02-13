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
	//pair構造体テンプレート
	//名前と年齢のペアの場合
	pair<string, int> pair1{"黒柳徹子", 90};
	
	//	上記の記述で以下のような構造体が用意される
	//	struct pair {
	//		string first;
	//		int second;
	//	}pair1{ "黒柳徹子", 90};
	
	//メンバ first, second
	cout << pair1.first << ":" << pair1.second << endl;
#else
	
	//std::tieで紐づけ
	string name;
	int age;
	tie(name, age) = pair1;
	cout << name << ";" << age << endl;
	
	//<<のオーバーロードで可能になる表示
	cout << pair1 << endl;
	cout << endl;

	//int,stringのペア
	pair<int, string> pair2{ 2024, "パリ五輪" };
	cout << pair2 << endl;
	cout << endl;

	//pairのvector配列
	vector<pair<string, int>> vec;
	vec.emplace_back("AKB", 48);
	vec.emplace_back("NMB", 48);
	vec.emplace_back("HKT", 48);
	show(vec);

	//pairのlist
	list<pair<string, int>> list;
	list.emplace_back("乃木坂", 46);
	list.emplace_back("櫻坂", 46);
	list.emplace_back("日向坂", 46);
	show(list);
#endif

	system("pause>0");
}