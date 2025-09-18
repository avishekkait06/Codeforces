 #include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    char s[100];
    cin >>("%s", &s);
 
    int one = 0, two = 0, three = 0;
 
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == '1')
            one++;
        else if (s[i] == '2')
            two++;
        else if (s[i] == '3')
            three++;
    }
 
    for ( i = 0; i < one; i++)
    {
        if (i > 0)
 
            cout <<("+");
 
        cout << ("1");
    }
 
    for (int i = 0; i < two; i++)
    {
        if (one > 0 || i > 0)
            cout <<("+");
        cout << ("2");
    }
 
    for (int i = 0; i < three; i++)
    {
        if (one > 0 || two > 0 || i > 0)
            cout<<("+");
        cout << ("3");
    }
 
    return 0;
}
 
