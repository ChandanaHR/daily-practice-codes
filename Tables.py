#To print multiplication table of a number
class Solution:
     def getTable(self,N):
     ans = []
     for j in range(1,11):
         ans.append(N*j)
     return ans
if __name__ = '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        ob = Solution()
        ans = ob.getTable(N)
        for i in ans:
            print(i,end=" ")
        print()
