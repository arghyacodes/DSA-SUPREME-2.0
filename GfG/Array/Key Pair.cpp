	    /*

    Un optimised soln.
    Time Complexity O(n^2)

        int i = 0;
	    while(i<n)
	    {
	        for(int j=(i+1); j<n; j++)
	        {
	            if(arr[i]+arr[j]==x)
	            {
	                return true;
	            }
	        }
	        i++;
	    }
	    return false;
        */