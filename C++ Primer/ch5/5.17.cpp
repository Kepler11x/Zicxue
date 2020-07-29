#include<iostream>
#include<vector>
#include<string>

using namespace std;
using std::vector;
int main()
{
	vector<int> v1{ 1,2,3,4,5,6,7,8,9 };
	vector<int> v2{ 5,6,7 };
	vector<int> temp;
	if (v1.size() > v2.size()) {
		temp = v1;
		v1 = v2;
		v2 = temp;
	}
	size_t i = 0;
	size_t j = 0;
	while (i != v1.size()) {
		if (v1[i] != v2[j]) {
			i = 0;
			++j;
		}
		else {
			++i;
			++j;
		}
	}
	if (i == v1.size())
		cout << "True" << endl;
	else
		cout << "False" << endl;
	return 0;
}
