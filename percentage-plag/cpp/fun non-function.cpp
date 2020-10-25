//http://moss.stanford.edu/results/7/1098561939756
//File one:
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void fun(int &a){
    a++;
}
int main() {
    int a=0;
    fun(a);
}

//File two:
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a=0;
    a++;
}

//No similarity was found in the two files which means moss can be cheated easily by making functions for also one line
