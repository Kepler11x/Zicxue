#include<iostream>
#include<vector>
#include<string>

using namespace std;
using std::vector;

int main()
{	//将成绩转换成等级输出，不及格为60对应F，100对应A+
	const vector<string> level{"F", "D", "C", "B", "A", "A+"};
	int scores;
	while (cin >> scores) {
		if (scores < 60)
			cout << level[0] << endl;
		else
			cout << level[(scores - 50) / 10] << endl;
	}
	return 0;
}
