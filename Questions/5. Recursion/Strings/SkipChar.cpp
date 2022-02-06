#include<iostream>
using namespace std;

string Ans(char *str, char ch, string ans)
{
    // base condition
    if(str[0] == '\0'){
        return ans;
    }
    if(str[0] != ch){
        ans.push_back(str[0]);
    }
    return Ans(str + 1, ch, ans);
}

int main()
{
    char str[] = "baccad";
    string ans = Ans(str, 'a', "");
    cout << ans;
    return 0;
}
