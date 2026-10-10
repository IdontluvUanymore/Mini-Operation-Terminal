#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(true){
		string word;
		printf("Input your instruction:\n\t");
		cin>>word;
		cout<<"\n";
		if(word=="write"){
			string s;
			n+=1;
			FILE* fp;
			printf("LogNO.%d :\nWRITE:\n\t",n);
			cin>>ws>>s;
			fp=fopen("at.doc","a");
			if(fp!=NULL){
				ofstream outClientFile("at.doc");
				outClientFile<<s;
				printf("\nDONE\n\n\n");
			}else{
    	 		printf("\nFAIL\n\n\n");
				n-=1;
			}
		}else if(word=="read"){
			string s;
			n+=1;
			FILE* fp;
			printf("LogNO.%d :\nREAD:\n\t",n);
			fp=fopen("at.doc","a");
			if(fp!=NULL){
				ifstream inClientFile("at.doc");
				inClientFile>>s;
				cout<<s<<endl;
				printf("DONE\n\n\n");
			}else{
    		    printf("FAIL\n\n\n");
			}
		}else if(word=="sleep"){
			n+=1;
			printf("LogNO.%d :\nSLEEP:\n\t",n);
			system("call sleep.exe");
			cout<<"\n\n\n";
		}else if(word=="time"){
			n+=1;
			printf("LogNO.%d :\nTIME:\n\t",n);
			system("call time.exe");
			cout<<"\n\n\n";
		}else if(word=="calculate"){
			n+=1;
			printf("LogNO.%d :\nCALCULATE:\n\t",n);
			system("call calculate.exe"); 
			cout<<"\n\n\n";
		}else if(word=="spcalculate"){
			n+=1;
			printf("LogNO.%d :\nSPCALCULATE:\n\t",n);
			system("call spcalculate.exe"); 
			cout<<"\n\n";
		}else if(word=="cancel"){
			break;
		}else{
			printf("Invalid command\n\n\n");
		}
	}
	return 0;
}
