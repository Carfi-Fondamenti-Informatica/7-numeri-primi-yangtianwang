#include"lib.h"
bool numeriprimi(int n, int a){
  if(n<0){
    return false
    }else if (n==1){
    return true;
  }else if (a==1){
    return true;
  }else if (n%a==0){
    return false;
  }
  numeriprimi(n,--a);
}
