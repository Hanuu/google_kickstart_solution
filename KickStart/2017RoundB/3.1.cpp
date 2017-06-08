#include <iostream>

using namespace std;

int N,M,K;
bool tree[100][100];
int numberofgreenbyposition[100][100];


void check(int r,int c){
    int currentr=r;
    int currentc=c;
    int height=1;
    while((0<=r+height+1-1)&&(r+height+1-1<=N-1)&&(0<=c-height-1+1)&&(c+height+1-1<=M-1)){
        for(int i=c-height-1+1;i<=c+height+1-1;i++){
            if(tree[r+height+1-1][i]==0){
                numberofgreenbyposition[r][c]=height*height;
                return;
            }
        }
        height++;
    }
    numberofgreenbyposition[r][c]=height*height;
    
    return;
}

int sol(){
    int ret=0;
    for(int r=0;r<N;r++){
        for(int c=0;c<M;c++){
            if(tree[r][c]==1){
                check(r,c);
                if(numberofgreenbyposition[r][c]>ret) ret=numberofgreenbyposition[r][c];
            }
            else numberofgreenbyposition[r][c]=0;
            // printf("%d",numberofgreenbyposition[r][c]);
        }   
        // printf("\n");
    }
    return ret;
}

int main(){
    
    freopen("3in.txt","r",stdin);
    freopen("3out.txt","w",stdout);
    int tc;
    scanf("%d",&tc);
    for(int nt=1;nt<=tc;nt++){
        scanf("%d %d %d",&N,&M,&K);
        // printf("%d %d %d\n",N,M,K);

        char temp[100];
        for(int r=0;r<N;r++){
            scanf("%s",temp);
            for(int c=0;c<M;c++){
                if(temp[c]=='.') tree[r][c]=0;
                else{ 
                    tree[r][c]=1;
                    // printf("This was %delse \n",tree[N][M]);
                    
                }
                // printf("%d",tree[r][c]);
            }
            // printf("\n");
        }
        // printf("%d %d %d\n",N,M,K);
        printf("Case #%d: %d\n",nt,sol());
        
    }
}