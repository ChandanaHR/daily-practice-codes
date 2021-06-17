#To find closest number 
class Solution:
    def closestNumber(self, N , M):
        p = int(N/M)
        q = M*p
        if((M*N)>0):
            r = (M*(p+1))
        else:
            r = (M*(p-1))
        if(abs(N-q)<abs(N-r)):
            return q
        return r
        # code here 

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N,M=map(int,input().split())
        
        ob = Solution()
        print(ob.closestNumber(N,M))
# } Driver Code Ends
