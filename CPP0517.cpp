#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int ok=0;
struct NhanVien{
	string name, sex, date, add, id, date_c;
};


void nhap(NhanVien &a){
	if(ok==0)
		{
			cin.ignore();
			++ok;
		}
	getline(cin, a.name);
	getline(cin, a.sex);
	
	getline(cin, a.date);
	if(a.date[2]!='/')
		a.date='0'+a.date;
	if(a.date[5]!='/')
		a.date.insert(3,"0");
	
	getline(cin, a.add);
	getline(cin, a.id);
	
	getline(cin, a.date_c);
	if(a.date_c[2]!='/')
		a.date_c='0'+a.date_c;
	if(a.date_c[5]!='/')
		a.date_c.insert(3,"0");
}

void inds(NhanVien a[], int N){
	for(int i=0; i<N; i++)
		{
			string id=to_string(i+1),
			tmp(5-id.length(),'0');
			tmp=tmp+id;
			cout <<tmp <<" ";
//			cout<<setfill('0') << setw(5)<<i+1 <<" "; 
			cout <<a[i].name <<" " <<a[i].sex <<" " <<a[i].date <<" " <<a[i].add <<" "	<<a[i].id <<" " <<a[i].date_c <<endl;			
		}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}

