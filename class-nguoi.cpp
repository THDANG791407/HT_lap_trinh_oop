#include <iostream>
#include <string>
using namespace std;
class Nguoi{
	string hoten, cccd;
	int namsinh;
	public:
		void Nhap();
		void HienThi();
};
void Nguoi::Nhap(){
	cout<<"Enter ho ten: ";
	fflush(stdin);
	getline(cin,this->hoten);
	cout<<"Enter cccd: ";
	fflush(stdin);
	cin>>this->cccd;
	cout<<"Enter nam sinh: ";
	cin>>this->namsinh;
	
	
}
void Nguoi::HienThi()
{
	cout<<this->hoten<<"/ "<<this->cccd<<"/ "<<this->namsinh<<endl;
}
int main()
{
	Nguoi a;
	a.Nhap();
	a.HienThi();
	return 0;
}

