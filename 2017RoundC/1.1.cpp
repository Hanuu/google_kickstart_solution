#include <iostream>
#include <cmath>
#include <string>
#include<string.h>
using namespace std;

char letter[50];
int answer[50];

void sol(){
    int len=strlen(letter);
    if(len%2==1){
        printf("AMBIGUOUS\n");
        return;
    }
    answer[1]=(int)letter[0];
    answer[len-2]=(int)letter[len-1];
    for(int i=0;i<len;i=i+2){
        if(i==0||i==len-1){
        }
        else{
            if(i%2==0){
                if(0<=((int)letter[i]-(int)answer[i-1])&&( (int)letter[i]-(int)answer[i-1] )<=25){
                    answer[i+1]=((int)letter[i]-(int) answer[i-1])+65;
                }
                else{
                    answer[i+1]=((int)letter[i]-(int) answer[i-1]+26)+65;
                }
            }
        }
        
    }
    for(int i=len-1;i>=0;i-=2){
        if(i==0||i==len-1);
        else{
            if(0<=((int)letter[i]-(int)answer[i+1])&&((int)letter[i]-(int)answer[i+1])<=25){
                answer[i-1]=(((int)letter[i]-(int)answer[i+1]))+65;
            }
            else{
                answer[i-1]=(((int)letter[i]-(int)answer[i+1])+26)+65;
                
            }
        }
    }
    for(int i=0;i<len;i++){
        printf("%c",(char)answer[i]);
    }
    printf("\n");
}



int main(){
    
    freopen("1lin.txt","r",stdin);
    freopen("1lout.txt","w",stdout);
    int tc;
    scanf("%d",&tc);
    for(int nt=1;nt<=tc;nt++){
        scanf("%s",letter);
        
        printf("Case #%d: ",nt);
        sol();
    }
}
