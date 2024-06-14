#include <iostream>
#include <string>
using namespace std;
class SinhVien{
	string mssv;
	string hoten;
	int namsinh;
	float diemtb;
	public:
		void Nhap();
		void HienThi();
		friend void NhapMang(SinhVien *sv,int n);
		friend void XuatMang(SinhVien *sv,int n);
		friend int TimKiem(SinhVien *sv,int n, string ms);
		friend float MaxDiemTB(SinhVien *sv,int n);
		friend void DssvDiemtbMax(SinhVien *sv,int n);
		
	
};
void SinhVien::Nhap()
{
	cout<<"Nhap mssv: ";
	fflush(stdin);
	cin>>this->mssv;
	cout<<"Nhap ho ten: ";
	fflush(stdin);
	getline(cin,this->hoten);
	cout<<"Nhap nam sinh: ";
	cin>>this->namsinh;
	cout<<"Nhap diem tb: ";
	cin>>this->diemtb;
}
void SinhVien::HienThi()
{
	cout<<this->mssv<<" "<<this->hoten<<" "<<this->namsinh<<" "<<this->diemtb<<endl;
}
void NhapMang(SinhVien *sv,int n)
{
	int i=0;
	while(i<n)
	{
		cout<<"nhap thong tin sv thu "<<i+1<<endl;
		(sv + i)->Nhap();
		i++;
	}
	
}
void XuatMang(SinhVien *sv,int n)
{
	int i = 0;
	
	while(i<n)
	{
		(sv + i)->HienThi();
		i++;
	}
	
}
int TimKiem(SinhVien *sv,int n,string ms)
{
	int i=0;
	while(i<n)
	{
		if((sv + i)->mssv.compare(ms)==0)
		{
			return i;
		}
		i++;
	}
	return -1;
}
float MaxDiemTB(SinhVien *sv,int n)
{
	float maxdtb = (sv + 0)->diemtb;
	int i = 0;
	while(i<n)
	{
		if((sv + i)->diemtb>maxdtb)
		{
			maxdtb = (sv +  i)->diemtb;
		}
		i++;
	}
	return maxdtb;
}
void DssvDiemtbMax(SinhVien *sv,int n)
{
	float maxdtb1 = MaxDiemTB(sv,n);
	int i =0;
	while(i<n)
	{
		if((sv + i)->diemtb== maxdtb1)
		{
			(sv + i)->HienThi();
		}
		i++;
	}
}

int main()
{
	int n;
	cout<<"So luong sv can nhap: ";
	fflush(stdin);
	cin>>n;
	
	SinhVien *sv;
	sv = new SinhVien[n];
	
	NhapMang(sv,n);
	cout<<"-----------------"<<endl;
	XuatMang(sv,n);
	cout<<"-----------------"<<endl;
	
	int kq = TimKiem(sv,n,"003");
	if(kq==-1)
		cout<<"khong tim thay<<endl;
	else
		cout<<kq<<endl;
	
	cout<<"danh sach sv co diem tb lon nhat"<<endl;
	DssvDiemtbMax(sv,n);
	
	delete(sv);
	return 0;
}
