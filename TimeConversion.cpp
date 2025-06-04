// 

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string hour = s.substr(0, 2);
    char mer = s[s.size() - 2];

    if(mer == 'A')
    {
        if(hour == "12")
            s.replace(0, 2, "00");
        return s.substr(0, s.size() - 2);
    }
    else if(mer == 'P')
    {
        if(hour != "12")
        {
            int num = stoi(hour);
            num += 12;
            s.replace(0, 2, to_string(num));
        }
        return s.substr(0, s.size() - 2);
    }
    return "";
}

int main()
{
    string num;
    cin >> num;
    cout << timeConversion(num);
    return 0;
}
