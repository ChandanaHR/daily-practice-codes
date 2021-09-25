#Median of two sorted arrays
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        if len(nums1)>len(nums2):
            nums1,nums2=nums2,nums1
        m=len(nums1)
        n=len(nums2)
        start=0
        end=m
        while start<=end:
            part_nums1 = (start+end)//2
            part_nums2 = (m+n+1)//2-part_nums1
            maxleftnums1 = -sys.maxsize if part_nums1 == 0 else nums1[part_nums1-1]
            minrightnums1 = sys.maxsize if part_nums1 == m else nums1[part_nums1]
            maxleftnums2 = -sys.maxsize if part_nums2 == 0 else nums2[part_nums2-1]
            minrightnums2 = sys.maxsize if part_nums2 == n else nums2[part_nums2]
            if maxleftnums1 <= minrightnums2 and maxleftnums2 <= minrightnums1:
                if (m+n) % 2 == 0:
                    return(max(maxleftnums1,maxleftnums2)+min(minrightnums1,minrightnums2))/2
                else:
                    return max(maxleftnums1,maxleftnums2)
            elif maxleftnums1>minrightnums2:
                end = part_nums1-1
            else:
                start=part_nums1+1
        raise Exception("IllegalArgumentException")
