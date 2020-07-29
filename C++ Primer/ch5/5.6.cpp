#include<iostream>
#include<vector>
#include<string>

using namespace std;
using std::vector;

int main()
{	
	const vector<string> level{"F", "D", "C", "B", "A", "A+"};
	int scores;
	while (cin >> scores) {
		string str;
		str = scores < 60 ? level[0] : level[(scores - 50) / 10];
		cout << str << endl;
	}
	return 0;
}
