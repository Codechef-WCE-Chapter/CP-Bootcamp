# Prefix Sum or Cumulative Sum

## Theory
Run through index 1 to last and keep on adding the present element with the previous value in the prefix sum array.
In short sum of the prefixes of the array indices.

## Implementation

### CPP
```cpp
#include <bits/stdc++.h>
using namespace std;

void PrefixSum(vector<int> input, int n, vector<int> prefixSum){
    prefixSum[0] = input[0];
    
    for(int i=1; i<n; i++){
        prefixSum[i] = prefixSum[i-1] + input[i];
    }
}

int main(){
    fastIO

    vector<int> input = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = input.size();

    vector<int> prefixSum(n, 0);
    PrefixSum(input, n, prefixSum);

    for(int i=0; i<n; i++) cout<<prefixSum[i]<<" ";

    return 0;
}
```

### Python
```py
def prefixSum(n, arr):
    prefix_sum = [0] * (n + 1)

    for i in range(1, n + 1):
        prefix_sum[i] = prefix_sum[i - 1] + arr[i - 1]

    return prefix_sum

def main():
    n = 10
    arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

    prefix_sum = prefixSum(n, arr)

    for i in range(n):
        print()

if __name__ == '__main__':
    main()
```

## Practice Question
- [Equilibrium Point](https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1)
