#GCD of two numbers
import math
class Solution:
    def gcd(self, A, B):
        return math.gcd(A,B)
        # code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        A,B = list(map(int, input().strip().split()))
        ob = Solution()
        print(ob.gcd(A,B))
# } Driver Code Ends

#Another method
def gcd(a,b):
  if(a==0):
    return a
  if(b==0):
    return b
  if(a==b):
    return a
  if(a>b):
    return gcd(a-b,b)
  else:
    return gcd(a,b-a)
  
a=4
b=14
print(gcd(a,b))
