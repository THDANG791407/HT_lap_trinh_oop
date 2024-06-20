#include <iostream>
#include <string>
using namespace std;
class Nguoi{
	string hoten, cccd;
	int namsinh;
	public:
		Nguoi(string ht, string cc, int ns)
		{
			this->hoten = ht;
			this->cccd = cc;
			this->namsinh = ns;
		}
		Nguoi(Nguoi&n)
		{
			this->hoten = n.hoten;
			this->cccd = n.cccd;
			this->namsinh = n.namsinh;
		}
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
class SinhVien:public Nguoi{
	string mssv, lop;
	float dtb;
	public:
		void Nhap();
		void HienThi();
		SinhVien(string ht, string cc, int ns, string ms, string l, float d):Nguoi(ht,cc,ns)
		{
			this->mssv = ms;
			this->lop = l;
			this->dtb = d;
		}
		SinhVien(Nguoi &n, SinhVien&sv):Nguoi(n)
		{
			this->mssv = sv.mssv;
			this->lop = sv.lop;
			this->dtb = sv.dtb;
		}
		
	
};
void SinhVien::Nhap(){
	cout<<"Enter mssv: ";
	fflush(stdin);
	cin>>this->mssv;
	cout<<"Enter lop: ";
	fflush(stdin);
	cin>>this->lop;
	cout<<"Enter diem tb: ";
	cin>>this->dtb;
	
	
}
void SinhVien::HienThi()
{
	Nguoi::HienThi(); //neu khong co dong nay hienthi sv se khong co thuoc tinh cua lop
	cout<<this->mssv<<"/ "<<this->lop<<"/ "<<this->dtb<<endl;
}
int main()
{
	Nguoi a("nguyen huong","1234",2000);
	SinhVien sv("dang truong","6543",1999,"17123","ketoan",8.5);
	
	Nguoi b(a); // sao chep thong tin nguoi a
	SinhVien sv1(sv); //sao chep thong tin sv
	Nguoi *p =&sv1; // con tro p tro den sv1
	
	cout<<"thong tin doi tuong thuoc lop nguoi"<<endl;
	b.HienThi();
	
	cout<<"thong tin doi tuong thuoc lop sinh vien"<<endl;
	sv1.HienThi();
	
	cout<<"thong tin doi tuong con tro p"<<endl;
	p->HienThi();
	
	return 0;
}
