def main():
    n = int(input())
    a = []
    b = []
    opened = [0]*(1001)
    for i in range(n):
        ai,bi = map(int, input().split())
        a.append(ai)
        b.append(bi)
    answer = 0
    for i in range(n):
            opened[b[i]] += 1
    
    for i in range(n):
        opened[b[i]] -= 1
        if(opened[a[i]] == 0):
            answer += 1
        opened[b[i]] += 1

    print(answer)
if __name__ == '__main__':
    main()