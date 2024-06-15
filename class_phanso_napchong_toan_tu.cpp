#include <iostream>
#include <string>
using namespace std;
class PhanSo
{
	int tu, mau;
	public:
		friend istream &operator>>(istream &in, PhanSo &ps);
		friend ostream &operator<<(ostream &out, PhanSo &ps);
		friend PhanSo operator+(PhanSo a, PhanSo b);
		friend PhanSo operator-(PhanSo a, PhanSo b);
		friend PhanSo operator*(PhanSo a, PhanSo b);
		friend PhanSo operator/(PhanSo a, PhanSo b);

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
PhanSo operator+(PhanSo a, PhanSo b)
{
	PhanSo t;
	t.mau=a.mau*b.mau;
	t.tu=a.tu*b.mau + b.tu*a.mau;
	return t;	
}
PhanSo operator-(PhanSo a, PhanSo b)
{
	PhanSo t;
	t.mau=a.mau*b.mau;
	t.tu=a.tu*b.mau - b.tu*a.mau;
	return t;
}
PhanSo operator*(PhanSo a, PhanSo b)
{
	PhanSo t;
	t.tu = a.tu*b.tu;
	t.mau = a.mau*b.mau;
	return t;
}
PhanSo operator/(PhanSo a, PhanSo b)
{
	PhanSo t;
	t.tu = a.tu*b.mau;
	t.mau =a.mau*b.tu;
	return t;
}
int main()
{
	PhanSo a , b, kq;
	
	cout<<"nhap phan so thu nhat:"<<endl;
	cin>>a;
	cout<<a;
	cout<<"nhap phan so thu hai:"<<endl;
	cin>>b;
	cout<<b;
	
	kq=a+b;
	cout<<"a+b= "<<kq<<endl;
	kq=a-b;
	cout<<"a-b= "<<kq<<endl;

	kq=a*b;
	cout<<"a * b= "<<kq<<endl;
	kq=a/b;
	cout<<"a/b= "<<kq<<endl;
	
	return 0;
}
