#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int hole[18];
int score[18];
 int ans[18];
 int total;
int main()
{
    for (int i = 0; i < 18; i++) {
        int x;
        cin >> x; cin.ignore();
        hole[i]=x;
    }
    for (int i = 0; i < 18; i++) {
        int x;
        cin >> x; cin.ignore();
        score[i]=x;
        ans[i]=-hole[i]+score[i];
        total=total+ans[i];
    }
   

    cout << total << endl;
}
