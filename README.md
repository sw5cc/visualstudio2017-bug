# visualstudio2017-bug

OS: Windows 10 Enterprise N 2016 LTSB X64

VS: VS2017 15.5.0

Step 0: Create a simple empty console project

Step 1: Copy the testcase

```C++
///////////code begin/////////////////
#include <iostream>
using namespace std;

int main()
{
int ia[][3] = { 1, 2, 3, 4, 5, 6 };
// The statement is executed correctly.
for (auto &row : ia) {
for (auto &col : row) {
cout << col << endl;
}
}
// The statement is executed correctly.
for (int i = 0; i < 2; ++i) {
for (int j = 0; j < 3; ++j) {
cout << ia[i][j] << endl;
}
}
// The statement is not executed correctly, only print the first three elements.
for (auto &row : ia)
for (auto &col : row) {
cout << col << endl;
}

return 0; // Set a breakpoint in this line.
}
///////////code end/////////////////
```

Step 2: Set the breakpoint at "return 0"

Step 3: Start debugging

Step 4: Check the console output.

ps: The code piece works correctly in VS2013/VS2015.

ref: https://developercommunity.visualstudio.com/content/problem/170503/bug-vs-2017-c-range-based-for-loop-in-debugger-is.html