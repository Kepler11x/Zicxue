#include<iostream>
#include<vector>
#include<string>

using namespace std;
using std::vector;
int main()
{
	vector<string> strings;
	string buf;
	string word;
	string maxWord;
	int maxCount = 1;//记录最大出现次数
	int count = 1;
	while (cin >> buf) {
		if (buf == "quit")
			break;//输入quit退出
		else
			strings.push_back(buf);
	}
	word = *strings.begin();
	for (auto beg = strings.begin() + 1; beg != strings.end(); ++beg) {
		if (*beg == word) {
			++count;
			if (count > maxCount) {
				maxCount = count;
				maxWord = *beg;
			}
		}
		else {
			count = 1;
			word = *beg;
		}
	}
	cout << maxWord << "连续出现了" << maxCount << "次" << endl;

	return 0;
}
