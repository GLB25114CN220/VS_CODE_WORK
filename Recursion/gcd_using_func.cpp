// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b;
//     cout << "num 1--> ";
//     cin >> a;
//     cout << "num 2--> ";
//     cin >> b;

//     vector<int> fact_1;
//     vector<int> fact_2;

//     for (int i = 1; i <= a; i++)
//     {
//         if (a % i == 0)
//         {
//             fact_1.push_back(i);
//         }
//     }

//     for (int i = 1; i <= b; i++)
//     {
//         if (b % i == 0)
//         {
//             fact_2.push_back(i);
//         }
//     }

//     int n1 = fact_1.size();
//     int n2 = fact_2.size();

//     int st;
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             if (fact_1[i] == fact_2[j])
//             {
//                 st = fact_1[i];
//                 break;
//             }
//         }
//     }
//     cout << "hcf--> " << st << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int hcf(int a, int b)
{
    if (a == 0)
        return b;
    return hcf(b % a, a);
}
int main()
{
    int a, b;
    cin >> a >> b;

    cout << "hcf--> "<<hcf(a, b);
}