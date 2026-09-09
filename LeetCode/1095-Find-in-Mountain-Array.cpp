/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int peakIndex(MountainArray& mountainArr) {
        int left = 0;
        int right = mountainArr.length() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (mountainArr.get(mid) < mountainArr.get(mid + 1)) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return left;
    }
    int binarySearch(int l,int r, MountainArray& mountainArr,int target)
    {
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(mountainArr.get(mid)==target)
            {
                return mid;
            }else if(mountainArr.get(mid)>target)
            {
                l=mid+1;
            }else
            {
                r=mid-1;
            }
        }
        return -1;
    }
    int reverseBinarySearch(int l,int r, MountainArray& mountainArr,int target)
    {
        while(l<=r)
        {
           int  mid=l+(r-l)/2;
            if(mountainArr.get(mid)==target)
            {
                return mid;
            }else if(mountainArr.get(mid)>target)
            {
             
                  r=mid-1;
            }else
            {
                  l=mid+1;
            }
        }
        return -1;
    }

    int findInMountainArray(int target, MountainArray& mountainArr) {

        int n = mountainArr.length();
        int idx = peakIndex(mountainArr);

        int result = binarySearch(0, idx, mountainArr, target);
        if (result != -1) {
            return result;
        }
        result = reverseBinarySearch(idx + 1, n - 1, mountainArr, target);
        return result;
    }
};