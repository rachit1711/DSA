 int low=0;
        int high=arr.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(arr[mid]==target)
            {
                return mid;
            }
            //check if left side of mid is sorted 
            if(arr[low]<=arr[mid])
            {
                //check if target element lies on left half of mid or not
                if(target>=arr[low] && target<=arr[mid])
                {
                    //it means the element lies in left half and thus right half must be avoided
                    high=mid-1;
                }
                else
                {
                                       //it means the element lies in right half and thus left half must be avoided
                    low=mid+1;
                }
            }
            //check if right side of mid is sorted 
            else
            {
                //check if target element lies on right half of mid or not
                if(target>=arr[mid] && target<=arr[high])
                {
                    //it means the element lies in right half and thus left half must be avoided
                    low=mid+1;
                }
                else
                {
                                        //it means the element lies in left half and thus right half must be avoided
                    high=mid-1;
                }
            }
            
        }
        return -1;