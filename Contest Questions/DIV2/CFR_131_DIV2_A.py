def main():
    n,m = map(int, input().split())
    
    ll = []
    ll = [(a,b) for a in range(n+1) for b in range(m+1) if a**2 + b == n and a + b**2 ==m]
    print(ll)
    ll = set(ll)
    print(len(ll))

if __name__ == '__main__':
    main()