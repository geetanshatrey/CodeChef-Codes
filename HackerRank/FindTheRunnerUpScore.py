# Link to the problem : https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list/problem

if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    lis = list(arr)
    maxVal = -101
    secMax = -101
    for i in lis:
        if i > maxVal:
            if maxVal != secMax:
                secMax = maxVal
            maxVal = i
        elif i > secMax and i != maxVal:
            secMax = i
    print(secMax)
