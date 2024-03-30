#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

class sv{
	private:
		string msv,name,cl,email;
	public:
		sv(){
			msv=name=cl=email="";
		}
		friend istream& operator >>(istream& in, sv &a)
			{
				getline(cin,a.msv);
				getline(cin,a.name);
				getline(cin,a.cl);
				getline(cin,a.email);				
				return in;
			}
		friend ostream& operator <<(ostream& out, sv a)
			{
				cout <<a.msv <<" " <<a.name <<" " <<a.cl <<" " <<a.email <<endl;
				return out;
			}
		friend bool cmp(sv a, sv b);
		friend void sx(sv x[], int n);
};

bool cmp(sv a, sv b){
	if(a.cl <b.cl)
		return true;
	if(a.cl==b.cl)
		{
			return a.msv <b.msv;
		}
	return false;
}

void sx(sv x[], int n){
	sort(x, x+n, cmp);
}
int main(){
	int t;
	cin >>t;
	cin.ignore();
	sv x[t];
	for(int i=0; i<t; i++)
		{
			cin >>x[i];
		}
	sx(x,t);
	for(int i=0; i<t; i++)
		cout <<x[i];
}
