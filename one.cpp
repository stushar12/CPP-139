    string commonPrefixUtil(string str1, string str2) 
{ 
    string result; 
    int n1 = str1.length(), n2 = str2.length(); 
  
    for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++) 
    { 
        if (str1[i] != str2[j]) 
            break; 
        result.push_back(str1[i]); 
    } 
  
    return result; 
} 
  
string longestCommonPrefix  (string arr[], int n) 
{ 
    if(n==0)
        return "-1";
    string prefix =  arr[0]; 
  
    for (int i=1; i<=n-1; i++) 
        prefix = commonPrefixUtil(prefix, arr[i]); 
  
  if(prefix=="")
  return "-1";
    return prefix; 
} 
