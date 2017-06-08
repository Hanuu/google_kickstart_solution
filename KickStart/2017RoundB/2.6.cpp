#include <iostream>
#include <cmath>
using namespace std;

double X[10000],Y[10000],W[10000];


double sum(double x,double y,int n){
    double ret=0;
    for(int i=0;i<n;i++){
        ret+=max(abs(x-X[i]),abs(y-Y[i]))*W[i];
    }
    return ret;
}

double valueof(double x,int n){
    double hi=1000;
    double lo=-1000;
    for(int i=0;i<100;i++){
        double l=(lo*2+hi)/3;
        double r=(lo+2*hi)/3;
        double l=sum(x,l,n);
        double r=sum(x,r,n);
        if(l<=r) hi=r;
        else lo=l;
    }
    return sum(x,lo,n);
}

double sol(int n){
    double hi=1000;
    double lo=-1000;
    for(int i=0;i<100;i++){
        double l=(lo*2+hi)/3;
        double r=(lo+2*hi)/3;
        double l=valueof(l,n);
        double r=valueof(r,n);
        if(l<=r) hi=r;
        else lo=l;
    }
    return valueof(lo,n);
}


int main(){
    freopen("2in.txt","r",stdin);
    freopen("2out.txt","w",stdout);
    
    int tc;
    scanf("%d",&tc);
    int n;
    for(int cn=1;cn<=tc;cn++){
        scanf("%d",&n);
        for(int vn=0;vn<n;vn++){
            scanf("%lf %lf %lf",X+vn,Y+vn,W+vn);
            // printf("%lf %lf %lf\n",X[vn],Y[vn],W[vn]);
        }
        printf("Case #%d: %lf\n",cn,sol(n));
    }
    
}