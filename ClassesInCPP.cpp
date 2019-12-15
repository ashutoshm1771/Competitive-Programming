#include <iostream>
#include <sstream>
#include<string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    public:
    int a,s;
    string f,l,str2;
    ostringstream str1,str3;
    void set_age(int age)
    {
        a=age;
    }
    void set_standard(int st){
        s=st;
    }
    void set_first_name(string fn)
    {
        f=fn;
    }
    void set_last_name(string ln)
    {
        l=ln;
    }
    int get_age()
    {
        return a;
    }
    int get_standard()
    {
        return s;
    }
    string get_first_name()
    {
        return f;
    }
    string get_last_name()
    {
        return l;
    }
    string to_string()
    {
        str1<<a;
        str3<<s;
        str2=str1.str()+","+f+","+l+","+str3.str();
        return str2;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}


