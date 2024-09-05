#include<bits/stdc++.h>
using namespace std;
int main()
{
string str,str1,str2;
cin>>str; 
getline(cin,str1); 
getline(cin,str2);                             
cout<<"str is: "<<str<<endl;
cout<<"str1 is: "<<str1<<endl;
cout<<"str2 is: "<<str2<<endl;
/*
HOW IT WORKS:-
1.`string str, str1, str2;`: This declares three string variables named `str`, `str1`, and `str2`.

2.`cin >> str;`: This line uses the `cin` object to read a single word (sequence of characters without spaces) from the standard input and stores it in the variable `str`.

3.`getline(cin, str1);`: This line again uses the `getline` function to read a line of text from the standard input and stores it in the variable `str1`. 
This is used to capture any remaining content in the input buffer after the previous `cin` operation, including the newline character that was left after pressing Enter.

4.`getline(cin, str2);`: This line uses the `getline` function to read a line of text from the standard input (usually the keyboard) and stores it in the variable `str2`. 
This is used to capture the entire line of input, including spaces, until the user presses the Enter key.

5.`cout << "str is: " << str << endl;`: This line prints the content of the variable `str` along with the message "str is: " to the standard output (usually the console).
The `endl` manipulator is used to insert a newline character after printing.

6. `cout << "str1 is: " << str1 << endl;`: Similar to the previous line, this prints the content of the variable `str1` along with the message "str1 is: ".

7. `cout << "str2 is: " << str2 << endl;`: Similarly, this line prints the content of the variable `str2` along with the message "str2 is: ".
*/
/*
Here's an example of how the code might work during execution:
EX 1:
INPUT:
Hello World
Testing
OUTPUT:
str is: Hello
str1 is:  World
str2 is: Testing
EXPLANATION:
Notice that the `cin >> str;` operation only reads a single word "Hello" and stops at the space, leaving the rest of the input in the buffer.
The first `getline(cin, str1);` operation then reads the remaining content " World" (including the space), and the `getline(cin, str2);` operation reads the next full line "Testing".

EX 2:
INPUT:
guntaka pranay reddy
jaideep reddy
OUTPUT:
str is: guntaka
str1 is:  pranay reddy
str2 is: jaideep reddy

EX 3:
INPUT:
guntakapranayreddy
guntakajaideepreddy
OUTPUT:
str is: guntakapranayreddy
str1 is: 
str2 is: guntakajaideepreddy
*/
 
}