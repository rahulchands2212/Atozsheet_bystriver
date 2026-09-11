public class insertatposition {
    public void searchInsert(int[] nums, int target) {
        int low = 0;
        int high = nums.length-1;
        int ans = nums.length;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]>=target){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        System.out.println(ans);
    }

    public void main(String[] args){
        int[] nums = {3, 4, 4, 7, 8, 10};
        int target = 5;
        insertatposition obj = new insertatposition();
        obj.searchInsert(nums, target);
    }
}