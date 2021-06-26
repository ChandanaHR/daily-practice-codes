#Armstrong number
#User function Template for python3
class Solution:
    def armstrongNumber (ob, n):
        b=0
        a=[int(i) for i in str(n)]
        for j in a:
            b = b+j**3
        if(b==n):
            return "Yes"
        else:
            return "No"
        # code here 

#{ 
#  Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n = input()
        n=int(n)
        ob = Solution()
        print(ob.armstrongNumber(n))
# } Driver Code Ends
