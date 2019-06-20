#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<list>
#include<string>

#if 0
int main()
{
	std::vector<int> v{ 4,3,6,7,8,2,7,4,3,3,8 };
	std::sort(v.begin(), v.end(), std::greater<int>());
	//把多余重复的元素放后面
	auto end_unique = std::unique(v.begin(), v.end());
	v.erase(end_unique, v.end());
	for (const auto& e : v)
	{
		std::cout << e << " ";
	}
	std::cout << std::endl;
}
#endif//test1

#if 0
#include<string>
	template<class T>
	bool isS(T& a, T& b)
	{
		return a.size() < b.size();
	}
	template<class T>
	class A
	{
	public:
		bool operator()(T& a, T& b)
		{
			return a.size() < b.size();
		}
	};
int main()
{
	std::vector<std::string> v{ "123ssss","asssd","ssssss" };
	//sort(v.begin(), v.end(), isS<std::string>);
	sort(v.begin(), v.end(), A<std::string>());

	return 0;
}
#endif//test2

#if 0
#include<list>
int main()
{
	std::list<int> l{ 1,4,5,0,7,0,5,8,2,0 };
	auto a = std::find(l.rbegin(),l.rend(),0);
	std::cout << *a << std::endl;
	return 0;
}
#endif//test3

#if 0
int main()
{
	std::list<int> lis{ 1,2,5,5,4,4,3,4,2,34,5,6,67,7,8,3,5 };
	lis.sort();
	lis.unique();
	for (const auto& e : lis)
		std::cout << e << " ";
	return 0;
}
#endif//test4

#if 0
int main()
{
	std::list<int> l1{ 1,23,4,5,5,6,6,7 };
	std::list<int> l2{ 1,23,4,5,5,6,6,7 };
	l1.sort();
	l2.sort();
	l1.merge(l2);

	for (const auto& e : l1)
		std::cout << e << " ";
	std::cout << std::endl;

	return 0;
}
#endif//test5

#if 1

int main()
{
	std::list<int> l1{ 1,2,3,4,5,6,7,8,2,2,2,2,2 };
	std::replace(l1.begin(), l1.end(), 2, 0);
	std::replace_if(l1.begin(), l1.end(), [](int i) {return i % 2; }, 0);
	return 0;
}
#endif//test6