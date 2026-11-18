#include<iostream>
#include<iostream>
int sum(int n){

    if(n>=1){
        return n+sum(n-1);

    }
    else{
        return 0;
    }
}
int sumdigit(int n){

    if(n==0){
        return 0;
    }
    else{
        return (n%10)+sumdigit(n/10);
    }


}
bool ispalindrome(const std::string& str,int l,int r){
    if(l<r){
        if(str[l]==str[r]){
            return ispalindrome(str,l+1,r-1);
        }
        else{
            return 0;
        }
    }
    else{
        return 1;
    }

}
//int max(std::vector<int>& v,int index){
//  if(index<v.size()){
//      while{
//          index=
//      }
//  }
//}
int binary(const std::vector<int>& v,int l,int r,int t){
    if(l<r){
    int mid=((l+r)/2);
    if(v[mid]>t){
        binary(v,l,mid-1,t);
    }
    else if(v[mid]<t){
        binary(v,mid+1,r,t);
    }
    else{
        return mid;
    }
}
    else{
        return 0;
    }
}
int main(){
//  int n=sum(5);
//  std::cout<<n;
//int n=sumdigit(9001);
//std::cout<<n;
//bool f=ispalindrome("Qauid",0,4);
//if(f){
//  std::cout<<"string is palindrome";
//}
//else{
//  std::cout<<"string is not palindrome";
//}
std::vector<int> v={2,5,8,12,16,23,38};
int n=binary(v,0,v.size()-1,16);
std::cout<<n;
}
