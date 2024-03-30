#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int check(int n){
	vector <int> v;
	set <int> s;
	for(int i=2; i<=sqrt(n); i++)
		{
			while(n%i==0)
				{
					v.push_back(i);
					s.insert(i);
					n/=i;
				}
		}
	if(n!=1)
		{
		v.push_back(n);	
		s.insert(n);		
		}

	if(v.size()==s.size() && s.size()==3)
		return 1;
	return 0;
}

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n;
			cin >>n;
			cout <<check(n) <<endl;
		}
}
