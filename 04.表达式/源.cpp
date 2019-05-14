#include<iostream>
#include<vector>
using namespace std;

void test()
{
	vector<int> v;
	v = { 1,2,3,4,5,6,7,8,9 };

	auto vit = v.begin();
	while (vit != v.end())
	{
		if (*vit % 2)
			*vit = 2 * (*vit);
		++vit;
	}
}

void test2()
{
	string s = "word";
	string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
}

void test3()
{
	cout << sizeof(int) << endl;
	cout << sizeof(size_t) << endl;
	cout << sizeof(short) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(float) << endl;
}

void test4()
{
	int a = 0xffffff01;
	char* b = (char*)&a;
	
	int c = *b;
	cout << c << endl;
	if (*b == 1)
	{
		cout << "ะก" << endl;
	}
	else {
		cout << "ด๓" << endl;
	}

}
int main()
{
	//test();
	//test3();
	test4();
	return 0;
}