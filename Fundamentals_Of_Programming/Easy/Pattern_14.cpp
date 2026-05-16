class Solution {
public:
    void pattern14(int n) {
for(int i=1;i<=n;i++){
    for(char text='A';text<='A'+ i-1;text++){
        cout<<text;
    }
    cout<<endl;
}
    }
};