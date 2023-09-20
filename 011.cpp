// https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1
vector<int> duplicates(int arr[], int n) {
    map<int, int> count;
    vector<int> ans;

    for (int i=0; i<n; i++){
        count[arr[i]]++;
    }

    for (auto i: count){
        if (i.second > 1)
            ans.push_back(i.first);
    }
    
    if (!ans.size())
        ans.push_back(-1);

    return ans;
}