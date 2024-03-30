#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

struct PhanSo{
	ll tu,mau;
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

ll lcm(ll a, ll b){
	ll tmp=a*b;
	return tmp/gcd(a,b);
}

void simp(PhanSo &a){
	ll tmp=gcd(a.tu, a.mau);
	a.tu/=tmp;
	a.mau/=tmp;
}

void nhap(PhanSo &a){
	cin >>a.tu>>a.mau;
}

PhanSo tong(PhanSo &a, PhanSo &b){
	simp(a);
	simp(b);
	ll tmp=lcm(a.mau,b.mau);
	ll tmp1=tmp/a.mau,
	tmp2=tmp/b.mau;
	a.tu*=tmp1;
	b.tu*=tmp2;
	PhanSo sum;
	sum.tu=a.tu+b.tu;
	sum.mau=tmp;
	simp(sum);
	return sum;
	
}

void in(PhanSo a)
{
	cout <<a.tu <<"/"<<a.mau;
}

	int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
