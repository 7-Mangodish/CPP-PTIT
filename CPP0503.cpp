#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

struct PhanSo{
	ll tu,
	mau;
};

ll gcd(ll a, ll b){
	while(b!=0)
		{
			ll tmp=a;
			a=b;
			b=tmp%b;
		}
	return a;
}

void nhap(PhanSo &p){
	cin >>p.tu >>p.mau;
}

void rutgon(PhanSo &p){
	ll tmp=gcd(p.tu, p.mau);
	p.tu/=tmp;
	p.mau/=tmp;
}

void in(PhanSo &p){
	cout <<p.tu <<"/" <<p.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
