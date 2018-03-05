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