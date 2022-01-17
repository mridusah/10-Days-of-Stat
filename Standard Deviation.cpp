#include <bits/stdc++.h>
#include<math.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


void stdDev(vector<int> arr) {
    int len=arr.size();
    long long int sum=0,sdsum=0;
    long long sd[len];
    
    for(auto i=arr.begin();i<arr.end();++i)
    {
        sum+=*i;
    }
   
    long long int m=sum/len;
       for(auto i=arr.begin();i<arr.end();++i)
    {
        
        sdsum+=pow((*i-m),2);
        
    }
    
        double standev=sqrt(sdsum/len);
    printf("%0.1lf",standev);
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string vals_temp_temp;
    getline(cin, vals_temp_temp);

    vector<string> vals_temp = split(rtrim(vals_temp_temp));

    vector<int> vals(n);

    for (int i = 0; i < n; i++) {
        int vals_item = stoi(vals_temp[i]);

        vals[i] = vals_item;
    }

    stdDev(vals);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
