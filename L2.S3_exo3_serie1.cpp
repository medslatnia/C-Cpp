#include <iostream>
using namespace std;


     void LectureTab(int T[],int n){
        for (int i=0;i<n;i++){
        cout<<"enter the table's value number : "<<i+1;
        cin>>T[i];
     }
     }

    void TriTab(int *T, int n){
        int temp;
        for (int i=0;i<n;i++){
                for (int j=i+1; j<n;j++){
                        if (T[j]<T[i]){
                                temp = T[i];
                                T[i] = T[j];
                                T[j] = temp;
        }}}}

    void AfficheTab(int *T, int n){
    for(int i=0;i<n;i++){
            cout<<T[i];
    }}

int main ()
    { int n;
    cout<<"Please enter the table's size";
    cin>>n;
    int A[n];

    LectureTab(A, n);
    cout<<"The table elements are";
    AfficheTab(A,n);

    TriTab(A, n);
    cout<<"The table elements after the tri are";
    AfficheTab(A, n);


    return 0;
    }
