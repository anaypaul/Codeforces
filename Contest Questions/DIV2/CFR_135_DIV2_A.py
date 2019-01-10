def main():
    k = int(input())
    s = input()
    m = len(s)//k
    hash_ = [0]*26
    for i in range(len(s)):
        hash_[ord(s[i]) - 97 ] += 1
    flag = 0
    for i in range(26):
        if(hash_[i]%k != 0 and hash_[i]!=0):
            print("-1")
            flag = 1
            break
    if(flag==0):
        ans = ""
        for i in range(26):
            if(hash_[i]>0):
                ans += chr(i+97)*(hash_[i]//k)
        if(k== len(s)):
            print(s)
        else:
            print(ans*k)
if __name__ == '__main__':
    main()