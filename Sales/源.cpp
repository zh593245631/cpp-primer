#include"Sales_item.h"

using namespace std;
int main()
{
	//Sales_item book1,book2;

	//cin >> book1>>book2;
	//cout << book1+book2 << endl;
	Sales_item total;

	//��ȡ��һ�����׼�¼����ȷ�������ݿ��Դ���
	if (cin >> total)
	{
		Sales_item trans; //����еı���

		while (cin >> trans)
		{
			if (total.isbn() == trans.isbn())
				total += trans;
			else
			{	
				cout << "ISBN/" << "�۳�����/" << "�����۶�/" << "ƽ���۸�" << endl;
				cout << total << endl;
				total = trans;
			}
		}
		cout << "ISBN/" << "�۳�����/" << "�����۶�/" << "ƽ���۸�/" << endl;
		cout << total << endl;
	}
	else {
		cout << "no data" << endl;
	}

	return 0;
}