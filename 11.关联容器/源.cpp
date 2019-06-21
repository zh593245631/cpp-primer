#include<iostream>
#include<map>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

map<string, string> buildMap(ifstream& map_file)
{
	map<string, string> trans_map;
	string key;
	string value;
	while (map_file>>key && getline(map_file, value))
	{
		if (value.size() > 1)
			trans_map[key] = value.substr(1);
	}
	return trans_map;
}
const string& transform(const string& word, const map<string, string>& trans_map) 
{
	//查表有没有
	auto map_it = trans_map.find(word);
	//结果
	if (map_it != trans_map.end())
		return map_it->second;
	else
		return word;
}
void word_transform(ifstream& map_file, ifstream& input)
{
	auto trans_map = buildMap(map_file); //转换规则
	string text;//读取输入的每一行
	while (getline(input, text))
	{
		istringstream stream(text);
		string word;
		bool firstword = true;
		while (stream >> word)
		{
			if (firstword)
				firstword = false;
			else
				cout << " ";
			cout << transform(word, trans_map);
		}
		cout << endl;
	}

}
int main()
{
	ifstream map_file("map_file.txt");
	ifstream input("input.txt");

	word_transform(map_file, input);
	return 0;
}