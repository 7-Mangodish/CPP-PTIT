#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int t;
	cin >>t;	
	cin.ignore();
	while(t--)
		{
			string s;
			getline(cin,s);
			stringstream ss(s);
			string tmp;
			int chk=0,
				cnt=0;
			while(ss >>tmp)
				{
					++cnt;
					char ch=tmp[tmp.length()-1];
					int num=ch-'0';
					if(num%2==0)
						chk++;
					else
						chk--;	
				}
			if(cnt%2==0)
				{
					if(chk>0)
						cout <<"YES\n";
					else
						cout <<"NO\n";
				}
			else
				{
					if(chk<0) 
						cout <<"YES\n";
					else
						cout <<"NO\n";
				}
		}
}
