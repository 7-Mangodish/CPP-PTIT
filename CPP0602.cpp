#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

class SinhVien{
	private:
		string nam, cl, date;
		float gpa;
	public:
		SinhVien();
		friend istream &operator >>(istream &in, SinhVien &a)	;
		friend ostream &operator <<(ostream &out, SinhVien a);
};

SinhVien::SinhVien(){
	nam=cl=date="";
	gpa=0;
}

istream &operator>>(istream &in, SinhVien&a){
	getline(in, a.nam);
	getline(in, a.cl);
	getline(in, a.date);
	if(a.date[2] !='/')
		a.date='0'+a.date;
	if(a.date[5]!='/')
		a.date.insert(a.date.begin()+3,'0');
	in >>a.gpa;in.ignore();
	return in;
}

ostream &operator <<(ostream &out, SinhVien a){
	out <<"B20DCCN001 " <<a.nam <<" " <<a.cl <<" " <<a.date <<" " <<fixed <<setprecision(2) <<a.gpa;
	return out;
}

	int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

