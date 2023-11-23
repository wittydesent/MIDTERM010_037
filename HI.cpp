#include<iostream>
using namespace std;

int main()
{
	int prodquan, prodprice, prodcost;
	int totprice = 0, totalcost = 0;
	float taxrate, price;

		cout << "\nEnter price of product: ";
		cin >> prodprice;
		cout << "\nEnter quantity of product: ";
		cin >> prodquan;
		cout << "\nEnter the applicable sales tax rate: ";
		cin >> taxrate;
		
		totprice += prodprice * prodquan;
		price = totprice * (totprice * taxrate);

	
	if (prodquan >= 10)
	{
		price -= (price * 0.1);
	}
	cout << "\nTotal cost is " << price;

	return 0;
}
