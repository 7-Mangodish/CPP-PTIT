#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
char a[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'},
b[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};

typedef struct{
	int id;
	char n[15];
} test;
float point(char a[], char chk[]){
	float k=0;
	for(int i=0; i<strlen(a); i++)
		{
			if(a[i]!=chk[i]) k+=1;
		}
	return 10-k*(float)2/3;
}


int main(){
	int t;
	cin >>t;
	while(t--)
		{
			test x;
			cin >>x.id;
			cin.ignore();
			for(int i=0; i<15; i++)
				cin >>x.n[i];

			if(x.id==101) 
				cout <<setprecision(2) <<fixed <<point(a,x.n)<<endl;
			else
				cout <<setprecision(2) <<fixed <<point(b,x.n)<<endl;	
			
		}
}
