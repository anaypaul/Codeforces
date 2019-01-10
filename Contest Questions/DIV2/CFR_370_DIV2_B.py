def main():
    s = input()
    R = s.count('R')
    L = s.count('L')
    U = s.count('U')
    D = s.count('D')
    ans = -1
    if((R+L+U+D)%2 == 0):
        if((R==L) and (U==D)):
            print("0")
        else:
            ans = (abs(R-L) + abs(U-D))//2
            print(ans)
    else:
        print("-1")
if __name__ == '__main__':
    main()