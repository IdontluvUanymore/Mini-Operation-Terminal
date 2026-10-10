#include <iostream>
using namespace std;
int main(){
	while(true){
    	double a;
    	char b;
    	double c;
    	cout<<"Input the equation :\n(Input 1 1 1 to cancel)"<<endl;
    	cin>>a>>b>>c;
    	if(a==1&&b=='1'&&c==1) break;
    	if(b==43){
    	    cout<<a+c<<endl;
    	}else if(b==45){
    	    cout<<a-c<<endl;
    	}else if(b==42){
    	    cout<<a*c<<endl;
    	}else if(b==47){
    	    cout<<a/c<<endl;
    	}else if(b==37){
    	    cout<<a/100/c<<endl;
    	}else if(b==94){
    	    for(int i=1;i<c;i++){
    	        a=a*a;
    	    }
    	    cout<<a<<endl;
    	}
	}
    return 0;
}
