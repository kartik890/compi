#include <bits/stdc++.h>

using namespace std;
typedef long unsigned int ls;


// Complete the isValid function below.
string isValid(string s) 
{
    ls c[26]={0};
    for(ls i=0;i<s.size();i++)
    c[s[i]-'a']++;
    set <char> d;
    for(ls i=0;i<s.size();i++)
    d.insert(s[i]);
    set <ls> d1;
    set <char>:: iterator it;
    it = d.begin();
    for(ls i=0;i<d.size();i++,it++)
    {
        d1.insert(c[*it]-'a');
    }
    set<ls> ::iterator i;
    i = d1.begin();
    if(d1.size()>2)
    return "NO";
    else if(d1.size()==1)
    return "YES";
    else if(d1.size()==2 && *i - *(++i)==1)
    return "YES";
    else
    return "NO";
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
