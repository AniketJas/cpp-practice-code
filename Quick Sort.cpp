//Quick Sort

void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high){
            int p_index = partition(arr,low,high);
            
            quickSort(arr,low,p_index-1);
            quickSort(arr,p_index+1,high);
        }
    }
    
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot = low;
       int i=low;
       int j=high;
       
       while(i<j){
           while(arr[i]<=arr[pivot] && i<high){
               i++;
           }
           
           while(arr[j]>arr[pivot] && j>low){
               j--;
           }
           
           if(i<j){
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
       }
        int temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
        
        return j;
    }