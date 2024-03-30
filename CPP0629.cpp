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
		int getcnt()
			{
				return cnt;
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
	dn x[n];
	for(int i=0; i<n; i++)
		{
			x[i].nhap();
		}
	arr(x,n);
	int q;
	cin >>q;
	while(q--)
		{
			int a, b;
			cin >>a >>b;
			cout <<"DANH SACH DOANH NGHIEP NHAN TU " <<a <<" DEN " <<b <<" SINH VIEN:\n";
			for(int i=0; i<n; i++)
				{
					if(x[i].getcnt() >=a && x[i].getcnt() <=b)
						{
							x[i].in();
						}
				}
		}
}
