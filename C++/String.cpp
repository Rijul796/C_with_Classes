#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string s;
    cout << "enter the string: ";
    getline(cin, s);
    cout << "the string is:  " << s<<endl;;
    int n = s.size();
    cout<<"the length of string is: "<<s.length()<<" and size is: "<<n<<endl;
    reverse(s.begin(),s.end());
    cout<<"reverse of the string is: "<<s<<endl;
    int x;
    for (int i = 0; i < n; i++)
    {
        if ((s.at(i) >= 'a' && s.at(i) <= 'z') || (s.at(i) >= 'A' && s.at(i) <= 'Z'))
        {
            x = 0;
        }
        else
        {
            x = 1;
            break;
        }
    }
    if (x == 0)
    {
        cout << "there is no special character !";
    }
    else
        cout << "string contains special characters !";
    return 0;
}
/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    bool has_lowercase = false;
    bool has_uppercase = false;
    bool has_special_char = false;
    bool has_digit = false;

    for (int i = 0; i < n.size(); i++) {
        if (n[i] >= 'a' && n[i] <= 'z') {
            has_lowercase = true;
        } else if (n[i] >= 'A' && n[i] <= 'Z') {
            has_uppercase = true;
        } else if (n[i] == '@' || n[i] == '#' || n[i] == '*' || n[i] == '!') {
            has_special_char = true;
        } else if (n[i] >= '0' && n[i] <= '9') {
            has_digit = true;
        }
    }

    bool flag1 = has_lowercase && has_uppercase && has_special_char && has_digit;

    if (flag1) {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}*/