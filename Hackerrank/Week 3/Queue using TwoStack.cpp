#include <bits/stdc++.h>
using namespace std;


int main() {    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin>>q;
    stack<int> first,second;
    
    while(q--){
        int type;
        cin>>type;
        
        if(type ==1){
            int x;
            cin>>x;
            first.push(x);
        }
        else if(type ==2){
            if(second.empty()){
                while(!first.empty()){
                    second.push(first.top());
                    first.pop();
                }
            }
            if(!second.empty())
            {
                second.pop();
            }
        }
            else if(type ==3){
                if(second.empty()){
                    while(!first.empty()){
                        second.push(first.top());
                        first.pop();
                    }
                }
                if(!second.empty()){
                    cout<<second.top()<<endl;
                }
                
            }
        }
    
    
       
    return 0;
}
