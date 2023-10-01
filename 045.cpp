// https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    priority_queue<int> pq;

    for (int row=0; row<n; row++){
        for (int col=0; col<n; col++){
            pq.push(mat[row][col]);
            
            if (pq.size() > k)
                while(pq.size() > k)
                    pq.pop();
        }
    }

    return pq.top();
}