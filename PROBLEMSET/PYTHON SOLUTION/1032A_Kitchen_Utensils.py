def solution(n,k,arr):
    types = len(set(arr))
    dishes = n//types
    return k*dishes*types - n
    
def main():
    n,k = map(int, input().split())
    arr = list(map(int, input().split()))
    print(solution(n,k,arr))

if __name__ == '__main__':
    main()
