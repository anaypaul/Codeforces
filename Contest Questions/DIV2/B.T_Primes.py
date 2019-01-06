import sys
import math
isTPrime = [1]*(999999)
isTPrime[0] = 0
isTPrime[1] = 0
def t_primes(arr):
    i = 2
    while(i < len(isTPrime)):
        if( isTPrime[i] == 1 and i*i < len(isTPrime)):
            j = 2
            while( i*j < len(isTPrime)):
                isTPrime[i*j] = 0
                j += 1
        i+= 1
    
    for i in range(len(arr)):
        num,deci = str(math.sqrt(arr[i])).split(".")
        # print(num,deci)
        if(deci[-1]=='0' and isTPrime[int(num)] == 1):
            print("YES")
        else:
            print("NO")
        

    

            
def main():
    n = int(input())
    arr = list(map( int, input().split()))
    t_primes(arr)

if __name__ == "__main__":
    main()