#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

string ch1(string s){
	stringstream ss(s);
	string tok,ans="";
	while(ss >> tok)
		{
			for(int i=0; i<tok.length(); i++)
				{
					ans+=tolower(tok[i]);
				}
		}
	return ans;
}
string ch2(string s){
	stringstream ss(s);
	string tok,ans="";
	while(ss >> tok)
		{
			ans+=toupper(tok[0]);
		}
	return ans;
}
int k=1;
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
				cout <<mgv <<" " <<name <<" " <<ch2(spe) <<endl;
			}
		string getSpe(){
			return spe;
		}
		string getName(){
			return name;
		}
		
};

bool chek(string a, string s){
	int i=0;
	while(i<a.length())
		{
			if(a[i]==s[0])
				{
					int k=0;
					for(int j=0; j<s.length(); j++)
						{
							if(a[i+j]==s[j])
								{
									++k;
								}
						}
					if(k==s.length())
						return true;
				}
			++i;
		}
	return false;
}
int main(){
	int t;
	cin >>t;
	cin.ignore();
	gv x[t];
	for(int i=0; i<t; i++)
		x[i].nhap();
	int q;
	cin >>q;
	cin.ignore();
	while(q--)
		{
			string chk;
			getline(cin,chk);
			cout <<"DANH SACH GIANG VIEN THEO TU KHOA " <<chk <<":\n";
			for(int i=0; i<t; i++)
				{
					string tmp=x[i].getName();
					tmp=ch1(tmp);
					if(chek(tmp,ch1(chk)))
						x[i].in();
				}
		}
	
}
