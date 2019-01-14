def main():
    s = input()
    prev = s[0]
    danger = 1
    flag = 0
    for i in range(1,len(s)):
        if(prev == s[i]):
            danger+=1
        else:
            prev = s[i]
            danger = 1
        if(danger==7):
            print("YES")
            flag = 1
            break
    if(flag ==0):
        print("NO")
        
if __name__ == '__main__':
    main()