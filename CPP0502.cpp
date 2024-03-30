#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

struct ThiSinh{
	char name[100],
	date[100];
	float p1,p2,p3;
	float sum;
};
using namespace std;

void nhap(ThiSinh &a){
	fgets(a.name,100,stdin);
	a.name[strlen(a.name)-1]='\0';
	fgets(a.date,100,stdin);
	a.date[strlen(a.date)-1]='\0';
	cin >>a.p1;
	cin >>a.p2;
	cin >>a.p3;
	a.sum=a.p1+a.p2+a.p3;
	fflush(stdin);
}

void in(ThiSinh &a){
	cout <<a.name <<" " <<a.date <<" "<< setprecision(1) <<fixed <<a.sum;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
