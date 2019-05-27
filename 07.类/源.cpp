#include<iostream>

using namespace std;

class Sales_data
{
public:
	Sales_data()
		: _units_sold(0)
		, _revenue(0.0)
	{}

	string isbn()const { return _bookNo; }
	Sales_data& operator+=(const Sales_data& data)
	{
		_units_sold += data._units_sold;
		_revenue += data._revenue;
		return *this;
	}
	double avg_price()const
	{
		if (_units_sold)
			return _revenue / _units_sold;
		return 0;
	}
private:
	size_t _units_sold;
	double _revenue;
	string _bookNo;
};

Sales_data add(const Sales_data&, const Sales_data&);
ostream& print(ostream&, const Sales_data&);
istream& read(istream&, Sales_data&);

