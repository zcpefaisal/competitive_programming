#include <iostream>
#include <string>
using namespace std;

int solution(int sum){
    string operation;
    cin >> operation;

    if (operation == "++X"){
        ++sum;
    }
    else if (operation == "X++"){
        sum++;
    }
    else if (operation == "--X"){
        --sum;
    }
    else if (operation == "X--"){
        sum--;
    }else{
    }
    return sum;
}

int main()
{
    int test_cases;
    cin >> test_cases;
    int sum = 0;
    while(test_cases--){
        sum = solution(sum);
    }
    cout << sum << endl;
    return 0;
}
