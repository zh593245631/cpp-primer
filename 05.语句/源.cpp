#include<iostream>
#include<map>
using namespace std;

//int main()
//{
//	cin >> noskipws;//设置cin读取空白符；
//	char c;
//	size_t acount =0, ecount =0, icount =0, ocount =0, ucount = 0,scount = 0;
//	while (cin >> c)
//	{
//		if (c == 'a')++acount;
//		if (c == 'e')++ecount;
//		if (c == 'i')++icount;
//		if (c == 'o')++ocount;
//		if (c == 'u')++ucount;
//		if (c == ' ')++scount;
//
//	}
//
//	cout << "a: " << acount << endl;
//	cout << "e: " << ecount << endl;
//	cout << "i: " << icount << endl;
//	cout << "o: " << ocount << endl;
//	cout << "u: " << ucount << endl;
//	cout << "space: " << scount << endl;
//
//
//	return 0;
//}

double _div(int a, int b)
{
	if (b == 0)
		throw "0不能为除数";
	return (double)a / b;
}
int main()
{
	int a, b;

	while (cin >> a >> b)
	{
		try {
			double ans = _div(a, b);
			cout << ans << endl;
		}
		catch (const char* e) {
			cout << e << endl;
			cout << "try again? y or n" << endl;
			char c;
			cin >> c;
			if (c == 'n' || !c)break;
		}
	}
	return 0;
}