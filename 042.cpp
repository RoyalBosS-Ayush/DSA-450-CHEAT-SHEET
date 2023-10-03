// https://practice.geeksforgeeks.org/problems/max-rectangle/1
// https://www.youtube.com/watch?v=IPT6emqnxg8
// https://www.youtube.com/watch?v=lJLcqDsmYfg
vector<int> nextSmallerElements(vector<int> &arr, int n){
    vector<int> v(n);
    stack<int> s;
    s.push(-1);
    
    for (int i=n-1; i>=0; i--){
        while (s.top() != -1 && arr[s.top()] >= arr[i])
            s.pop();
            
        v[i] = s.top();
        s.push(i);
    }
    
    return v;
}

vector<int> prevSmallerElements(vector<int> &arr, int n){
    vector<int> v(n);
    stack<int> s;
    s.push(-1);
    
    for (int i=0; i<n; i++){
        while (s.top() != -1 && arr[s.top()] >= arr[i])
            s.pop();
            
        v[i] = s.top();
        s.push(i);
    }
    
    return v;
}

int largestArea(vector<int> arr, int n){
    int area = INT_MIN;
    vector<int> next = nextSmallerElements(arr, n);
    vector<int> prev = prevSmallerElements(arr, n);
    
    for (int i=0; i<n; i++){
        int l = arr[i];
        if (next[i] == -1)
            next[i] = n;
        int b = next[i] - prev[i] - 1;
        
        area = max(area, l*b);
    }
    
    return area;
}

int maxArea(int M[MAX][MAX], int n, int m) {
    int ans=0;
    vector<int> histogram(m, 0);

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (M[i][j] == 0)
                histogram[j] = 0;
            else
                histogram[j]++;
        }
        
        ans = max(ans, largestArea(histogram, m));
    }

    return ans;
}