#Binary number to decimal number conversion
class Solution:
    def binary_to_decimal(self, str):
        a=[int(i) for i in str]
        a.reverse()
        ans=0
        b=1
        for i in a:
            c=i*b
            ans=ans+c
            b=b*2
        return ans
        # Code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T=int(input())
    for i in range(T):
        str = input()
        ob = Solution();
        ans = ob.binary_to_decimal(str)
        print(ans)
# } Driver Code Ends
