#include <iostream>
#include <stdlib.h>

using namespace std;

class product
{
  public:
	void addproduct(string prod_ID, int price, string exp_Date, string prod_Name, string manufacturer);
	void DisplayProducts();
	product();

  private:
	string prod_Name, manufacturer, prod_ID;
	int exp_Date, price;
};

product::product(void)
{
	string pili;

	cout << "\t\t\t\tAdd a Product" << endl;

	cout << "\nDo you want to add product? Y/N:  ";
	cin >> pili;

	if (pili == "y" || pili == "Y")
	{
		cout << " Product Nam e: ";
		cin >> prod_Name;
		cout << " Manufacturer : ";
		cin >> manufacturer;
		cout << " Product ID : ";
		cin >> prod_ID;
		cout << " Price : ";
		cin >> price;
		cout << " Expiration Date : ";
		cin >> exp_Date;
	}
}

void product::DisplayProducts()
{
    cout<<endl;
	cout << " Product Name is : " << prod_Name << endl;
	cout << " Product Manufacturer : " << manufacturer << endl;
	cout << " Product ID is : " << prod_ID << endl;
	cout << " Price is : " << price << endl;
	cout << " Product Expiration is : " << exp_Date << endl;
}

int main()
{
	product product;

	product.DisplayProducts();

	return 0;
}