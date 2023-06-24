#include<iostream>
using namespace std;

class TextEditor{
public:
    TextEditor(){
    full_string="";
    c=0;
    }

    void addText(string add){
        full_string.insert(c,add);
        c+=add.length();
    }
    void deleteText(int k){
        if(k>=0){
            if(k<=c){
                full_string.erase(c-k,k);
                c-=k;
            }
            else{
                full_string.erase(0,c);
                c=0;
            }
        }
        else{
            cout<<"should not be negative"<<endl;
        }
    }
    void backspace(){
        if(c>1){
            full_string.erase(c-1,1);
            c-=1;
        }
    }
    int findCursor(){
        return c;
    }
    void cursorLeft(int k){
        if(k>0){
            if(c>=k){
                c-=k;
            }
            else{
                c=0;
            }
        }
        else{
            cout<<"Should be positive"<<endl;
        }
    }
    void cursorRight(int k){
        if(k>0){
            if(c+k<=full_string.length()){
                c+=k;
            }
            else{
                c=full_string.length();
            }
        }
        else{
            cout<<"Should be positive"<<endl;
        }
    }
    string fullText(){
        return full_string;
    }
    string showText(int k){
        if(k>0){
            return full_string.substr(c,k);
        }
        else{
            return "should be positive";
        }
    }

private:
    string full_string;
    int c;
};
int main(){


return 0;
}
