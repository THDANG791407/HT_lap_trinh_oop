#include <iostream>
#include <string>
using namespace std;
class PhanSo
{
	int tu, mau;
	public:
		friend istream &operator>>(istream &in, PhanSo &ps);
		friend ostream &operator<<(ostream &out, PhanSo &ps);
};
istream &operator>>(istream &in, PhanSo &ps)
{
	cout<<"nhap tu so: ";
	cin>>ps.tu;
	cout<<"nhap mau so: ";
	cin>>ps.mau;
	return in;
}
ostream &operator<<(ostream &out, PhanSo &ps)
{
	cout<<ps.tu<<"/"<<ps.mau<<endl;
	return out;
}
int main()
{
	PhanSo a;
	
	cin>>a;
	cout<<a;
	
	return 0;
}
