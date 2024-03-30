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
			string s1,s2;
			getline(cin, s1);
			getline(cin, s2);
			
			stringstream s11(s1),
			s22(s2);
			
			set <string> st1,st2;
			string tmp1,tmp2;
			while(s11 >>tmp1)
				{
					st1.insert(tmp1);
				}
			while(s22 >>tmp2)
				{
					st2.insert(tmp2);
				}
			
			for(string x:st1)
				{
					if(st2.find(x) ==st2.end())
						{
							cout <<x <<" ";
						}
				}
			cout <<endl;
		}
}
