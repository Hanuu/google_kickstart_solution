import numpy as np

f= open("2in.txt").read().split("\n")
writeF=open("2out.txt","w")


def getdistance(X,Y,x,y):
    value=0
    for i in range(0,len(X)):
        value+=max(abs(X[i]-x),abs(Y[i]-y))
    return value
    
def getdistanceX(X,x,compare):
    value=0
    for i in range(0,len(X)):
        value+=abs(X[i]-x)
        if value > compare:
            return 1000000000
    return value
    
def getsmallestx(X):
    temp=1000000000
    returnx=[]
    i=min(X)
    valuebefore=1000000000
    while(i<=max(X)):
        value=getdistanceX(X,i,temp)
        if valuebefore<value:
            return returnx
        if temp==value:
            returnx.append(i)
        if temp > value:
            temp=value
            returnx=[]
            returnx.append(i)
        # print returnx,value
        valuebefore=value
        i+=0.005
    return returnx
    
def mininumpercoord(X,Y):
    temp=1000000000
    candidatesx=getsmallestx(X)
    candidatesy=getsmallestx(Y)
    # print(candidatesy,candidatesx)
    for i in candidatesx:
        for j in candidatesy:
            value=getdistance(X,Y,i,j)
            if value<temp:
                temp=value
    return temp
    
number=1
i=1
while(True):
    N=int(f[i])
    XnY=[]
    X=[]
    Y=[]
    for coord in range(1,N+1):
        XnY=f[i+coord].split(" ")
        X.append(float(XnY[0]))
        Y.append(float(XnY[1]))
    # print((X,Y))
    
    
    answer=mininumpercoord(X,Y)
    print("Case #%d: %lf" %(number,answer))
    writeF.write("Case #%d: %lf\n" %(number,answer))
    number+=1
    i+=N+1


f.close()
writeF.close()