def main():
    arr = list(map(int, input().split()))
    mydict = {}
    for each in arr:
        if(mydict.get(each) == None):
            mydict[each] = 1
        else:
            mydict[each] += 1
    answer = 0
    for each in mydict.keys():
        if(mydict[each]>1):
            answer += mydict[each] - 1
    print(answer)

if __name__ == '__main__':
    main()