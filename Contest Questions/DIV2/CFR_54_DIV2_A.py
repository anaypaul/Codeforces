def main():
    hello  = "hello"
    s = input()
    if('h' not in s or 'o' not in s or len(s) < len(hello)):
        print("NO")
    else:
        start = s.index('h')
        end = s[::-1].index('o')
        
        sprime = s[start:len(s)-end]
        if(len(sprime) < len(hello) or sprime[0] != 'h' or sprime[-1] != 'o'):
            print("NO")
        else:
            ans = ""
            i=0
            j=0
            while(i<len(sprime) and j<len(hello)):
                if(hello[j] == sprime[i]):
                    ans += hello[j]
                    j+=1
                    i+=1
                else:
                    i+=1
            if(ans==hello):
                print("YES")
            else:
                print("NO")
            
if __name__ == '__main__':
    main()