#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
struct SinhVien{
	string msv,nam,cl;
	float p1,p2,p3;
};
int k=0;
void nhap(SinhVien &x){
//	if(k==0)
//		{
//			++k;
//			cin.ignore();
//		}
	cin.ignore();
	getline(cin,x.msv);
	getline(cin,x.nam);
	getline(cin,x.cl);
	cin >>x.p1 >>x.p2 >>x.p3;
}

bool cmp(SinhVien a, SinhVien b){
	return a.msv<b.msv;
}

void sap_xep(SinhVien a[],int n){
	sort(a,a+n,cmp);
}

void in_ds(SinhVien a[], int n){
	for(int i=0; i<n; i++)
		{
			cout <<i+1<<" " <<a[i].msv <<" "<<a[i].nam <<" " <<a[i].cl <<" ";
			cout <<fixed <<setprecision(1) <<a[i].p1 <<" " <<a[i].p2 <<" " <<a[i].p3 <<endl;
		}
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
