#include"../Tree.h"


int Comm_Ancestor(int T[], int i, int j){
    if(T[i] != '#' && T[j] != '#'){
        while(i != j){
            if(i > j)
                i = i / 2;
            else
                j = j / 2;
        }
        return i;
    }
}