#include <iostream>
#include <vector>
#include <utility>

using namespace std;

// int GetMinQuant(vector<int>* dp, int i, int j) {
//     if (j - i == 1)
//     {
//         return 
//     }
    
//     for (size_t k = 0; k < ; i++)
//     {
//         /* code */
//     }
    
// }

int main () {
    int s = 0;
    cin >> s;
    vector<pair<int, int>> matrixes(s);
    for (int i = 0; i < s; i++)
    {
        int first_arg = 0;
        int secont_arg = 0;
        cin >> first_arg >> secont_arg;
        matrixes[i] = make_pair(first_arg, secont_arg);
    }
    vector<vector<int>> dp(s, vector<int> (s, 0));
    


}