#To print all jumping numbers of a given number
class Queue:
    def __init__(self):
        self.lst=[]
    def is_empty(self):
        return self.lst==[]
    def enqueue(self,item):
        self.lst.append(item)
    def dequeue(self):
        return self.lst.pop(0)
        
class Solution:
    def jumpingNums(self, X):
        print(str(0),end=' ')
        for i in range(1,10):
            q=Queue()
            q.enqueue(i)
            while(not q.is_empty()):
                i=q.dequeue()
                if i<=X:
                    print(str(i),end=' ')
                    last = i%10
                    if last==0:
                        q.enqueue((i*10)+(last+1))
                    elif last==9:
                        q.enqueue((i*10)+(last-1))
                    else:
                        q.enqueue((i*10)+(last-1))
                        q.enqueue((i*10)+(last+1))
        
        # code here 

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        X=int(input())
        
        ob = Solution()
        print(ob.jumpingNums(X))
# } Driver Code Ends
