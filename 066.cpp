// https://practice.geeksforgeeks.org/problems/convert-a-sentence-into-its-equivalent-mobile-numeric-keypad-sequence0547/1
string printSequence(string S)
{
    string ans="", m[] = {"2", "22", "222", "3", "33", "333", "4", "44", "444", "5", "55", "555", "6", "66", "666", "7", "77", "777", "7777", "8", "88", "888", "9", "99", "999", "9999", "0"};

    for (char ch: S)
        if (ch == ' ')
            ans += "0";
        else
            ans += m[ch-'A'];
    
    return ans;
}