def main():
    n = int(input())
    mydict = {}
    for _ in range(n):
        s = input()
        if(mydict.get(s) == None):
            mydict[s] = 1
        else:
            mydict[s] += 1
    t  = list(set(mydict.keys()))
    if(len(t)>1):
        if(mydict[t[0]] > mydict[t[1]]):
            print(t[0])
        else:
            print(t[1])
    else:
        print(t[0])
    
if __name__ == '__main__':
    main()