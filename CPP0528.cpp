#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int k=1;

struct sv{
	int stt;
	string msv,nam,cl,e,pla;
};
void nhap(sv &x){
	x.stt=k++;
	getline(cin,x.msv);
	getline(cin,x.nam);
	getline(cin,x.cl);
	getline(cin,x.e);
	getline(cin,x.pla);
}

bool cmp(sv a, sv b){
	return a.nam<b.nam;
}

void in(vector <sv> v, int n){
	for(int i=0; i<n; i++)
		{
			cout <<v[i].stt <<" " <<v[i].msv <<" "<<v[i].nam <<" "<<v[i].cl <<" " <<v[i].e <<" "<<v[i].pla <<endl;
		}
}
int main(){
	int n;
	cin >>n;
	sv a[n];
	cin.ignore();
	for(int i=0; i<n; i++)
		{
			nhap(a[i]);
		}
	int t;
	cin >>t;
	cin.ignore();
	while(t--)
		{
			string tmp;
			getline(cin, tmp);
			vector <sv> v;
			for(auto x:a)
				{
					if(x.pla==tmp)
						v.push_back(x);
				}
			sort(v.begin(), v.end(), cmp);
			in(v,v.size());		
		}

}
