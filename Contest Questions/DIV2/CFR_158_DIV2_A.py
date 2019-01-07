def main():
    a,b,n = map(int, input().split())
    i = 0
    while(i<n):
        flag = 0
        for j in range(10):
            if( int(str(a)+str(j))%b==0 ):
                a = int(str(a)+str(j))
                flag = 1
                break
        if(flag==0):
            break
        else:
            x = "0"*(n-(i+1))
            a = str(a) + x
            i = n-1
        i = i + 1
    if(i==n):
        print(a)
    else:
        print("-1")

if __name__ == '__main__':
    main()