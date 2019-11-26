#include <bits/stdc++.h>

using namespace std;


int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    string l="abcdefghijklmnopqrstuvwxyz",u="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string d="0123456789",s="!@#$%^&*()-+";
    int len=password.size(),cd=0,cl=0,cu=0,cs=0,count=0;
    size_t fl,fu,fd,fs;
    for(int i=0;password[i];i++)
    {
        fl=l.find(password[i]);
        fu=u.find(password[i]);
        fd=d.find(password[i]);
        fs=s.find(password[i]);
        if(fl!=string::npos)
        cl++;
        else if(fu!=string::npos)
        cu++;
        else if(fd!=string::npos)
        cd++;
        else if(fs!=string::npos)
        cs++;
    }
    if(cl==0)
    count++;
    if(cu==0)
    count++;
    if(cd==0)
    count++;
    if(cs==0)
    count++;
    if(len+count<6)
    return 6-len;
    else 
    return count;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

