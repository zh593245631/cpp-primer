#include<iostream>
#include<memory>
#include<fstream>
#include<map>
#include<set>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
#if 0
class A
{
public:
	A() { cout << "A()" << endl; }
	~A() { cout << "~A()" << endl; }
};
int main()
{
	shared_ptr<A> p(new A());

	return 0;
}
#endif//test

#if 0
class TextQuery
{
public:
	TextQuery(ifstream& infile)
	{
		string text;
		while (getline(infile, text))
		{
			_file.push_back(text);
			int n = _file.size() - 1;
			istringstream line(text);
			string word;
			while (line >> word)
			{
				_map[word].insert(n);
			}
		}
	}

	void print(string s)
	{
		if (_map.find(s) == _map.end())
			return;
		for (const auto& e : _map[s])
		{
			cout <<"line: "<<e+1<<"  "<< _file[e] << endl;
		}
	}
private:
	vector<string> _file;
	map<string,set<int>> _map;
};

void runQueries(ifstream& infile)
{
	TextQuery text(infile);
	do
	{
		string q;
		cout << "请输入要查询单词：" << flush;
		if ((cin >> q) && q == "q")break;
		text.print(q);
	} while (1);
}
int main()
{
	ifstream infile("1.txt");
	runQueries(infile);
	return 0;
}
#endif//文本查询程序

#if 1
class TextQuery
{
public:
	TextQuery(ifstream& infile)
		:_file(new vector<string>)
	{
		string text;
		while (getline(infile, text))
		{
			_file->push_back(text);
			int n = _file->size() - 1;
			istringstream line(text);
			string word;
			while (line >> word)
			{
				auto& tmp = _map[word];
				if (!tmp)tmp.reset(new set<int>);//第一次
				
				tmp->insert(n);
			}
		}
	}

	void print(string s)
	{
		if (_map.find(s) == _map.end())
			return;
		for (const auto& e : *_map[s])
		{
			cout << "line: " << e + 1 << "  " << (*_file)[e] << endl;
		}
	}
private:
	shared_ptr<vector<string>> _file;
	map<string, shared_ptr<set<int>>> _map;
};

void runQueries(ifstream& infile)
{
	TextQuery text(infile);
	do
	{
		string q;
		cout << "请输入要查询单词：" << flush;
		if ((cin >> q) && q == "q")break;
		text.print(q);
	} while (1);
}
int main()
{
	ifstream infile("1.txt");
	runQueries(infile);
	return 0;
}
#endif//文本查询程序