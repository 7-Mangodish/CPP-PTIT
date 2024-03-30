#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

struct NhanVien{
	char ten[50],
	sex[10],
	date[50][50],
	add[105],
	id[15],
	cont[50][50];
	
};

void sol(char tmp[], char a[][50]){
	char *tok=strtok(tmp,"/");
	int cnt=0;
	while(tok !=NULL)
		{
			if(strlen(tok)==1)
				{
					char tmp=*tok;
					a[cnt][0]='0';
					a[cnt][1]=tmp;
				}
			else
				{
					strcpy(a[cnt],tok);
				}
			cnt++;
			tok=strtok(NULL,"/");
		}
}

void nhap(NhanVien &a){
	fgets(a.ten,100,stdin);
	a.ten[strlen(a.ten)-1]='\0';
	
	fgets(a.sex,100,stdin);
	a.sex[strlen(a.sex)-1]='\0';
	
	char tmp_d[50];
	fgets(tmp_d,50,stdin);
	tmp_d[strlen(tmp_d)-1]='\0';
	sol(tmp_d,a.date);
	
	fgets(a.add,100,stdin);
	a.add[strlen(a.add)-1]='\0';
	
	fgets(a.id,100,stdin);
	a.id[strlen(a.id)-1]='\0';
	
	char tmp_c[50];
	fgets(tmp_c,50,stdin);
	tmp_c[strlen(tmp_c)-1]='\0';
	sol(tmp_c,a.cont);
}

void in(NhanVien a){
	cout <<"00001" <<" "<<a.ten <<" " <<a.sex<<" ";
	for(int i=0; i<=1; i++)
		{
			for(int j=0; j<=1; j++)
				{
					cout <<a.date[i][j];
				}
			cout <<"/";
		}
	cout <<a.date[2] <<" ";
	cout <<a.add <<" " <<a.id <<" ";
	for(int i=0; i<=1; i++)
		{
			for(int j=0; j<=1; j++)
				{
					cout <<a.cont[i][j];
				}
			cout <<"/";
		}
	cout <<a.cont[2];
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

