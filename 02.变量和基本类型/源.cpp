#include<iostream>
#include"Sales_item.h"

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
	//指针和引用的区别
	//1.指针声明不需要初始化，引用需要，
	//2.指针存放的是对象的地址，而引用相当于给对象起了个别名

	int* p1, p2;//p1是指针，p2不是
	int a = 0;
	p1 = &a;
	//p2 = &a;
	const int* p;
	const int ic = 1;
	p = &ic;

	
}

//struct Foo
//{}


int main()
{
	//test1();
	//test2();
	//test3();
	Sales_data data;
	Sales_data d;
	if (cin >> d.BookNo&&cin>>d.count&&cin>>d.pice) {
		d.pice = d.pice * d.count;
		while (cin >> data.BookNo && cin >> data.count && cin >> data.pice)
		{
			if (d.BookNo == data.BookNo) {
				d.pice += data.pice*data.count;
				d.count += data.count;
			}
			else {
				cout << d.BookNo << " " << d.count << " " << d.pice << " " << d.pice / d.count << endl;
				d.BookNo = data.BookNo;
				d.count = data.count;
				d.pice = data.pice * data.count;
			}
		}
		cout << d.BookNo << " " << d.count << " " << d.pice << " " << d.pice / d.count << endl;
	}
	//cout << d.BookNo << " " << d.count << " " << d.pice << " " << d.pice / d.count << endl;
	return 0;
}