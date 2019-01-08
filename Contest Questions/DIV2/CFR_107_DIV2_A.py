def main():
    n,k,l,c,d,p,nl,np = map(int, input().split())
    x1 = ((k*l)//nl)//n
    x2 = (c*d)//n 
    x3 = (p//np)//n
    print(min(x1,x2,x3))

if __name__ == '__main__':
    main()