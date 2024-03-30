#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

vector <string> v;
void CH(string &s){
	for(int i=0; i<s.length(); i++)
		{
			if(i==0)
				s[i]=toupper(s[i]);
			else
				s[i]=tolower(s[i]);
		}
}

int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--)
		{
			int c;
			cin >>c;
			cin.ignore();
			string s;
			getline(cin,s);

			vector <string> v;
			stringstream ss(s);
			string tmp;
			while(ss >>tmp)
				{
					CH(tmp);
					v.push_back(tmp);
				}
			
			if(c==1)
				{
					cout <<v[v.size()-1] <<" ";
					for(int i=0; i<v.size()-1; i++)
					cout <<v[i] <<" ";
					cout <<endl;	
				}
			else
				{
					for(int i=1; i<v.size(); i++)
					cout <<v[i] <<" ";
					cout <<v[0];
					cout <<endl;		
				}
		}
}
