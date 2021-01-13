# Link to the problem : https://www.hackerrank.com/challenges/nested-list/problem

if __name__ == '__main__':
    lis = []
    names = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        names.append(name)
        lis.append(score)
    j = 0
    res = []
    first = []
    minVal = 101.0
    secMinVal = 102.0
    for i in lis:
        if i < minVal:
            secondMinVal = minVal
            res = first
            minVal = i
            first = []
            first.append(names[j])
        elif i == minVal:
            first.append(names[j])
        elif i < secondMinVal:
            secondMinVal = i
            res = []
            res.append(names[j])
        elif i == secondMinVal:
            res.append(names[j])
        j = j + 1    

    res.sort()
    for i in res:
        print(i)
