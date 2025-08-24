#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'isValid' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isValid(string s) {
    
    int arr[26] = {0};
    for(char c :s){
        arr[c - 'a']++;
    }
    
    int maxFreq =0;
    for(int i =0;i<26;i++){
        maxFreq =max(maxFreq,arr[i]);
        
        }
    vector<int> freqCount(maxFreq + 2,0);
    for(int i =0;i<26;i++)
    if(arr[i] > 0)
    freqCount[arr[i]]++;
    
    int diffFreq =0;
    int f1= 0, f2 =0;
    for(int i =1; i<= maxFreq; i++){
        if(freqCount[i] > 0){
            diffFreq++;
            if(f1==0)
            f1 =i;
            else f2 =i;
        
        
                  
    }
    
}
if(diffFreq == 1)return "YES";

if(diffFreq == 2){
    int c1 = freqCount[f1], c2 = freqCount[f2];
    
    if((f1 ==1 && c1 ==1) || (f2 == 1 && c2 == 1))return "YES";
    
    if((abs(f1 -f2) ==1) && ((f1 >f2 && c1 ==1) || (f2 >f1 && c2 ==1)))return "YES";
}

return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
