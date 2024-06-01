#include <string>
#include <iostream>
using namespace std;

class SinhVien{
	string hoten;
	int namsinh;
	float *diemtb;
	public:
		SinhVien(string ht, int ns, float diem); //Phuong thuc khoi tao co doi so
		SinhVien(SinhVien &sv);
		~SinhVien();
		void nhap();
		void hienthi();
};
/*void SinhVien::nhap()
{
	cout <<"nhap ho va ten: ";
	fflush (stdin);
	getline(cin,this->	hoten);
	cout <<endl;
	cout <<"nhap nam sinh: ";
	fflush (stdin);
	cin>> this->namsinh;
	cout <<endl;
	cout <<"nhap diem trung binh: ";
	cin>> *(this->diemtb);
}*/
void SinhVien::hienthi()
{
	cout <<"________________________"<<endl;
	cout <<hoten<<" sinh nam:"<<namsinh<<" diem tb:"<<*(this->diemtb)<<endl;
}
SinhVien::	SinhVien(string ht, int ns, float diem)
{
	this->hoten = ht;
	this->namsinh = ns;
	this->diemtb = new float; // cap phat vung nho cho con tro diemtb
	*(this->diemtb)= diem;
}
SinhVien::SinhVien(SinhVien &sv)
{
	this->hoten= sv.hoten;
	this->namsinh= sv.namsinh;
	this->diemtb = new float;
	this->diemtb= sv.diemtb;
}
SinhVien::~SinhVien()
{
	delete (this->diemtb);
}

int main()
{
	SinhVien sv("Huong Nguyen",2000,9.0);
	SinhVien sv1(sv);
	sv1.hienthi();
	
	return 0;
}
