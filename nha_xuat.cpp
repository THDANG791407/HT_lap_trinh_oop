#include <string>
#include <iostream>
using namespace std;

class SinhVien{
	string hoten;
	int namsinh;
	public:
		void nhap();
		void hienthi();
};
void SinhVien::	nhap()
{
	cout <<"nhap ho va ten: ";
	fflush (stdin);
	getline(cin,this->	hoten);
	cout <<endl;
	cout <<"nhap nam sinh: ";
	cin>> this->namsinh;
}
void SinhVien::hienthi()
{
	cout <<"________________________"<<endl;
	cout <<hoten<<" sinh nam:"<<namsinh<<endl;
}

int main()
{
	SinhVien sv;
	sv.	nhap();
	sv.hienthi();
	
	return 0;
}
