def main():
    s = input()
    nums = list(map(int, s.split('+'))) 
    nums.sort()
    for i in range(len(nums)):
        nums[i] = str(nums[i])
    ans = "+".join(nums)
    print(ans)
if __name__ == '__main__':
    main()