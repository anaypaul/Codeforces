def main():
    s = input()
    vowels = ["a","e","i","o","y","u","Y","A","E","I","O","U"]
    ans = ""
    for i in range(len(s)):
        if s[i] in vowels:
            pass
        else:
            ans += "."+s[i].lower()
    print(ans)

if __name__ == '__main__':
    main()