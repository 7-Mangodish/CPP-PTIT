#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

class dn{
	private:
		string id,name;
		int cnt;
	public:
		dn(){
			id=name="";
			cnt=0;
		}
		void nhap ()
			{
				getline(cin, id);
				getline(cin, name);
				cin >>cnt;
				cin.ignore();
			}
		void in()
			{
				cout <<id <<" " <<name <<" "<<cnt <<endl;
			}
		friend bool cmp(dn a, dn b);
		friend void arr(dn x[], int n);
};

bool cmp(dn a, dn b){
	if(a.cnt >b.cnt)
		return true;
	else if(a.cnt < b.cnt)
		return false;
	else
		{
			return a.id <b.id;
		}
}

void arr(dn a[], int n){
	sort(a,a+n, cmp);
}
int main(){
	int n;
	cin >>n;
	cin.ignore();
	dn a[n];
	for(int i=0; i<n; i++)
		a[i].nhap();
	sort(a,a+n,cmp);
	for(int i=0; i<n; i++)
		a[i].in();
}
