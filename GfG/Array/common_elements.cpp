//BRUTE
/*
    void hashing(int hash[], int arr[], int n)
    {
        for (int i = 0; i < n; i++) // hash first array
        {
            hash[arr[i]]++;
        }
    }
    vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
    {
        int n = max(n1, n2);
        n = max(n, n3);
        // length of longest array
        int val = max(A[n1 - 1], B[n2 - 1]);
        val = max(val, C[n3 - 1]);
        int hash[val + 1] = {0}; // create a hash array of max length

        hashing(hash, A, n1); // hash first array

        hashing(hash, B, n2); // hash second array

        hashing(hash, C, n3); // hash third array

        vector<int> common;
        // traverse hash array and push elements if hash value is 3
        for (int i = 0; i <= (val); i++)
        {
            if (hash[i] >= 3)
            {
                common.push_back(i);
            }
        }
        return common;
    }
*/

// Better

