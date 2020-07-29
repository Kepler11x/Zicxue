#include<iostream>
#include<string>
using namespace std;
int main()
{	
	string text;
	while (cin >> noskipws >> text) {
		//标准输入流中skipws表示读取到空白字符时，将其丢弃，
		//使用noskippws可以忽略空白字符，能够读取空格换行符等了
		int aCount = 0;
		int oCount = 0;
		int eCount = 0;
		int iCount = 0;
		int uCount = 0;
		int space = 0;
		int table = 0;
		int enter = 0;
		int ff = 0;
		int fi = 0;
		int fl = 0;
		for (int i = 0; i != text.length(); ++i) {
			switch (text[i]) {
			case 'A':case 'a':
				++aCount; break;
			case 'O':case 'o':
				++oCount; break;
			case 'E':case 'e':
				++eCount; break;
			case 'I':case 'i':
				++iCount; break;
			case 'U':case 'u':
				++uCount; break;
			case ' ':
				++space;
				break;
			case '\n':
				++enter;
				break;
			case '\t':
				++table;
				break;
			case 'f': 
				++i;
				if (text[i] == 'f')
					++ff;
				else if (text[i] == 'i')
					++fi;
				else if (text[i] == 'l')
					++fl;
				else
					--i;
				continue;
			}//switch
		}//for
			cout << "a的个数为：" << aCount << endl;
			cout << "o的个数为：" << oCount << endl;
			cout << "e的个数为：" << eCount << endl;
			cout << "i的个数为：" << iCount << endl;
			cout << "u的个数为：" << uCount << endl;
			cout << "空格个数为：" << space << endl;
			cout << "制表符个数为：" << table << endl;
			cout << "换行符个数为：" << enter << endl;
			cout << "序列ff个数为：" << ff << endl;
			cout << "序列fi个数为：" << fi << endl;
			cout << "序列fl个数为：" << fl << endl;
	}//while
	return 0;
}
