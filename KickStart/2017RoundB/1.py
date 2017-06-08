f= open("1in.txt").read().split("\n")
writeF=open("1out.txt","w")


def gettotal(N,K):
    total=0
    for i in range(0,N):
        total+=(-2**(N-i-1)+2**(i))*int(K[i])
    return total%(10**9+7)
    
number=1
for i in range(1,2*int(f[0])+2,2):
    N=int(f[i])
    K=f[i+1].split(" ")
    
    answer=gettotal(N,K)
    print("Case #%d: %d" %(number,answer))
    
    writeF.write("Case #%d: %d\n" %(number,answer))
    number+=1
f.close()
writeF.close()