#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>
using namespace std;
string name[100];
bool a[100];
int main() {
	ifstream fin;
	fin.open("jihua.txt");
	int x=1;
	while(true) {
		system("cls");
		cout<<"----------计划表----------\n";
		for(int i=1; i<=20; i++) {
			cout<<"|"<<i<<".";
			cout<<name[i];
			for(int j=1; j<=22-name[i].length(); j++) {
				cout<<'_';
			}
			cout<<'|';
			if(a[i]==0){
				cout<<"█x\n";
			}else{
				cout<<"√█\n";
			}
		}
		cout<<"--------------------------\n";
		cout<<"0:新建任务\n1:打勾\n2:自动输入\n3:删除\n";
		int c;
		cin>>c;
		if(c==0) {
			cin>>name[x];
			a[x]=0;
			x++;
		}else if(c==1){
			int w;
			cin>>w;
			a[w]=!a[w];
		}else if(c==2){
			int n;
			fin>>n;
			x=1;
			for(int i=1;i<=n;i++){
				fin>>name[x++];
			}
		}else if(c==3){
			x--;
			name[x]="";
		}
	}
	return 0;
}
//44
