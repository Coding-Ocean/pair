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
	//pair構造体テンプレート
	pair<string, int> pair1{"黒柳徹子", 90};
	
	/*
	上記の記述で以下のような構造体が用意される
	struct pair {
		string first;
		int second;
	}pair1{ "黒柳徹子", 90};
	*/

	{
		//メンバ first, second
		cout << pair1.first << ":" << pair1.second << endl;
	}
	{
		// <<のオーバーロードで可能になるpairの表示
		cout << pair1 << endl;
	}
	{
		//std::tieで紐づけ
		string name;
		int age;
		tie(name, age) = pair1;
		cout << name << ";" << age << endl;
	}
	{
		//C++17 構造化拘束
		auto [name, age] = pair1;
		cout << name << ";" << age << endl;
	}

	system("pause>0");
}