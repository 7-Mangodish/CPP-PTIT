#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

class PhanSo{
	private:
	ll tu, mau;
	public:
		PhanSo(ll tu,ll mau)
			{
				this->tu=tu;
				this->mau=mau;
			};
		friend istream &operator >>(istream &in, PhanSo &a)
			{
				cin >>a.tu >>a.mau;
				return in;
			}
		friend ostream &operator <<(ostream &out, PhanSo a)
			{
				cout <<a.tu <<"/" <<a.mau;
				return out;
			}
		friend PhanSo operator +(PhanSo &a, PhanSo &b);
		friend void simp(PhanSo &a);
};
void simp(PhanSo &a){
	ll m=a.tu,
	n=a.mau;
	while(n!=0)
		{
			ll tmp=m;
			m=n;
			n=tmp%n;
		}
	a.tu/=m;
	a.mau/=m;
}

PhanSo operator +(PhanSo &a, PhanSo &b){
	PhanSo kq(1,1) ;
	kq.tu=a.tu*b.mau+b.tu*a.mau;
	kq.mau=a.mau*b.mau;
	simp(kq);
	return kq;
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}