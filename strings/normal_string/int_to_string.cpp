// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "n--> ";
//     cin >> n;

//     // string s = to_string(n);  // this int to string conversion can be done with help of inbuilt function

//     string s;
//     int ld, r = 0;
//     if (n >= 0)
//     {
//         while (n != 0)
//         {
//             ld = n % 10;
//             r = ld + (r * 10);
//             n /= 10;
//         }
//         while (r != 0)
//         {
//             ld = r % 10;
//             s.push_back(48 + ld);
//             r /= 10;
//         }
//         cout << "String is = " << s << endl;
//     }
//     else // in negative string conversion at the end just add negative sign ;
//     {
//         n *= -1;
//         while (n != 0)
//         {
//             ld = n % 10;
//             s.push_back(48 + ld);
//             n /= 10;
//         }
//         s.push_back(45);
//         int n = s.size();
//         int i = 0, j = n - 1;
//         while (i < j)
//         {
//             swap(s[i], s[j]);
//             i++;
//             j--;
//         }
//         cout << "String is = " << s << endl;
//     }
//     return 0;
// }







// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "n--> ";
//     cin >> n;

//     string s;

//     if (n < 0)
//     {
//         n = n * -1;

//         while (n != 0)
//         {
//             int ld = n % 10;
//             s.push_back(ld + 48);
//             n = n / 10;
//         }
//         s.push_back(45);

//         int st = s.size();
//         for (int i = 0, j = st - 1; i < j; i++, j--)
//         {
//             int temp = s[i];
//             s[i] = s[j];
//             s[j] = temp;
//         }
//     }

//     else{
//         while (n != 0)
//         {
//             int ld = n % 10;
//             s.push_back(ld + 48);
//             n = n / 10;
//         }
    
//         int st = s.size();
//         for (int i = 0, j = st - 1; i < j; i++, j--)
//         {
//             int temp = s[i];
//             s[i] = s[j];
//             s[j] = temp;
//         }
//     }
//     cout << s << endl;
//     return 0;
// }