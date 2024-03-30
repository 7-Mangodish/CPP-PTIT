#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

struct SinhVien{
	string 
	name,cl, date;
	float gpa;
};

void nhapThongTinSV(SinhVien &a){
	getline(cin,a.name);
	cin>>a.cl;
	cin>>a.date;
	if(a.date[2]!='/')
		a.date='0'+a.date;
	if(a.date[5]!='/')
		a.date.insert(a.date.begin()+3, '0');
	cin >>a.gpa;
	
}

void inThongTinSV(SinhVien a){
	cout <<"N20DCCN001" <<'\t' <<a.name <<'\t' <<a.cl <<'\t' <<a.date <<'\t' <<fixed <<setprecision(2) <<a.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
