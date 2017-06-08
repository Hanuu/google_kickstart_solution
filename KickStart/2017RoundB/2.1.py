import numpy as np

f= open("2in.txt").read().split("\n")
writeF=open("2out.txt","w")


def getdistance(X,Y,x,y):
    value=0
    for i in range(0,len(X)):
        value+=max(abs(X[i]-x),abs(Y[i]-y))
    return value
    
def mininumpercoord(X,Y):
    temp=1000000000
    tempX=set(X)
    tempY=set(Y)
    for i in np.arange(min(X),max(X)+0.01,0.01):
        for j in np.arange(min(Y),max(Y)+0.01,0.01):
            value=getdistance(X,Y,i,j)
            if(temp>value):
                temp=value
    return temp
    
# def findmin(X,Y,N):
#     maxy=max(Y)
#     miny=min(Y)
#     maxx=max(X)
#     minx=min(X)
#     # temp=10000000000
#     total=0
#     for i in X:
#         for j in Y:
#             # value=mininumpercoord(X,Y,i,j)
#             # if value<temp:
#             #     temp=value
#             # total+=mininumpercoord(X,Y,i,j)
#     return temp

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