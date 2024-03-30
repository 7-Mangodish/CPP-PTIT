#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
struct NhanVien{
	string id,name,sex,add,dat,mst,datc;
};
int k=0;

bool cmp(NhanVien a, NhanVien b){
	vector <int> v1,v2;

	for(int i=0; i<a.dat.length(); i++)
		{
			if(isdigit(a.dat[i])==false)
				a.dat[i]=' ';
			if(isdigit(b.dat[i])==false)
				b.dat[i]=' ';
		}
	stringstream s1(a.dat),
	s2(b.dat);
	string tmp1,tmp2;
	while(s1 >>tmp1)
		{
			int k=stoi(tmp1);
			v1.push_back(k);
		}
	while(s2 >>tmp2)
		{
			int k=stoi(tmp2);
			v2.push_back(k);
		}	
	swap(v1[0],v1[1]);
	swap(v2[0],v2[1]);
	if(v1[2]<v2[2])
		return true;
	else if(v1[2]>v2[2]) //ss nam sinh
		return false;
	else
	{
	for(int i=1; i>=0; i--)
		{
			if(v1[i]<v2[i])
				return true;
		}
	return false;		
	}

}

void nhap(NhanVien &x){
	if(k==0)
		{
			++k;
			cin.ignore();
		}
	string tmp1=to_string(k),
	tmp2(5-tmp1.length(),'0');
	x.id=tmp2+tmp1;
	getline(cin,x.name);
	getline(cin,x.sex);
	getline(cin,x.dat);
	getline(cin,x.add);
	getline(cin,x.mst);
	getline(cin,x.datc);
	++k;
}

void sapxep(NhanVien x[], int n){

	sort(x,x+n,cmp);
}

void inds(NhanVien x[], int n){
	for(int i=0; i<n; i++)
		{
			cout <<x[i].id <<" " <<x[i].name <<" " <<x[i].sex <<" "<<x[i].dat <<" " <<x[i].add <<" " <<x[i].mst <<" " <<x[i].datc <<endl;
		}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
     return 0;
}
