#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)
using namespace std;

class SinhVien{
	private:
		string id,name,cl,date;
		float gpa;
	public:
		SinhVien();
		void nhap();
		void xuat();
};

void SinhVien::nhap(){
	getline(cin,name);
	getline(cin,cl);
	getline(cin,date);
	if(date[2]!='/')
		date='0'+date;
	if(date[5]!='/')
		date.insert(date.begin()+3,'0');
	cin >>gpa;
}

void SinhVien::xuat(){
	cout <<id<<" " <<name <<" "<<cl <<" "<<date <<" " <<fixed <<setprecision(2)<<gpa;
}
SinhVien::SinhVien(){
	id="B20DCCN001";
	name=cl=date="";
	gpa=0;
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
