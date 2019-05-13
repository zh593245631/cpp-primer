#include<iostream>
#include<string>

using namespace std;

//void test1()
//{
//	string word;
//	while (cin >> word)
//	{
//		cout << word<< endl;
//	}
//}
//
//void test2()
//{
//	string line;
//	while (getline(cin, line))
//	{
//		//if(!line.empty())
//		if (line.size() > 10)
//			cout << line << endl;
//	}
//}
//
//void test3()
//{
//	string word;
//	while (getline(cin, word))
//	{
//		if (!word.empty())
//		{
//			int i = 0;
//			int size = word.size();
//			while (i < size && word[i] == ' ')
//			{
//				i++;
//			}
//			while (i < size)
//			{
//				cout << word[i];
//				if (word[i++] == ' ')break;
//			}
//			cout << endl;
//		}
//	}
//}
//
//void test4()
//{
//	string s1;
//	string s2;
//
//	//cout << "s1: ";
//	//cin >> s1;
//	//cout << "s2: ";
//	//cin >> s2;
//	while (cin >> s1 && cin >> s2)
//	{
//
//		if (s1 == s2)
//		{
//			cout << "s1 == s2" << endl;
//		}
//		else if (s1 > s2) {
//			cout << s1 << endl;
//		}
//		else {
//			cout << s2 << endl;
//		}
//	}
//}
//
//void test5()
//{
//	string s1;
//	string s2;
//
//	while (cin >> s1 && cin >> s2)
//	{
//		int s1_Size = s1.size();
//		int s2_Size = s2.size();
//		if (s1_Size == s2_Size)
//		{
//			cout << "µÈ³¤" << endl;
//		}
//		else if (s1_Size > s2_Size) {
//			cout << s1 << endl;
//		}
//		else {
//			cout << s2 << endl;
//		}
//	}
//}
//
//void test6()
//{
//	string word;
//
//	while (cin >> word)
//	{
//		cout << word<<" ";
//	}
//}
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//cout << sizeof(string) << endl;
//	//test4();
//	//test5();
//	test6();
//	return 0;
//}

#include<time.h>
const string Hex = "0123456789ABCDEF";

void test()
{
	int n;
	string ans;
	while (cin >> n)
	{
		if (n < Hex.size())
			ans += Hex[n];
	}

	cout << ans << endl;
}

void test2()
{
	string a = "qwertyu";

	for (auto& e : a)
		e = 'x';
}

void test3()
{
	string a = "qwertyu";

	for (char& e : a)
		e = 'x';


}

void test4()
{
	string a = "qwertyu";

	int i = 0;
	while (a[i])
	{
		a[i] = 'x';
		i++;
	}

}

void test5()
{
	string s;
	
	getline(cin, s);
	auto vit = s.begin();
	
	while (vit != s.end())
	{
		if (ispunct(*vit)) {
			vit = s.erase(vit);
		}
		else
		{
			vit++;
		}
	}
	cout << s << endl;
}
//int main()
//{
//	//test();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//
//	const string s = "keep out";
//	for (auto& e : s)
//	{
//		cout << typeid(e).name() << endl;
//	}
//	return 0;
//}

#include<vector>
#include<cctype>
void test6()
{
	vector<int> v;
	int data;
	while (cin >> data)
	{
		v.push_back(data);
	}

	auto cvit = v.cbegin();
	while (cvit != v.cend())
	{
		cout << *cvit << endl;
		cvit++;
	}
}

void test7()
{
	vector<string> s;
	string data;
	while (cin >> data)
	{
		s.push_back(data);
	}

	auto cvit = s.cbegin();
	while (cvit != s.cend())
	{
		cout << *cvit << endl;
		cvit++;
	}
}

void test8()
{
	vector<size_t> scores(11, 0);
	size_t grade;

	while (cin>>grade)
	{
		if(grade<=100)
		scores[grade / 10]++;
	}

	for (auto& e : scores)
		cout << e << " ";
	cout << endl;
}

void test9()
{
	vector<string> ss;
	string s;
	while (cin >> s)
	{
		auto vit = s.begin();
		while (vit != s.end())
		{
			*vit = toupper(*vit);
			vit++;
		}
		ss.push_back(s);
	}

	for (auto& e : ss)
		cout << e << endl;

}
void test10()
{
	vector<int> v;
	int data;
	while (cin >> data)
	{
		v.push_back(data);
	}

	if (v.size() == 1)
		cout << v[0] << endl;
	auto vit = v.begin();
	while (vit != v.end() - 1)
	{
		int tmp = *vit++;
		cout << tmp+*vit << endl;
	}
}
void test11()
{
	vector<int> v;
	int data;
	while (cin >> data)
	{
		v.push_back(data);
	}

	auto vit = v.begin();
	auto rvit = v.end()-1;

	while (vit<rvit)
	{
		cout << *vit+*rvit << endl;
		vit++;
		rvit--;
	}
	if (vit == rvit)
		cout << *vit << endl;

}
int size()
{
	return 1;
}
int main()
{
	//vector<string> s(10, "null");
	//test6();
	//test7();
	//test8();
	//test9();
	//test10();
	//test11();

	int a[2 * 2];
	//int b[size()];
	constexpr size_t n = 10;
	int c[n];

	return 0;
}