#include<iostream>
#include<ctime>
using namespace std;
int main(){
    time_t t=time(0);   //返回自1970/01/01以来所经历的秒数
    char *pt=ctime(&t);
    tm *dt=localtime(&t);
    cout<<"自1970/01/01以来所经历的秒数："<<t<<"\n";
    cout<<pt;   //以字符串的形式输出当地时间，格式为系统默认的
    cout<<"本地时间：    ";
    if(dt->tm_wday==0){
    	dt->tm_wday=7;
	}
    cout<<dt->tm_year+1900<<"/"<<dt->tm_mon+1<<"/"<<dt->tm_mday<<"  星期"<<dt->tm_wday<<"  "; //输出结构体中的日期和时间
    cout<<dt->tm_hour<<":"<<dt->tm_min<<":"<<dt->tm_sec<<"\n";
    dt=gmtime(&t);
    cout<<"世界标准时间：";
    if(dt->tm_wday==0){
    	dt->tm_wday=7;
	}
    cout<<dt->tm_year+1900<<"/"<<dt->tm_mon+1<<"/"<<dt->tm_mday<<"  星期"<<dt->tm_wday<<"  "; //输出结构体中的日期和时间
    cout<<dt->tm_hour<<":"<<dt->tm_min<<":"<<dt->tm_sec<<"\n";
    return 0;
}
