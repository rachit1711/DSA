string isSubset(int a1[], int a2[], int n, int m) {
    
    unordered_map<int, int> um, um2;

    for (int i = 0; i < n; i++) {
        um[a1[i]]++;
    }
    for (int i = 0; i < m; i++) {
        um2[a2[i]]++;
    }

    int count = 0;
    for (auto it = um2.begin(); it != um2.end(); it++) {
        if (um[it->first] >= it->second) {
            count++;
        }
    }

    if (count == m)
        return "Yes";
    else
        return "No";
}