#include "question/17_Letter_Combinations_of_a_Phone_Number.cpp"
#include "regex"
#include "algm/parse.h"
int main(int argc, char *argv[])
{
    string str = "[[\"\\\"23\\\"\"],[\"\\\"\\\"\"],[\"\\\"2\\\"\"],[\"\\\"\\\"\"]]";
    vector<vector<string>> arr = parseStringArrArr(str);
    for (int i = 0; i < arr.size(); i++)
    {
      vector<string> args = arr[i];
      Solution *s = new Solution();
      string arg0 = parseString(args[0]);
      vector<string> result=s->letterCombinations(arg0);
      string resultabc =serializeStringArr(result);
      cout << "resultabc"+to_string(i)+":" << resultabc <<"resultend"<< endl;
    }
    return 0;
}