#Print the kth digit
 def kthDigit(self, A, B, K):
        a=A**B
        b=[int(i) for i in str(a)]
        b.reverse()
        c=len(b)
        for i in range(c):
            if(K==(i+1)):
                return(b[i])
        # code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        A,B,K = input().split()
        ob = Solution()
        print(ob.kthDigit(int(A),int(B),int(K)))
# } Driver Code Ends
