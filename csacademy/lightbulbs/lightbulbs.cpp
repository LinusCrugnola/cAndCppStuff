#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[51];
    bool pos = true;
    uint64_t p = 0, m = 0;

    cin.getline(str, 51);

    for(size_t i = 0; i<51; ++i) {
        if(str[i] == '\0')
            break;
        p = p << 1;
        m = m << 1;
        if(str[i] == '1') {
            if(pos)
                p += 1;
            else
                m += 1;
            pos = !pos;
        }
    }
    
    cout << (pos ? ((p<<1) - (m<<1)) : ((p<<1) - (m<<1) -1)) << endl;

    return 0;
}
