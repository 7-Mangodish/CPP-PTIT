#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int k=1;
string ch(string s){
	stringstream ss(s);
	string tok,ans="";
	while(ss >> tok)
		{
			ans+=toupper(tok[0]);
		}
	return ans;
}
class gv{
	private:
		string mgv,name, spe;
	public:
		gv(){
			mgv=name=spe="";
		}
		friend bool cmp(gv a, gv b);
		void nhap()
			{
				string tmp=to_string(k),
				s(2-tmp.length(),'0');
				mgv="GV"+s+tmp;
				getline(cin,name);
				getline(cin,spe);
				++k;
			}
		void in()
			{
				cout <<mgv <<" " <<name <<" " <<ch(spe) <<endl;
			}
		string getSpe(){
			return spe;
		}
		
};

int main(){
	int n;
	cin >>n;
	gv x[n];
	cin.ignore();
	for(int i=0; i<n; i++)
		{
			x[i].nhap();
		}
	int q;
	cin >>q;
	cin.ignore();
	while(q--)
		{
			string chk;
			getline(cin,chk);
			cout <<"DANH SACH GIANG VIEN BO MON " <<ch(chk)<<":" <<endl;
			for(int i=0; i<n; i++)
				{
					if(x[i].getSpe()==chk)
						{
							x[i].in();
						}
				}
			
		}
}	
