#include <iostream>
#include <iomanip>

using namespace std;

struct Product
{
    int product_id;
    char product_name[10];
    int product_price;
    float gst;
    float cgst;
    float sgst;
}p1[2];

void Insertion()
{	for(int i=0;i<3;i++)
	{
	
    cout << "ENTER THE PRODUCT ID" << endl;
    cin >> p1[i].product_id;
    cout << "ENTER THE PRODUCT PRICE" << endl;
    cin >> p1[i].product_price;
    cout << "ENTER THE PRODUCT NAME" << endl;
    cin >> p1[i].product_name;
	}
}
void display()
{
	cout << "ID" << setw(30) << "NAME";
    cout << setw(30) << "PRICE" << endl;
 for(int i=0;i<3;i++)
    {
		cout << p1[i].product_id << setw(30) << p1[i].product_name << setw(30) << p1[i].product_price<<endl;
	}
}

int main()
{
    struct Product p1 ;
	
	Insertion();
    display();
    
    
	
}
