#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{	
	string str;
	stack<char> ch;
	while (cin >> str) {
		if (str == "q")
			break;//输入q终止
		else {
			//判断括号是否匹配
			for (size_t i = 0; i < str.length(); ++i) {
				switch (str[i]) {
				case '(':case '[':case '{': {
					ch.push(str[i]);
					break;
				}
				case ')': {
					if (ch.top() == '(')
						ch.pop();
					else
						cout << "False" << endl;
					break;
				}
				case ']': {
					if (ch.top() == '[')
						ch.pop();
					else
						cout << "False" << endl;
					break;
				}
				case '}': {
					if (ch.top() == '{')
						ch.pop();
					else
						cout << "False" << endl;
					break;
				}
				default:
					cout << "False" << endl;
					break;
				}
			}
			if (ch.empty())
				cout << "True" << endl;
		}
	}
	return 0;
}
