#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    size_t N;
    cin >> N;
    vector<pair<string, int>> words;
    for (size_t i = 0; i < N; ++i) {
        string word;
        cin >> word;
        words.push_back(make_pair(word, i));
    }

    sort(words.begin(), words.end());

    for(auto& word : words) {
        cout << word.second + 1 << " ";
    }
    return 0;
}