#include <iostream>
#include <string>
using namespace std;
class Nguoi{
	string cccd, hoten;
	int namsinh;
	public:
		Nguoi(string cd, string ht, int ns)
		{
			this->cccd = cd;
			this->hoten = ht;
			this->namsinh = ns;
		}
		Nguoi(Nguoi&n)
		{
			this->cccd = n.cccd;
			this->hoten = n.hoten;
			this->namsinh = n.namsinh;
		}
		void Nhap();
		void Hienthi();
		
};
void Nguoi::Nhap()
{
	cout<<"nhap vao cccd: ";
	fflush(stdin);
	cin>> this->cccd;
	
	cout<<"nhap ho ten: ";
	fflush(stdin);
	getline(cin,this->hoten);
	
	cout<<"nhap nam sinh: ";
	cin>>this->namsinh;
}
void Nguoi::Hienthi()
{
	cout<<this->cccd<<" "<<this->hoten<<" "<<this->namsinh<<endl;
}
class SinhVien:public Nguoi{
	string mssv, lop;
	float diemtb;
	public:
		void Nhap();
		void Hienthi();
		SinhVien(string cd,string ht,int ns, string ms,string l, float dtb):Nguoi(cd,ht,ns)
		{
			this->mssv = ms;
			this->lop = l;
			this->diemtb =dtb;
			
		}
		SinhVien(Nguoi &n, SinhVien&sv):Nguoi(n)
		{
			this->mssv = sv.mssv;
			this->lop = sv.lop;
			this->diemtb = sv.diemtb;
		}
};
void SinhVien::Nhap()
{
	cout<<"nhap vao mssv: ";
	fflush(stdin);
	cin>> this->mssv;
	
	cout<<"nhap lop: ";
	fflush(stdin);
	getline(cin,this->lop);
	
	cout<<"nhap diem trung binh: ";
	cin>>this->diemtb;
	
}
void SinhVien::Hienthi()
{
	Nguoi::Hienthi();
	cout<<this->mssv<<" "<<this->lop<<" "<<this->diemtb<<endl;
	
}

int main()
{
	Nguoi a("072","dang",1999);
	SinhVien sv("072","dangtruong",1999,"1712","kt",8.5);
	a.Hienthi();
	cout<<"thong tin sv:"<<endl;
	sv.Hienthi();
	return 0;
}
