#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n;
			cin >>n;
			set <int> s;
			for(int i=0; i<n; i++)
				{
					int tmp;
					cin >>tmp;
					if(tmp>0)
						s.insert(tmp);
				}
			if(s.size()==0) cout <<1 <<endl;
			else
				{
					int tmp=1;
					for(set <int> ::iterator it=s.begin(); it!=s.end(); it++)
						{
							 if(*it==tmp)
							 	++tmp;
							else
								break;
						}
					cout <<tmp <<endl;
				}
		}
}

