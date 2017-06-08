#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <string>
#include <string.h>

int main() {

	FILE *fp = fopen("1out.txt", "w");
	freopen("1in.txt", "r", stdin);

    int t;
	cin >> t;
	int n, k;
	for (int i = 1; i <= t; i++) {
	    cin >> n;
	    cin >> k;
	    for(int a=1;a<=n;a++){
	        cin>>R[a];
	        cin>>H[a];
	    }
		
        long double answer=totalsyrup(n,k);
	    printf("Case #%d: %Lf\n", i,answer);
	    fprintf(fp, "Case #%d: %Lf\n",i,answer);
	    
	    
	    

	}
}

