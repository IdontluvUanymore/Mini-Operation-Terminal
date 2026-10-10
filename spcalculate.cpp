#include<bits/stdc++.h>
using namespace std;
string a="",b="";
void Count_add(string a,string b){
	reverse(a.begin(),a.end());//反转字符串 
	reverse(b.begin(),b.end());
	int x[2333]={0},y[2333]={0},z[2333]={0};
	for(int i=0;i<a.length();i++){//转换成数组储存 
		x[i]=a[i]-'0';
	}
	for(int j=0;j<b.length();j++){
		y[j]=b[j]-'0';
	}
	int len=max(a.length(),b.length());//求较长的数字 
	int flag=0;
	for(int k=0;k<len;k++){
		z[k]=x[k]+y[k]+flag;
		if(z[k]>=10){//判断最后是否有进位 
			flag=1;
			z[k]-=10;
		}else{
			flag=0;
		}
	}
	if(flag==1){
		cout<<'1';
	}
	for(int l=len-1;l>=0;l--){//反向输出 
		cout<<z[l];
	}
}
void Count_subtract(string a,string b){
	bool fh=0;
	if(a.size()<b.size()&&a<b){
		swap(a,b);
		fh=1;
	}
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int len=max(a.length(),b.length());
	int x[2333]={0};
	int y[2333]={0};
	int z[2333]={0};
	for(int i=0;i<len;i++){
		x[i]=a[i]-'0';
		y[i]=b[i]-'0';
	}
	for(int j=0;j<=len;j++){
		if(x[j]>=y[j]){
			z[j]=x[j]-y[j];
		}else{
			x[j+1]-=1;
			z[j]==x[j]+10-y[j];
		}
	}
	z[len-1]=x[len-1]-y[len-1];
	if(fh){
		cout<<"-";
	}
	bool n0=1;
	for(int k=len-1;k>=0;k--){
		if(z[k]==0&&z[0]!=0 && n0){
			continue;
		}else if(z[k]==z[0]==0){
			cout<<0;
			break;
		}else{
			n0=0;
		}
		cout<<z[k];
	}
}
int main(){
	char w;
	while(true){
		cout<<"Input the equation :\n(Input 1 1 1 to cancel)"<<endl;
		cin>>a>>w>>b;
		if(w=='+'){
			cout<<" = ";
			Count_add(a,b);
		}else if(w=='-'){
			cout<<" = ";
			Count_subtract(a,b);
		}else if(a+w+b=="111"){
			break;
		}else{
			cout<<"Invalid command."<<endl;
		}
		cout<<"\n\n";
	}
} 
