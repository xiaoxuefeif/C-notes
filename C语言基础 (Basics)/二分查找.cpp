# include<stdio.h>

int search(int* nums, int numsSize, int target){
      int left=0,right=numsSize-1;
      int mid=0;
      while(left<=right)
      {
      	mid=(left+right)/2;
        if(nums[mid]==target) return mid;
        if(nums[mid]<target)
        {
          left=mid+1;
        }
        else
        {
          right=mid-1;
        }
      }
      return -1;
}




int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9}; 
	printf("%d", search(arr,9,7));
	return 0;
} 
