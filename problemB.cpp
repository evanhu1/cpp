int bestSquares(std::vector<std::vector<int>> m, int k) {
    int sum = 0, best = 0;
    for(int i=0;i<int(m[0].size())-k;i++) {
        for(int j=0;j<int(m.size())-k;i++) {
            for(int l=i;l<i+k;l++) {
                for(int n=j;n<j+k;j++) {
                    sum += m[l][n];
                }
            }
            best = max(best, sum);
        }
    }
    int a[k*k];
    set <int> answer;
    for(int i=0;i<int(m[0].size())-k;i++) {
        for(int j=0;j<int(m.size())-k;i++) {
            for(int l=i;l<i+k;l++) {
                for(int n=j;n<j+k;j++) {
                    sum += m[l][n];
                    
                }
            }
            if(sum==best) {
                for(int l=i;l<i+k;l++) {
                    for(int n=j;n<j+k;j++) {
                        answer.insert(m[l][n]);
                    }
                }
            }
        }
    }
    int ans = 0;
    for(int a:answer) {
        ans += a;
    }
    return ans;
}
