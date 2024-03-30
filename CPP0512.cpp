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

void simp(PhanSo &a){
	ll tmp=gcd(a.tu,a.mau);
	a.tu/=tmp;
	a.mau/=tmp;
}

void process(PhanSo a, PhanSo b){
	simp(a);
	simp(b);
	
	PhanSo c;
	c.tu=a.tu*b.mau + b.tu*a.mau;
	c.mau=a.mau*b.mau;
	c.tu*=c.tu;
	c.mau*=c.mau;
	simp(c);
	cout <<c.tu <<"/"<<c.mau<<" ";
	
	PhanSo d;
	d.tu=a.tu* b.tu* c.tu;
	d.mau=a.mau *b.mau *c.mau;
	simp(d);
	cout <<d.tu <<"/" <<d.mau<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
