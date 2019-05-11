#include<iostream>
#include<string>

using namespace std;

void test1()
{
	string word;
	while (cin >> word)
	{
		cout << word<< endl;
	}
}

void test2()
{
	string line;
	while (getline(cin, line))
	{
		//if(!line.empty())
		if (line.size() > 10)
			cout << line << endl;
	}
}

void test3()
{
	string word;
	while (getline(cin, word))
	{
		if (!word.empty())
		{
			int i = 0;
			int size = word.size();
			while (i < size && word[i] == ' ')
			{
				i++;
			}
			while (i < size)
			{
				cout << word[i];
				if (word[i++] == ' ')break;
			}
			cout << endl;
		}
	}
}

void test4()
{
	string s1;
	string s2;

	//cout << "s1: ";
	//cin >> s1;
	//cout << "s2: ";
	//cin >> s2;
	while (cin >> s1 && cin >> s2)
	{

		if (s1 == s2)
		{
			cout << "s1 == s2" << endl;
		}
		else if (s1 > s2) {
			cout << s1 << endl;
		}
		else {
			cout << s2 << endl;
		}
	}
}

void test5()
{
	string s1;
	string s2;

	while (cin >> s1 && cin >> s2)
	{
		int s1_Size = s1.size();
		int s2_Size = s2.size();
		if (s1_Size == s2_Size)
		{
			cout << "µÈ³¤" << endl;
		}
		else if (s1_Size > s2_Size) {
			cout << s1 << endl;
		}
		else {
			cout << s2 << endl;
		}
	}
}

void test6()
{
	string word;

	while (cin >> word)
	{
		cout << word<<" ";
	}
}
int main()
{
	//test1();
	//test2();
	//test3();
	//cout << sizeof(string) << endl;
	//test4();
	//test5();
	test6();
	return 0;
}