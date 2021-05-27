// Hacker-Rank 
// c++ Language 

// Q-3
// Basic Data Type

#include <iostream>
using namespace std;
int main() {
    
    // According to question demand we have use cout & cin instead of scanf & prinf.
    //Here's the simplified code best for understanding
    int intValue;
    long longValue; 
    char charValue; 
    float floatValue;
    double doubleValue;
    
    cout<<"Enter an int value: "<<endl;
    cin>>intValue;
    cout<<"Enter a char value: "<<endl;
    cin>>charValue;
    cout<<"Enter a long value: "<<endl;
    cin>>longValue;
    cout<<"Enter a float value: "<<endl;
    cin>>floatValue;
    cout<<"Enter a double value: "<<endl;
    cin>>doubleValue;
    
    cout<<"intValue: "<<("%d", intValue)<<endl;
    cout<<"longValue: "<<longValue<<endl;
    cout<<"charValue: "<<("%c", charValue)<<endl;
    cout<<"floatValue: "<<("%2f", floatValue)<<endl;
    cout<<"doubleValue: "<<("%5d", doubleValue)<<endl;
    return 0;
}