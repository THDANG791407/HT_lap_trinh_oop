#include <iostream>
#include <string>
#include <math.h>
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
		friend int operator<(PhanSo a, PhanSo b);
		friend int operator>(PhanSo a, PhanSo b);
		friend int operator==(PhanSo a, PhanSo b);
		
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
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while(a != b)
	{
		if(a>b)
		{
			a = a-b;
		}
		else
		{
			b = b-a;
		}
		
	}
	return a;
}
PhanSo RutGonPs(PhanSo a)
{
	int uc = UCLN(a.tu, a.mau);
	a.tu = a.tu/uc;
	a.mau = a.mau/uc;
	return a;
}
int operator<(PhanSo a, PhanSo b)
{
	a.tu= a.tu*b.mau;
	b.tu= b.tu*a.mau;
	if(a.tu<b.tu)
	{
		return 1;
	}
	return 0;
}
int operator>(PhanSo a, PhanSo b)
{
	a.tu= a.tu*b.mau;
	b.tu= b.tu*a.mau;
	if(a.tu>b.tu)
	{
		return 1;
	}
	return 0;
	
}
int operator==(PhanSo a, PhanSo b)
{
	a.tu= a.tu*b.mau;
	b.tu= b.tu*a.mau;
	if(a.tu==b.tu)
	{
		return 1;
	}
	return 0;
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

	cout<<"TEST UCLN: "<<UCLN(8,4)<<endl;
	kq=RutGonPs(a);
	cout<<"phan so toi gian "<<a<<": "<<kq<<endl;

	cout<<"so sanh hai phan so:"<<endl;
	if(a<b)
	{
		cout<<a<<" be hon "<<b;
	}
	else if(a>b)
	{
		cout<<a<<" lon hon "<<b;
	}
	else
	{
		cout<<a<<" bang "<<b;
	}
	
	
	return 0;
}
