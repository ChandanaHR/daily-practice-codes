class Solution:
    def isDigitSumPalindrome(self,N):
        a = [int(i) for i in str(N)]
        sum=0
        for j in a:
            sum=sum+j
        temp=sum
        r=0
        while(sum>0):
            dig=sum%10
            r=r*10+dig
            sum=sum//10
        if(len(str(temp))==1):
            return 1
        if(temp==r):
            b=[int(i) for i in str(r)]
            return(1)
        else:
            return(0)
            #code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N=int(input())
        ob=Solution()
        print(ob.isDigitSumPalindrome(N))
# } Driver Code Ends
