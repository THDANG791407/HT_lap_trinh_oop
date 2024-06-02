#include <iostream>
#include <string>
using namespace std;

class SinhVien{
	string mssv, hoten;
	int namsinh;
	float diemtb;
	public:
		void nhap();
		void hienthi();
		friend void nhapmang(SinhVien sv[],int n);
		friend void xuatmang(SinhVien sv[],int n);
		friend int timkiem(SinhVien sv[],int n, string ms);
		friend float timDiemLonNhat(SinhVien sv[],int n);
		friend void lietKeNSinhVienLonNhat(SinhVien sv[], int n);
};
void SinhVien::nhap()
{
	cout<<"n nhap ma so sv:";
	fflush(stdin);
	cin>>this->mssv;
	cout<<"nhap ho ten sv:";
	fflush(stdin);
	getline(cin,this->hoten);
	cout<<"nhap nam sinh:";
	cin>>this->namsinh;
	cout<<"nhap diem tb:";
	cin>>this->diemtb;
}
void SinhVien::hienthi()
{
	cout<<this->mssv<<" "<<this->hoten<<" "<<this->namsinh<<" "<<this->diemtb<<endl;
}
void nhapmang(SinhVien sv[],int n)
{
	int i =0;
	while(i<n)
	{
		cout<<"nhap phan tu thu: "<<i<<endl;
		sv[i].nhap();
		i++;
	}

}
void xuatmang(SinhVien sv[],int n)
{
	int i =0;
	while(i<n)
	{
		sv[i].hienthi();
		i++;
	}
}
int timkiem(SinhVien sv[],int n,string ms)
{
	int i=0;
	while(i<n)
	{
		if(sv[i].mssv.compare(ms)==0)
		{
			return i;
		}
		i++;
	}
	return -1;
}
int main()
{
	SinhVien sv[2];
	nhapmang(sv,2);
	xuatmang(sv,2);
	int kq = timkiem(sv,2,"002");
	cout<<kq;
	return 0;
}
