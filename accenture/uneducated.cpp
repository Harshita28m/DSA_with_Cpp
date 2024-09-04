#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {0, 0, 1, 0, 0, 1, 0, 0};
    int count = 0;
    int sum = 0;
    bool flag = false;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            count++;
        if (v[i] == 1)
        {
            if (flag == false)
            {
                sum += (count * (count + 1)) / 2;
                cout<<sum<<endl;
            }
            else
            {
                if (count % 2 == 0)
                {
                    int even = count / 2;
                    sum += 2 * ((even * (even + 1)) / 2);
                    cout<<sum<<endl;
                }
                else
                {
                    int i = count / 2;
                    int j = count - i;
                    sum += ((i * (i + 1)) / 2) + ((j * (j + 1)) / 2);
                    cout<<sum<<endl;
                }
            }
            flag=true;

            count = 0;
        }
    }
    if(count!=0) sum += (count * (count + 1)) / 2;
    cout << sum;
    return 0;
}

// 0 0 1 0 0 1 0 0