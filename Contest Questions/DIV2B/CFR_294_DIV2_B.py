def main():
    n = int(input())
    mydictprev = {}
    mydict = {}
    num = []
    arr_prev = list(map(int,input().split()))
    for each in arr_prev:
        if(mydictprev.get(each) == None):
            mydictprev[each] = 1
        else:
            mydictprev[each] += 1
    for i in range(0,2,1):
        arr = list(map(int, input().split()))
        for each in arr:
            if(mydict.get(each) == None):
                mydict[each] = 1
            else:
                mydict[each] += 1
        for k,v in mydictprev.items():
            if( mydict.get(k) != mydictprev.get(k)):
                num.append(k)
        arr_prev.clear()
        arr_prev = arr
        mydictprev.clear()
        mydictprev = mydict.copy()
        mydict.clear()

    print(num[0])
    print(num[1])
    
    
if __name__ == '__main__':
    main()