 {
     bool isPalindrome = false;
     int i = 0;
     transform(s.begin(), s.end(), s.begin(), ::tolower);
    //  cout<<s;
     vector<char>v;
     while(s[i] !='\0')
     {
        int temp = s[i];
        if(temp>=97 && temp<=123)
        {
            v.push_back(s[i]);
        }
        i++;
     }   
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i<j)
    {
        if(v[i]==v[j])
        {
            isPalindrome = true;
            i++;
            j--;
        }
        else
        {
            isPalindrome = false;
            break;
        }
    }
    return isPalindrome;
    }