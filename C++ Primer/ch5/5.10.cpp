#include<iostream>
#include<string>
using namespace std;
int main()
{	
	string text;
	while (cin >> text) {
			int aCount = 0;
			int oCount = 0;
			int eCount = 0;
			int iCount = 0;
			int uCount = 0;
			for (int i = 0; i != text.length(); ++i) {
				if (text[i] == 'a' || text[i] == 'A')
					++aCount;
				if (text[i] == 'o' || text[i] == 'O')
					++oCount;
				if (text[i] == 'i' || text[i] == 'E')
					++iCount;
				if (text[i] == 'e' || text[i] == 'I')
					++eCount;
				if (text[i] == 'u' || text[i] == 'U')
					++uCount;
			}
			cout << "a的个数为：" << aCount << endl;
			cout << "o的个数为：" << oCount << endl;
			cout << "e的个数为：" << eCount << endl;
			cout << "i的个数为：" << iCount << endl;
			cout << "u的个数为：" << uCount << endl;
	}
	return 0;
}
