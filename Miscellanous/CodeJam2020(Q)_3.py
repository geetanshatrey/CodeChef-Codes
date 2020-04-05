//Problem Name: Parenting Partnering Returns

T=int(input())
F=T
while(T):
    N=int(input())
    x=[]
    for i in range(0,N):
        value= [int(val) for val in raw_input().split(" ")]
        x.append(value)
    arr = []
    for i in range(len(x)):
        arr.append((x[i][0], x[i][1], i))
    arr.sort()
    cameron_End=0
    jamie_End=0
    resultarr=[]
    finalResult=""
    for startTime,endTime,index in arr:
        if startTime < cameron_End and startTime < jamie_End:
            finalResult="IMPOSSIBLE"
            break
        if startTime >= cameron_End:
            resultarr.append(('C', index))
            cameron_End = endTime
        else:
            resultarr.append(('J', index))
            jamie_End = endTime
    if finalResult!="IMPOSSIBLE":
        for workAssignedTo,index in sorted(resultarr,key= lambda a:a[1]):
            finalResult=finalResult+workAssignedTo
    print("Case #{}: {}".format(F-T+1, finalResult))
    T=T-1
