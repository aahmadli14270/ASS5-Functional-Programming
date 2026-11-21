#include <bits/stdc++.h>
#include <vector>

using namespace std;



int main() {
    long long n, m, x, y, a, b, cnt, sum;
    
    scanf("%lld", &n);

    vector<long long> arr;
    
    for (long long i = 1; i <=n; i++){
        arr.push_back(i);
    }

    int flag = 1;

    while (arr.size() > 1){
        vector<long long> updated;

        for (long long i = 0; i < arr.size(); ++i) {
            int cnt = i + 1; 

            if (flag == 1) {
                if (cnt % 2 != 0) updated.push_back(arr[i]);
            } 
            else if (flag == 2) {
                if (cnt % 2 == 0) updated.push_back(arr[i]);
            } 
            else if (flag == 3) {
                if (cnt % 3 != 0) updated.push_back(arr[i]);
            }
        }

        arr = move(updated);

        flag++;
        if (flag > 3) flag = 1;
    }

    printf("%lld", arr[0]);

    return 0;
}
