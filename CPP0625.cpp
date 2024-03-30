#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int k=1;
class gv{
	private:
		string mgv,name, spe;
	public:
		gv(){
			mgv=name=spe="";
		}
		friend bool cmp(gv a, gv b);
		friend void arr(gv x[], int n);
		friend istream& operator >>(istream &in, gv &a)
			{
				string tmp=to_string(k),
				s(2-tmp.length(),'0');
				a.mgv="GV"+s+tmp;
				getline(cin,a.name);
				getline(cin,a.spe);
				++k;
				return in;
			}
		friend ostream& operator <<(ostream &out, gv a)
			{
				cout <<a.mgv <<" ";
				stringstream ss(a.spe);
				string tmp,s="";
				while(ss >>tmp)
					{
						s+=toupper(tmp[0]);
					}
				cout <<a.name <<" " <<s <<endl;
				return out;
			}
		
};

bool cmp(gv a, gv b){
	vector <string> v1,v2;
	stringstream s1(a.name);
	string tmp1;
	while(s1 >>tmp1)
		{
			v1.push_back(tmp1);
		}
		
	stringstream s2(b.name);
	string tmp2;
	while(s2 >>tmp2)
		{
			v2.push_back(tmp2);
		}	
	
	if(v1[v1.size()-1] < v2[v2.size()-1])
		return true;
	else if(v1[v1.size()-1] == v2[v2.size()-1])
		return a.mgv<b.mgv;
	return false;
}
void arr(gv x[], int n){
	sort(x,x+n,cmp);
}
int main(){
	int n;
	cin >>n;
	cin.ignore();
	gv x[n];
	for(int i=0; i<n; i++)
		{
			cin >>x[i];
		}
	arr(x,n);
	for(int i=0; i<n; i++)
		{
			cout <<x[i];
		}
	
}
