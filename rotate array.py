class Solution:
    def rotate_array(self,n,d,arr):
        p=1
        while(p<=d):
            temp = arr[0]
            for i in range(0,(len(arr)-1)):
                arr[i] = arr[i+1]
            arr[n-1] = temp
            p = p+1
        return arr
                

if __name__ == '__main__':
    T=int(input())
    for i in range(T):
        n, d = map(int,input().split())
        arr = list(map(int,input().strip().split()))[:n] 
        ob = Solution()
        ans = ob.rotate_array(n,d,arr)
        for i in ans:
            print(i, end=' ')
        print()
