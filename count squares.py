#Count Squares
class Solution:
    def countSquares(self, N):
        if(N==0):
            return N
        sqrt = (N-1)**0.5
        result = int(sqrt)
        return result
        # code here 

#{ 
#  Driver Code Starts
#Initial Template for Python 3
import math

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        
        ob = Solution()
        print(ob.countSquares(N))
# } Driver Code Ends
