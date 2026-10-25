// #include <bits/stdc++.h>
// using namespace std;
// int greater_num(vector<string> s, int index, int max_index)
// {
//     int i = 0, j = 0;
//     while (s[index][i] == 48)
//     {
//         i++;
//     }
//     while (s[max_index][j] == 48)
//     {
//         j++;
//     }
//     int s1_length = s[index].size() - i;
//     int s2_length = s[max_index].size() - j;

//     if (s1_length > s2_length)
//         return index;
//     else if (s1_length < s2_length)
//         return max_index;
//     else // called as lexicographic comparision
//     {
//         if (s[index][i] > s[max_index][j])
//             return index;
//         else if (s[index][i] < s[max_index][j])
//             return max_index;
//     }
//     return index;
// }
// int main()
// {
//     int n;
//     cout << "Enter the size of string : ";
//     cin >> n;
//     cin.ignore();

//     vector<string> s(n);
//     for (int i = 0; i < n; i++)
//     {
//         getline(cin, s[i]);
//     }

//     int index = 0;
//     int max = 0;
//     for (int i = 1; i < s.size(); i++)
//     {
//         max = greater_num(s, i, max);
//     }
//     cout << "Index of max string --> " << max << endl;
//     return 0;
// }


