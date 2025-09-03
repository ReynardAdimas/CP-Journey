#include <iostream>
#include <queue>
#include <string>
using namespace std;

int longest_beautiful_osn(const string& S) {
    queue<int> queue_o, queue_s, queue_n;
    
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'O') queue_o.push(i);
        else if (S[i] == 'S') queue_s.push(i);
        else if (S[i] == 'N') queue_n.push(i);
    }
    
    int length = 0;
    
    while (!queue_o.empty() && !queue_s.empty() && !queue_n.empty()) {
        int o_idx = queue_o.front(); queue_o.pop();
        
        while (!queue_s.empty() && queue_s.front() < o_idx) queue_s.pop();
        if (queue_s.empty()) break;
        int s_idx = queue_s.front(); queue_s.pop();
        
        while (!queue_n.empty() && queue_n.front() < s_idx) queue_n.pop();
        if (queue_n.empty()) break;
        int n_idx = queue_n.front(); queue_n.pop();
        
        length += 3;
    }
    
    return (length > 0) ? length : -1;
}

int main() {
    string S;
    cin >> S;
    cout << longest_beautiful_osn(S) << endl;
    return 0;
}
