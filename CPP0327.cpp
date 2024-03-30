#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

//2^x;
//x%4=0-->2^x%5 du 1;
//1--> %5 du 2;
//2--> %5 du 4
//3--> %5 du3;
bool chk(string s){
	int l=s.length()-1;
	int du=0;
	for(int i=0; i<=l; i++)
		{
			if(s[i]=='1')
				{
					int tmp=l-i;
					if(tmp%4==3)
						du+=3;
					else if(tmp%4 ==2)
						du+=4;
					else if(tmp%4 ==1)
						du+=2;
					else
						du+=1;
				}
		}
	if(du %5==0 && du!=0)
		return true;
	return false;
}

int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--)
		{
			string s;
			cin >>s;
			if(chk(s))
				cout <<"Yes" <<endl;
			else
				cout <<"No" <<endl;
}
}

