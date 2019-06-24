#include<iostream>

using namespace std;

#if 0
class A
{
public:
	A() { cout << "A" << endl; }
	A(const A& a) { cout << "const A()" << endl; }
};
A cc(A a)
{
	return a;
}
int main()
{
	A a;
	cc(a);
	return 0;
}
#endif//

#if 0
class A
{
public:
	A() { cout << "A()" << endl; }
	~A() { cout << "~A()" << endl; }
};

class B
{
public:
	B() { cout << "B()" << endl; }
	~B() { cout << "~B()" << endl; }
};

class C
{
public:
	C(A& a,B& b):_b(b),_a(a) { cout << "C()" << endl; }
	~C() { cout << "~C()" << endl; }
private:
	A _a;
	B _b;
};

int main()
{
	//A a;
	//B b;
	//C c(a,b);
	//A* p = new A();
	//delete p;
	return 0;
}
#endif 















