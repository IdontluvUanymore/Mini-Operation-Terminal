#include<bits/stdc++.h>
using namespace std;
void wait(int t){
	time_t t0=clock(),t1;
	while(t1-t0<t*1000){
		t1=clock();
	}
}
int main(){
	int i;
	cout<<"Input how many seconds you want the computer to shutdown after (>60) :"<<endl;
	cin>>i;
	while(i<=60){
		cout<<"Less than 60, please input again:"<<endl;
		cin>>i;
	}
	label:
	cout<<i<<" ";
	i-=1;
	wait(1);
	if(i>0){
		goto label;
	}
	cout<<"SLEEP"<<endl;
	system("shutdown -s");
	return 0;
}
