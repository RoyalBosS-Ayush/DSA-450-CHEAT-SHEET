// https://practice.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1
bool areRotations(string s1,string s2)
{
    if (s1.size() != s2.size())
        return false;

    string temp = s2+s2;
    if(temp.find(s1) == string::npos)
        return false;

    return true;
}