#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
struct SinhVien {
	string msv,name,cl,date;
	float gpa;
};

void nhap(SinhVien x[], int n){
	for(int i=0; i<n; i++)
		{
			cin.ignore();
			int k=i+1;
			string num=to_string(k),
			tmp1(3-num.length(),'0');
			x[i].msv="B20DCCN"+tmp1+num;
			getline(cin,x[i].name);
			getline(cin,x[i].cl);
			getline(cin,x[i].date);
			
			string tmp2=x[i].date;
			if(tmp2[2]!='/')
				tmp2="0"+tmp2;
			if(tmp2[5]!='/')
				tmp2.insert(tmp2.begin()+3,'0');
			x[i].date=tmp2;
			cin >>x[i].gpa;
		}
}

void in(SinhVien x[], int n){
	for(int i=0; i<n; i++)
		{
			cout <<x[i].msv <<" " <<x[i].name <<" " <<x[i].cl <<" " <<x[i].date <<" " <<setprecision(2) <<fixed <<x[i].gpa<<endl;
		}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}