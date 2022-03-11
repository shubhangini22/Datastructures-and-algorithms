#include<bits/stdc++.h>
using namespace std;

string convert_to_digital_time(int minutes){
    
    int hr=minutes/60;
    int min=minutes%60;
    string h=to_string(hr);
    string m= min>=10 ? to_string(min) : '0'+to_string(min);
    
    return h+":"+m;
    //complete this function
    }