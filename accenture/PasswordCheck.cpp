#include <bits/stdc++.h>
using namespace std;

// bool charFreq(string s)
// {
//     if (s.size() < 4)
//         return 0;
//     return 1;
// }

// bool numericDigit(string s)
// {
//     bool flag = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         cout<<int(s[i])<<" , ";
//         if (47 < int(s[i]) && int(s[i]) < 58)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     cout<<endl;
//     if (flag == 1)
//         return 1;
//     else return 0;
// }

// bool capitalLetter(string s)
// {
//     bool flag = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (64 < int(s[i]) && int(s[i]) < 91)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 1)
//         return 1;
//     else
//         0;
// }

// bool Space(string s)
// {
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == '/' || s[i] == ' ')
//             return 0;
//     }
//     return 1;
// }

bool passwordCheck(string s)
{
    int n = s.size();
    if(n<4) return 0;
    if(47 < int(s[0]) && int(s[0]) < 58) return 0;
    bool isCapital = 0;
    bool isNumber =0;
    for(int i=0;i<n;i++){
        if ((s[i] == '/' || s[i] == ' ')) return 0;
        if(64 < int(s[i]) && int(s[i]) < 91) isCapital = 1;
        if(47 < int(s[i]) && int(s[i]) < 58) isNumber = 1;
         
        
    }
    if (isCapital && isNumber) return 1;
    return 0;
    // if (31 < int(s[0]) && int(s[0]) < 42)
    //     return 0;
    //     cout<<charFreq(s)<<" "<<numericDigit(s)<<" "<<capitalLetter(s)<<" "<<Space(s)<<endl;
    // if (charFreq(s) && numericDigit(s) && capitalLetter(s) && Space(s))
    //     return 1;
    // return 0;
}

int main()
{
    cout << passwordCheck("aA1_98b");
    return 0;
}