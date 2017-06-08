#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <string>
#include <string.h>

double X[101];
double Y[101];
double weight[101];
double candidatesx[101];
double candidatesy[101];


double getdistance(int x,int y,int n){
    int value=0;
    for(int i; i<n;i++){
        value+=max(abs(X[i]-x),abs(Y[i]-y));
    }
    return value
}
void getcandidates(int n){
    long double temp=100000000;
    double i=min(X);
    long double valuebefore=100000000;
    while()
    
}

double mininumpercoord(int n){
    long double temp=100000000;
    int numberofcandidatesx,numberofcandidatesy;
    
    for(int i=0;i<numberofcandidatesx;i++){
        for(int j=0;j<numberofcandidatesy;j++){
            value=getdistance(candidatesx[i],candidatesy[j],n);
        }
    }
}

int main() {

	FILE *fp = fopen("2out.txt", "w");
	freopen("2in.txt", "r", stdin);

    int t;
	cin >> t;
	int n;
	for (int i = 1; i <= t; i++) {
	    cin >> n;
	    for(int a=1;a<=n;a++){
	        cin>>X[a];
	        cin>>Y[a];
	        cin>>weight[a];
	    }
		
		
	    printf("Case #%d: %Lf\n", i,answer);
	    fprintf(fp, "Case #%d: %Lf\n",i,answer);
	    
	    
	    

	}
}

