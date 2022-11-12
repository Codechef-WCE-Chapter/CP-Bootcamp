# Kaden's Algorithm

## Theory
The idea of Kadane’s algorithm is to maintain a variable max_ending_here that stores the maximum sum contiguous subarray ending at current index and a variable max_so_far stores the maximum sum of contiguous subarray found so far, Everytime there is a positive-sum value in max_ending_here compare it with max_so_far and update max_so_far if it is greater than max_so_far.

## Implementation

### CPP
```cpp
#include <bits/stdc++.h>
using namespace std;

void KadenAlgo(int n, vector<int> V){
    int max_so_far = INT_MIN, max_ending_here = 0;

    for(int i=0; i<n; i++){
        max_ending_here = max_ending_here + V[i];

        if(max_so_far < max_ending_here) max_so_far = max_ending_here;
    
        if(max_ending_here < 0) max_ending_here = 0;
    }

    cout<<"Maximum contiguos sum: "<<max_so_far<<endl;
}

int main(){

    int n = 10;
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};

    KadenAlgo(n ,arr);

    return 0;
}
```

### Python
```py
def KadenAlgo(n, arr):
    max_sum, max_ending = 0, 0

    for i in range(n):
        max_ending += arr[i]

        if max_ending < 0:
            max_ending = 0

        if max_sum < max_ending:
            max_sum = max_ending

    return max_sum

def main():
    n = 8
    arr = [-2, -3, 4, -1, -2, 1, 5, -3]

    print(KadenAlgo(n, arr))

if __name__ == '__main__':
    main()
```

## Practice Questions
- [Maximum Sum Circular Subarray](https://leetcode.com/problems/maximum-sum-circular-subarray/)
- [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)
