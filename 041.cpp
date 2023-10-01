// https://practice.geeksforgeeks.org/problems/sorted-matrix2333/1
// TLE
vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
    priority_queue <int, vector<int>, greater<int> > pq;
    
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            pq.push(Mat[i][j]);
        }
    }
    
    vector<vector<int>> ans(N, vector<int>(N));
    int count=0;
    while(!pq.empty()){
        ans[count/N][count%N] = pq.top();
        pq.pop();
        count++;
    }
    
    return ans;
}

vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
    vector<int> temp(N*N);
    vector<vector<int>> ans(N, vector<int>(N));
    int count=0;
    
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            temp[count++] = Mat[i][j];
        }
    }
    
    sort(temp.begin(), temp.end());


    while(count--){
        ans[count/N][count%N] = temp[count];
    }
    
    return ans;
}