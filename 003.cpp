// https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
int kthSmallest(int arr[], int l, int r, int k) {
    priority_queue<int> pq;
    // is priority queue me pq.top() maximum hoga
    // jb pq me k elements hoge tb pq.top() k elements ka minimum hoga
    
    for (int i=0; i<k; i++){
        pq.push(arr[i]);
    }
    
    for (int i=k; i<=r; i++){
        if (pq.top() > arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    
    return pq.top();
}