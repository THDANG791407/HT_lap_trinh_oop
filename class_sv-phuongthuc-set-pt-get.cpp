#include <iostream>
#include <string>
using namespace std;
class HocVien{
	string hoten;
	int namsinh;
	float diemtb;
	public:
		HocVien();
		HocVien(string ht,int ns,float dtb);
		void setHoTen(string ht);
		void setNamSinh(int ns);
		void setDiemtb(float dtb);
		string getHoTen();
		int getNamSinh();
		float getDiemtb();
		void HienThi();
		friend int TrungTuyen(HocVien);		
};

HocVien::HocVien()
{
	this->hoten="";
	this->namsinh=0;
	this->diemtb=0;
}
HocVien::HocVien(string ht,int ns, float dtb)
{
	this->hoten=ht;
	this->namsinh=ns;
	this->diemtb=dtb;
	
}
void HocVien::setHoTen(string ht)
{
	this->hoten=ht;
}
void HocVien::setNamSinh(int ns)
{
	this->namsinh=ns;
}
void HocVien::setDiemtb(float dtb)
{
	this->diemtb=dtb;
}
string HocVien::getHoTen()
{
	return this->hoten;
}
int HocVien::getNamSinh()
{
	return this->namsinh;
}
float HocVien::getDiemtb()
{
	return this->diemtb;
}
void HocVien::HienThi()
{
	cout <<hoten<<" "<<namsinh<<" "<<diemtb<<endl;
}
int TrungTuyen(HocVien hv)
{
	if(hv.getDiemtb()>=5)
	// hoac su dung if(hv.diemtb()>=5) neu o phan class co su dung friend int trungtuyen
	//khong thi chi su dung hv.getDiemtb de truy cap
		return 1;
	return 0;
}
int main()
{
	HocVien hv1("Huong Nguyen",2000,10);
	HocVien hv2("Dang Truong",1999,4.5);
	
	hv1.HienThi();
	hv2.HienThi();
	
	int kq;
	kq=TrungTuyen(hv1);
	cout<<kq<<endl;
	return 0;
}
