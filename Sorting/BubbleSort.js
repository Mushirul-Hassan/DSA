// function BubbleSort(nums) {
// int nums = []; 
// for (int i = 0,  i < nums.length, i++){
//     int min = min(ele);

//     for (int j = i +1 , j < nums.length, j++){
//         if (arr[j] < arr [j+1]){
//             min(ele) = (j + 1)
//         }
//     }
// }
function bubbleSort(nums) {
  // 1. Use 'let' for variables
  for (let i = 0; i < nums.length; i++) {
    
    // 2. The inner loop compares neighbors
    // We use nums.length - i - 1 so we don't check already-sorted numbers at the end
    for (let j = 0; j < nums.length - i - 1; j++) {
      
      // 3. If the left is bigger than the right, swap them
      if (nums[j] > nums[j + 1]) {
        let temp = nums[j];
        nums[j] = nums[j + 1];
        nums[j + 1] = temp;
      }
    }
  }
  return nums;
}