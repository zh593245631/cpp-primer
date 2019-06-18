#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;

void test()
{
	list<int> l{1,2,3};
	vector<double> v1(l.begin(),l.end());
	for (const auto& e : v1)
	{
		cout << e << " ";
	}
	cout << endl;
}
void test1()
{
	vector<int> v1{ 1,2,3 };
	vector<int> v2{ 1,2,3 };
	if (v1 == v2) {
		cout << "1" << endl;
	}
	list<int> l1{ 1,2,3 };
	vector<int> tmp(l1.begin(),l1.end());
	if (v1 == tmp) {
		cout << "1" << endl;
	}
}
void test2()
{
	vector<int> v;
	//v.at(0);
	v.erase(v.begin(), v.end());
	cout << "hehe" << endl;
}
void test3()
{
	const char* p = "hello world";
	string s;
	s.insert(s.size(), p + 2);
}

void test4()
{
	string s = "pi = 3.14";
	double d = stod(s.substr(s.find_first_of("+-.0123456789")));
}
int main()
{
	//test();
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}