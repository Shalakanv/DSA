#include <iostream>

using namespace std;

void solve(int *arr, int *subset, bool *include, int index, int size) {
    // Base case: If index reaches the end of the array
    if (index == size) {
        // Print the subset
        cout << "[ ";
        for (int i = 0; i < size; i++) {
            if (include[i]) {
                cout << subset[i] << " ";
            }
        }
        cout << "]\n";
        return;
    }

    // Include the current element
    include[index] = true;
    subset[index] = arr[index];
    solve(arr, subset, include, index + 1, size);

    // Exclude the current element
    include[index] = false;
    solve(arr, subset, include, index + 1, size);
}

void getPowerSet(int *arr, int size) {
    int subset[size];
    bool include[size] = {false};

    solve(arr, subset, include, 0, size);
}

int main() {
    int arr[3] = {1, 2, 3};
    int n = 3;

    cout << "Power Set:\n";
    getPowerSet(arr, n);

    return 0;
}

/*
#include <iostream>

using namespace std;

void solve(string str, string subsequence, int index, int size) {
    // Base case: If index reaches the end of the string
    if (index == size) {
        // Print the subsequence
        cout << subsequence << endl;
        return;
    }

    // Include the current character
    solve(str, subsequence + str[index], index + 1, size);

    // Exclude the current character
    solve(str, subsequence, index + 1, size);
}

void getSubsequences(string str) {
    solve(str, "", 0, str.length());
}

int main() {
    string str = "abc";

    cout << "Subsequences of \"" << str << "\":" << endl;
    getSubsequences(str);

    return 0;
}

*/