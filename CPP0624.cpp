#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
class sv{
	private:
		string msv,name, cl, email;
	public:
		sv(){
			msv=name=cl=email="";
		}
		friend istream& operator >>(istream &in, sv &a){
			getline(cin, a.msv);
			getline(cin, a.name);
			getline(cin, a.cl);
			getline(cin, a.email);
			return in;
		}
		friend ostream& operator <<(ostream& out, sv a){
			cout <<a.msv <<" " <<a.name <<" " <<a.cl <<" " <<a.email <<endl;
			return out;
		}
		friend void query(sv x[], int n, string chk);
		
};

void query(sv x[], int n, string chk){
	for(int i=0; i<n; i++)
		{
			string tmp1=x[i].msv.substr(5,2),
			tmp2=x[i].cl;
			if((chk=="CN" || chk =="AT") && tmp2[0]=='E')
				continue;	
			if(tmp1==chk)
				cout <<x[i];				
		}	
}
int main(){
	int n;
	cin >>n;
	cin.ignore();
	sv x[n];
	for(int i=0; i<n; i++)
		{
			cin >>x[i];
		}
	int q;
	cin >>q;
	cin.ignore();
	while(q--)
		{
			string tmp;
			getline(cin,tmp);
			for(int i=0; i<tmp.length(); i++)
				tmp[i]=toupper(tmp[i]);
			cout <<"DANH SACH SINH VIEN NGANH " <<tmp <<":\n";
			stringstream ss(tmp);
			string s;
			string chk="";
			while(ss >>s)
				{
					if(chk.length()==2)
						break;
					chk+=toupper(s[0]);
				}
			query(x,n,chk);
			
		}
}
