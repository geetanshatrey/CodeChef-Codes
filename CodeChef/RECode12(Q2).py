#Link to the problem: https://www.codechef.com/RC122020/problems/RECNDSTR

T=int(input())
while T:
    S=raw_input()
    x=len(S)
    first=S[0]
    last=S[x-1]
    Y=S
    Z=S
    Y=Y[:-1]
    Y=last+Y
    Z=Z[1:]
    Z=Z+first
    if Y == Z:
        print("YES")
    else:
        print("NO")
    T=T-1
