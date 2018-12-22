def solution(w):
    if(w!=2 and w%2==0):
        print("YES")
    else:
        print("NO")

def main():
    w = int(input())
    solution(w)

if __name__ == '__main__':
    main()