#include<iostream>

using namespace std;
//class A
//{
//public:
//	A(){}
//	virtual void test(int a = 20) { cout << "A" <<" "<<a<< endl; }
//
//};
//
//class B:public A
//{
//public:
//	B() {}
//	void test(int a = 10) { cout << "B" << " "<<a<<endl; }
//
//};
//
//
//int main()
//{
//	A* a = new B;
//	a->test();
//	return 0;
//}
 

class A
{
public:
	virtual void test1() = 0;
	virtual void test2() {};
};

class B
{
public:
	virtual void test1() {};
	//void test2() {};
};

int main()
{
	B b;
	return 0;
}