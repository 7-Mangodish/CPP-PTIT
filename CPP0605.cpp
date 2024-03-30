#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

class PhanSo{
	private:
		ll t,m;
	public:
		PhanSo(ll a, ll b);
		
		friend istream &operator >> (istream &in, PhanSo &a)
			{
				in >>a.t >>a.m;
				return in;
			}
		friend ll gcd(ll a, ll b);
		void rutgon();
		friend ostream &operator << (ostream &out, PhanSo a)
			{
				cout <<a.t <<"/" <<a.m;
				return out;
			}
};

PhanSo ::PhanSo(ll a, ll b ){
	t=a;
	m=b;
}
ll gcd(ll a, ll b)
			{
				while(b!=0)
					{
						ll tmp=a;
						a=b;
						b=tmp%b;
					}

				return a;
			}

void PhanSo::rutgon()
			{
				ll tmp=gcd(t,m);
				t/=tmp;
				m/=tmp;
			}
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
