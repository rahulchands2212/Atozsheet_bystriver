
class lowerbound{
    public int lowerBound(int[] nums, int x) {
       int high = nums.length-1;
       int low = 0;
       int index = nums.length;
       while(low<=high){
            int mid = low +(high-low)/2;
            if(nums[mid]>=x){
                index = mid;
                high = mid-1;
            }else if(nums[mid]<x){
                low = mid+1;
            }
       }
       return index;
     }

     public void main(String[] args){
        int[] nums = {3, 4, 4, 7, 8, 10};
        int target = 5;
        insertatposition obj = new insertatposition();
        obj.searchInsert(nums, target);
    }
}
