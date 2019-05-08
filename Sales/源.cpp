#include"Sales_item.h"

using namespace std;
int main()
{
	//Sales_item book1,book2;

	//cin >> book1>>book2;
	//cout << book1+book2 << endl;
	Sales_item total;

	//读取第一条交易记录，并确保有数据可以处理
	if (cin >> total)
	{
		Sales_item trans; //保存盒的变量

		while (cin >> trans)
		{
			if (total.isbn() == trans.isbn())
				total += trans;
			else
			{	
				cout << "ISBN/" << "售出册数/" << "总销售额/" << "平均价格" << endl;
				cout << total << endl;
				total = trans;
			}
		}
		cout << "ISBN/" << "售出册数/" << "总销售额/" << "平均价格/" << endl;
		cout << total << endl;
	}
	else {
		cout << "no data" << endl;
	}

	return 0;
}