#include<iostream>

using namespace std;

void test1()
{
	unsigned u = 10, u2 = 42;
	cout << u2 - u << endl;
	cout << u - u2 << endl;

	int i = 10, i2 = 42;
	cout << i2 - i << endl;
	cout << i - i2 << endl;
	cout << i - u << endl;
	cout << u - i << endl;
}

void test2()
{
	cout << "2\115\n";
	cout << "2\t\115\n";
}

void test3()
{
	//int i = 0, j = 1;
	//int& ii = i, &jj = j;
	//ii = jj;
	int i, & ri = i;
	i = 5;
	ri = 10;
	cout << i << "  " << ri << endl;
}

void test4()
{
	//ָ������õ�����
	//1.ָ����������Ҫ��ʼ����������Ҫ��
	//2.ָ���ŵ��Ƕ���ĵ�ַ���������൱�ڸ��������˸�����

	int* p1, p2;//p1��ָ�룬p2����
	int a = 0;
	p1 = &a;
	//p2 = &a;
	const int* p;
	const int ic = 1;
	p = &ic;

	
}

//struct Foo
//{}

class Sales_data
{
	std::string BookNo;
	unsigned long count = 0;
	double pice = 0.0;

};
int main()
{
	//test1();
	//test2();
	//test3();
	return 0;
}