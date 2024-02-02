#include<iostream>
#include<string>
using namespace std;

// char tolowercase(char ch)  // convert uppearcase to lowercase
// {
//     if(ch >='a' && ch<='z')
//     {
//         return ch;
//     }else{
//         char temp=ch-'A'+'a';
//         return temp;
//     }
// }

//*****************************************************************

// bool checkPalindrome(char a[],int n)  // Check Palindrome (compare numbers and characters only)
// {
//     int s=0;
//     int e=n-1;

//     while(s<=e)
//     {
//         if(tolowercase(a[s])!=tolowercase(a[e]))
//         {
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }

//*************************************************************

// void reverse(char array[],int n)  // Perform reverse operation on string
// {
//     int s=0;
//     int e=n-1;
//     while(s<e)
//     {
//         swap(array[s],array[e]);
//         s++;
//         e--;
//     }
// }

//*****************************************************************

// int getLength(char array[])  // Calculate length of string
// {
//     int count=0;
//     for(int i=0;array[i]!='\0';i++)
//     {
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     char name[20];
//     cout<<"Enter your name:";
//     cin>>name;

//     int ans=getLength(name);

//     cout<<"Length of Array is:"<<ans<<endl;

//     reverse(name,ans);
//     cout<<"Name after performing reverse operation:";
//     cout<<name<<endl;

//     checkPalindrome(name,ans);
//     cout<<"Palindrome or Not:"<<checkPalindrome(name,ans);


// }

//*****************String's questions********************

// bool valid(char ch)
// {
//     return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
// }

// char tolowercase(char ch)
// {
//     if (ch >= 'A' && ch <= 'Z') {
        // Convert uppercase letter to lowercase
//         return ch - 'A' + 'a';
//     } else {
        // Return the character unchanged
//         return ch;
//     }

// }

// bool checkPalindrome(string a)
// {
//     int s = 0;
//     int e = a.length() - 1;

//     while (s <= e)
//     {
//         if (a[s] != a[e])
//         {
//             return false;
//         }
//         else
//         {
//             s++;
//             e--;
//         }
//     }
//     return true;
// }

// int main()
// {
//     string s;
//     cout << "Enter string:";
//     cin >> s;

//     string temp = "";
//     for (int j = 0; j < s.length(); j++)
//     {
//         if (valid(s[j]))
//         {
//             temp.push_back(tolowercase(s[j]));
//         }
//     }

//     if (checkPalindrome(temp))
//     {
//         cout << "The entered string is a palindrome." << endl;
//     }
//     else
//     {
//         cout << "The entered string is not a palindrome." << endl;
//     }

//     return 0;
// }

//**************Reverse word in a string******************

// string check(string s)
// {
//     string temp;
//     for(int i=0;i<s.length();i++)
//     {
//         if(s[i] != ' ' && s[i] != '\0')
//         {
//             temp.push_back(s[i]);
//         }
//         else{
//             temp.push_back(' ');
//             continue;
//         }
//     }
//     return temp;

// }

// string reverse(string str1)  // Perform reverse operation on string
// {
//     int s=0;
//     int e=str1.length()-1;
//     while(s<e)
//     {
//         swap(str1[s],str1[e]);
//         s++;
//         e--;
//     }
//     return str1;
// }


// int main() {
//     string sentence;

    // Prompt the user to enter a sentence
//     cout << "Enter a sentence: ";

    // Read the entire line (sentence) until the user presses Enter
//     getline(cin, sentence);

     // Display the entered sentence
//     cout << "You entered: " << sentence <<endl;

//     string ans=check(sentence);
//     string ans2=reverse(ans);

//     cout<<"Now your changed sentence is:"<<ans2;


//     return 0;
// }

//*********************Find count of maximum occuring character in a syring*************************

// char getCount(string str)
// {
//     int array[26]={0};

//     //Create an array of count of characters
//     for(int i=0;i<str.length();i++)
//     {
//         int number=0;
//         char ch=str[i];
//         number=ch-'a';
//         array[number]++;
//     }

//     //Find maximum occuring charatcter
//     int maxi=-1, ans=0;
//     for(int i=0;i<26;i++)
//     {
//         if(maxi < array[i])
//         {
//             ans=i;
//             maxi=array[i];
//         }
//     }

//     char finalAns='a'+ans;
//     return finalAns;
// }

// int main()
// {
//     string s;
//     cout<<"Enter string:"<<endl;
//     cin>>s;

//     char count=getCount(s); //If the input string has an equal count of all characters, the code will return the character corresponding to the first index in the array with the maximum count.

//     cout<<"Maximum occuring character is:"<<count;

// }

//***************Replace space by @40************

// Possible to make changes in original string rather than doing in temp string.increment i by 3 i that case.

// string checkSpace(string &str1)
// {
//     string temp=" ";

//     for(int i=0;i<str1.length();i++)
//     {
//         if(str1[i] == ' ')
//         {
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else{
//             temp.push_back(str1[i]);
//         }

//     }
//     return temp;
// }

// int main()
// {
//     string str;
//     cout<<"Enter string:";
//     getline(cin,str);  // used to read whole string

//     string ans =checkSpace(str);

//     cout<<"New String is:"<<ans;
    
// }

//******************Remove substring present in string************

string RemoveSubstring(string str1, string part)
{
    while(str1.length()!=0 && str1.find(part)< str1.length())
    {
        str1.erase(str1.find(part),part.length());
    }
    return str1;
}


int main()
{
    string str;
    cout<<"Enter string:";
    cin>>str;
    string sstr;
    cout<<"Enter substring which you want to delete:";
    cin>>sstr;
    string ans = RemoveSubstring(str,sstr);
    cout<<"Your ans is:"<<ans;
}