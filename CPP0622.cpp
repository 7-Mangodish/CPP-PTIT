#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

class sv{
	private:
		string msv,name,cl,email;
	public:
		sv(){
			msv=name=cl=email="";
		}
		friend istream& operator >>(istream& in, sv &a)
			{
				getline(cin,a.msv);
				getline(cin,a.name);
				getline(cin,a.cl);
				getline(cin,a.email);				
				return in;
			}
		friend ostream& operator <<(ostream& out, sv a)
			{
				cout <<a.msv <<" " <<a.name <<" " <<a.cl <<" " <<a.email <<endl;
				return out;
			}
		friend void query(sv x[], int n, string s);
};

void query(sv x[], int n, string s){
	for(int i=0; i<n; i++)
		{
			if(x[i].cl== s)
				cout <<x[i];
		}
}
int main(){
	int t;
	cin >>t;
	cin.ignore();
	sv x[t];
	for(int i=0; i<t; i++)
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
			cout <<"DANH SACH SINH VIEN LOP " <<tmp <<":\n";
			query(x,t,tmp);
		}	
}
