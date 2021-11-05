#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s1;
	string s2;

	cout << "姓を入力:";
	cin >> s1;
	cout << "名を入力:";
	cin >> s2;
	cout << "名前は「" << s1 + s2 << "」です。" << endl;
	return (0);
}
