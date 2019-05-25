#include<iostream>
#include<algorithm>
#include<vector>
#define NDEBUG
using namespace std;
//long long int fact(int n)
//{
//	long long int val = 1;
//	while (n != 1)
//	{
//		val *= n--;
//	}
//
//	return val;
//}
//
//int aabs(int a)
//{
//	if (a < 0)
//		a = -a;
//	return a;
//}
//int main(int argc ,const char** argv)
//{
//	//int n;
//	//cin >> n;
//	//cout << fact(n) << endl;
//	//cout << aabs(n) << endl;
//
//	argv[0] = "hello";
//	argv[1] = "world";
//
//	string s;
//	string b;
//	string sb;
//	s = argv[0];
//	b = argv[1];
//	sb = s+" "+b;
//
//	cout << sb << endl;
//
//
//	return 0;
//}
//
//void print(vector<int>& v, int i)
//{
//#ifndef NDEBUG
//	cerr << __func__ << endl;
//	printf("size = %d \n", v.size());
//#endif // !NDEBUG
//
//	if (i < v.size()) {
//		printf("%d ", v[i]);
//		print(v, ++i);
//	}
//	else {
//		printf("\n");
//	}
//}
//int main()
//{
//	vector<int> v = { 1,2,3,4,5,6 };
//	print(v, 0);
//	return 0;
//}

typedef int (*p)(int, int);

int Add(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}

int main()
{
	vector<p> v;
	v.push_back(Add);
	v.push_back(Sub);
	v.push_back(Mul);
	v.push_back(Div);

	cout << v[0](1, 2) << endl;
	cout << v[1](1, 2) << endl;
	cout << v[2](1, 2) << endl;
	cout << v[3](1, 2) << endl;


	return 0;
}