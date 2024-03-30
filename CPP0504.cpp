#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;


struct SinhVien{
	string a;
	char ten[50],
	lop[50],
	date [50][50];
	float gpa;
	
};
void sol(char a[], char b[], int m){
	for(int i=0; i<=m; i++)
		b[i]='0';
	int l=strlen(a)-1;
	while(l >=0)
		{
			b[m--]=a[l--];
		}

}

void nhap(SinhVien &a){
	fgets(a.ten,100,stdin);
	a.ten[strlen(a.ten)-1]='\0';
	
	fgets(a.lop,100,stdin);
	a.lop[strlen(a.lop)-1]='\0';
	
	char tmp[50];
	fgets(tmp,50,stdin);
	tmp[strlen(tmp)-1]='\0';
	
	char *tok=strtok(tmp,"/");
	int cnt=0;
	while(tok !=NULL)
		{
			if(strlen(tok)==1)
				{
					char tmp=*tok;
					a.date[cnt][0]='0';
					a.date[cnt][1]=tmp;
				}
			else
				{
					strcpy(a.date[cnt],tok);
				}
			cnt++;
			tok=strtok(NULL,"/");
		}

	cin >>a.gpa;

}

void in(SinhVien a){
	cout <<"B20DCCN001 " <<a.ten <<" " <<a.lop <<" ";
	for(int i=0; i<=1; i++)
		{
			for(int j=0; j<=1; j++)
				{
					cout <<a.date[i][j];
				}
			cout <<"/";
		}
	cout <<a.date[2] <<" " <<fixed <<setprecision(2)<<a.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
	in(a);
    return 0;
}

